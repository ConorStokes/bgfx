/*
 * Copyright 2011-2014 Branimir Karadzic. All rights reserved.
 * License: http://www.opensource.org/licenses/BSD-2-Clause
 */

#include <vector>
#include <string>

#include <bgfx.h>
#include <bx/readerwriter.h>
#include <bx/fpumath.h>
#include "entry/entry.h"

void* load(bx::FileReaderI* _reader, const char* _filePath)
{
	if (0 == bx::open(_reader, _filePath) )
	{
		uint32_t size = (uint32_t)bx::getSize(_reader);
		void* data = malloc(size);
		bx::read(_reader, data, size);
		bx::close(_reader);
		return data;
	}

	return NULL;
}

void* load(const char* _filePath)
{
	return load(entry::getFileReader(), _filePath);
}

static const bgfx::Memory* loadMem(bx::FileReaderI* _reader, const char* _filePath)
{
	if (0 == bx::open(_reader, _filePath) )
	{
		uint32_t size = (uint32_t)bx::getSize(_reader);
		const bgfx::Memory* mem = bgfx::alloc(size+1);
		bx::read(_reader, mem->data, size);
		bx::close(_reader);
		mem->data[mem->size-1] = '\0';
		return mem;
	}

	return NULL;
}

static bgfx::ShaderHandle loadShader(bx::FileReaderI* _reader, const char* _name)
{
	char filePath[512];

	const char* shaderPath = "shaders/dx9/";

	switch (bgfx::getRendererType() )
	{
	case bgfx::RendererType::Direct3D11:
		shaderPath = "shaders/dx11/";
		break;

	case bgfx::RendererType::OpenGL:
		shaderPath = "shaders/glsl/";
		break;

	case bgfx::RendererType::OpenGLES:
		shaderPath = "shaders/gles/";
		break;

	default:
		break;
	}

	strcpy(filePath, shaderPath);
	strcat(filePath, _name);
	strcat(filePath, ".bin");

	return bgfx::createShader(loadMem(_reader, filePath) );
}

bgfx::ShaderHandle loadShader(const char* _name)
{
	return loadShader(entry::getFileReader(), _name);
}

bgfx::ProgramHandle loadProgram(bx::FileReaderI* _reader, const char* _vsName, const char* _fsName)
{
	bgfx::ShaderHandle vsh = loadShader(_reader, _vsName);
	bgfx::ShaderHandle fsh = loadShader(_reader, _fsName);

	return bgfx::createProgram(vsh, fsh, true /* destroy shaders when program is destroyed */);
}

bgfx::ProgramHandle loadProgram(const char* _vsName, const char* _fsName)
{
	return loadProgram(entry::getFileReader(), _vsName, _fsName);
}

bgfx::TextureHandle loadTexture(bx::FileReaderI* _reader, const char* _name, uint32_t _flags, uint8_t _skip, bgfx::TextureInfo* _info)
{
	char filePath[512];
	strcpy(filePath, "textures/");
	strcat(filePath, _name);

	const bgfx::Memory* mem = loadMem(_reader, filePath);

	return bgfx::createTexture(mem, _flags, _skip, _info);
}

bgfx::TextureHandle loadTexture(const char* _name, uint32_t _flags, uint8_t _skip, bgfx::TextureInfo* _info)
{
	return loadTexture(entry::getFileReader(), _name, _flags, _skip, _info);
}

void calcTangents(void* _vertices, uint16_t _numVertices, bgfx::VertexDecl _decl, const uint16_t* _indices, uint32_t _numIndices)
{
	struct PosTexcoord
	{
		float m_x;
		float m_y;
		float m_z;
		float m_pad0;
		float m_u;
		float m_v;
		float m_pad1;
		float m_pad2;
	};

	float* tangents = new float[6*_numVertices];
	memset(tangents, 0, 6*_numVertices*sizeof(float) );

	PosTexcoord v0;
	PosTexcoord v1;
	PosTexcoord v2;

	for (uint32_t ii = 0, num = _numIndices/3; ii < num; ++ii)
	{
		const uint16_t* indices = &_indices[ii*3];
		uint32_t i0 = indices[0];
		uint32_t i1 = indices[1];
		uint32_t i2 = indices[2];

		bgfx::vertexUnpack(&v0.m_x, bgfx::Attrib::Position,  _decl, _vertices, i0);
		bgfx::vertexUnpack(&v0.m_u, bgfx::Attrib::TexCoord0, _decl, _vertices, i0);

		bgfx::vertexUnpack(&v1.m_x, bgfx::Attrib::Position,  _decl, _vertices, i1);
		bgfx::vertexUnpack(&v1.m_u, bgfx::Attrib::TexCoord0, _decl, _vertices, i1);

		bgfx::vertexUnpack(&v2.m_x, bgfx::Attrib::Position,  _decl, _vertices, i2);
		bgfx::vertexUnpack(&v2.m_u, bgfx::Attrib::TexCoord0, _decl, _vertices, i2);

		const float bax = v1.m_x - v0.m_x;
		const float bay = v1.m_y - v0.m_y;
		const float baz = v1.m_z - v0.m_z;
		const float bau = v1.m_u - v0.m_u;
		const float bav = v1.m_v - v0.m_v;

		const float cax = v2.m_x - v0.m_x;
		const float cay = v2.m_y - v0.m_y;
		const float caz = v2.m_z - v0.m_z;
		const float cau = v2.m_u - v0.m_u;
		const float cav = v2.m_v - v0.m_v;

		const float det = (bau * cav - bav * cau);
		const float invDet = 1.0f / det;

		const float tx = (bax * cav - cax * bav) * invDet;
		const float ty = (bay * cav - cay * bav) * invDet;
		const float tz = (baz * cav - caz * bav) * invDet;

		const float bx = (cax * bau - bax * cau) * invDet;
		const float by = (cay * bau - bay * cau) * invDet;
		const float bz = (caz * bau - baz * cau) * invDet;

		for (uint32_t jj = 0; jj < 3; ++jj)
		{
			float* tanu = &tangents[indices[jj]*6];
			float* tanv = &tanu[3];
			tanu[0] += tx;
			tanu[1] += ty;
			tanu[2] += tz;

			tanv[0] += bx;
			tanv[1] += by;
			tanv[2] += bz;
		}
	}

	for (uint32_t ii = 0; ii < _numVertices; ++ii)
	{
		const float* tanu = &tangents[ii*6];
		const float* tanv = &tangents[ii*6 + 3];

		float normal[4];
		bgfx::vertexUnpack(normal, bgfx::Attrib::Normal, _decl, _vertices, ii);
		float ndt = bx::vec3Dot(normal, tanu);

		float nxt[3];
		bx::vec3Cross(nxt, normal, tanu);

		float tmp[3];
		tmp[0] = tanu[0] - normal[0] * ndt;
		tmp[1] = tanu[1] - normal[1] * ndt;
		tmp[2] = tanu[2] - normal[2] * ndt;

		float tangent[4];
		bx::vec3Norm(tangent, tmp);

		tangent[3] = bx::vec3Dot(nxt, tanv) < 0.0f ? -1.0f : 1.0f;
		bgfx::vertexPack(tangent, true, bgfx::Attrib::Tangent, _decl, _vertices, ii);
	}

	delete [] tangents;
} 

struct Aabb
{
	float m_min[3];
	float m_max[3];
};

struct Obb
{
	float m_mtx[16];
};

struct Sphere
{
	float m_center[3];
	float m_radius;
};

struct Primitive
{
	uint32_t m_startIndex;
	uint32_t m_numIndices;
	uint32_t m_startVertex;
	uint32_t m_numVertices;

	Sphere m_sphere;
	Aabb m_aabb;
	Obb m_obb;
};

typedef std::vector<Primitive> PrimitiveArray;

struct Group
{
	Group()
	{
		reset();
	}

	void reset()
	{
		m_vbh.idx = bgfx::invalidHandle;
		m_ibh.idx = bgfx::invalidHandle;
		m_prims.clear();
	}

	bgfx::VertexBufferHandle m_vbh;
	bgfx::IndexBufferHandle m_ibh;
	Sphere m_sphere;
	Aabb m_aabb;
	Obb m_obb;
	PrimitiveArray m_prims;
};

namespace bgfx
{
	int32_t read(bx::ReaderI* _reader, bgfx::VertexDecl& _decl);
}

struct Mesh
{
	void load(bx::ReaderSeekerI* _reader)
	{
#define BGFX_CHUNK_MAGIC_VB  BX_MAKEFOURCC('V', 'B', ' ', 0x1)
#define BGFX_CHUNK_MAGIC_IB  BX_MAKEFOURCC('I', 'B', ' ', 0x0)
#define BGFX_CHUNK_MAGIC_PRI BX_MAKEFOURCC('P', 'R', 'I', 0x0)

		using namespace bx;
		using namespace bgfx;

		Group group;

		uint32_t chunk;
		while (4 == bx::read(_reader, chunk) )
		{
			switch (chunk)
			{
			case BGFX_CHUNK_MAGIC_VB:
				{
					read(_reader, group.m_sphere);
					read(_reader, group.m_aabb);
					read(_reader, group.m_obb);

					read(_reader, m_decl);

					uint16_t stride = m_decl.getStride();

					uint16_t numVertices;
					read(_reader, numVertices);
					const bgfx::Memory* mem = bgfx::alloc(numVertices*stride);
					read(_reader, mem->data, mem->size);

					group.m_vbh = bgfx::createVertexBuffer(mem, m_decl);
				}
				break;

			case BGFX_CHUNK_MAGIC_IB:
				{
					uint32_t numIndices;
					read(_reader, numIndices);
					const bgfx::Memory* mem = bgfx::alloc(numIndices*2);
					read(_reader, mem->data, mem->size);
					group.m_ibh = bgfx::createIndexBuffer(mem);
				}
				break;

			case BGFX_CHUNK_MAGIC_PRI:
				{
					uint16_t len;
					read(_reader, len);

					std::string material;
					material.resize(len);
					read(_reader, const_cast<char*>(material.c_str() ), len);

					uint16_t num;
					read(_reader, num);

					for (uint32_t ii = 0; ii < num; ++ii)
					{
						read(_reader, len);

						std::string name;
						name.resize(len);
						read(_reader, const_cast<char*>(name.c_str() ), len);

						Primitive prim;
						read(_reader, prim.m_startIndex);
						read(_reader, prim.m_numIndices);
						read(_reader, prim.m_startVertex);
						read(_reader, prim.m_numVertices);
						read(_reader, prim.m_sphere);
						read(_reader, prim.m_aabb);
						read(_reader, prim.m_obb);

						group.m_prims.push_back(prim);
					}

					m_groups.push_back(group);
					group.reset();
				}
				break;

			default:
				DBG("%08x at %d", chunk, bx::skip(_reader, 0) );
				break;
			}
		}
	}

	void unload()
	{
		for (GroupArray::const_iterator it = m_groups.begin(), itEnd = m_groups.end(); it != itEnd; ++it)
		{
			const Group& group = *it;
			bgfx::destroyVertexBuffer(group.m_vbh);

			if (bgfx::isValid(group.m_ibh) )
			{
				bgfx::destroyIndexBuffer(group.m_ibh);
			}
		}
		m_groups.clear();
	}

	void submit(uint8_t _id, bgfx::ProgramHandle _program, float* _mtx, uint64_t _state)
	{
		if (BGFX_STATE_MASK == _state)
		{
			_state = 0
				| BGFX_STATE_RGB_WRITE
				| BGFX_STATE_ALPHA_WRITE
				| BGFX_STATE_DEPTH_WRITE
				| BGFX_STATE_DEPTH_TEST_LESS
				| BGFX_STATE_CULL_CCW
				| BGFX_STATE_MSAA
				;
		}

		for (GroupArray::const_iterator it = m_groups.begin(), itEnd = m_groups.end(); it != itEnd; ++it)
		{
			const Group& group = *it;

			// Set model matrix for rendering.
			bgfx::setTransform(_mtx);
			bgfx::setProgram(_program);
			bgfx::setIndexBuffer(group.m_ibh);
			bgfx::setVertexBuffer(group.m_vbh);
			bgfx::setState(_state);
			bgfx::submit(_id);
		}
	}

	bgfx::VertexDecl m_decl;
	typedef std::vector<Group> GroupArray;
	GroupArray m_groups;
};

Mesh* meshLoad(bx::ReaderSeekerI* _reader)
{
	Mesh* mesh = new Mesh;
	mesh->load(_reader);
	return mesh;
}

Mesh* meshLoad(const char* _filePath)
{
	bx::FileReaderI* reader = entry::getFileReader();
	bx::open(reader, _filePath);
	Mesh* mesh = meshLoad(reader);
	bx::close(reader);
	return mesh;
}

void meshUnload(Mesh* _mesh)
{
	_mesh->unload();
	delete _mesh;
}

void meshSubmit(Mesh* _mesh, uint8_t _id, bgfx::ProgramHandle _program, float* _mtx, uint64_t _state)
{
	_mesh->submit(_id, _program, _mtx, _state);
}
