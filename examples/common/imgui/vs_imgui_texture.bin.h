static const uint8_t vs_imgui_texture_glsl[430] =
{
	0x56, 0x53, 0x48, 0x03, 0x01, 0x83, 0xf2, 0xe1, 0x01, 0x00, 0x0a, 0x75, 0x5f, 0x76, 0x69, 0x65, // VSH........u_vie
	0x77, 0x50, 0x72, 0x6f, 0x6a, 0x09, 0x01, 0x00, 0x00, 0x01, 0x00, 0x8e, 0x01, 0x00, 0x00, 0x61, // wProj..........a
	0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x70, // ttribute mediump
	0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x61, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, //  vec4 a_color0;.
	0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, // attribute medium
	0x70, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, // p vec2 a_positio
	0x6e, 0x3b, 0x0a, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x6d, 0x65, 0x64, // n;.attribute med
	0x69, 0x75, 0x6d, 0x70, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, // iump vec2 a_texc
	0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x6d, // oord0;.varying m
	0x65, 0x64, 0x69, 0x75, 0x6d, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x76, 0x5f, 0x63, 0x6f, // ediump vec4 v_co
	0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x6d, 0x65, // lor0;.varying me
	0x64, 0x69, 0x75, 0x6d, 0x70, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, // diump vec2 v_tex
	0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, // coord0;.uniform 
	0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x70, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x76, // mediump mat4 u_v
	0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, // iewProj;.void ma
	0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, // in ().{.  medium
	0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, // p vec4 tmpvar_1;
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x7a, 0x77, 0x20, 0x3d, // .  tmpvar_1.zw =
	0x20, 0x76, 0x65, 0x63, 0x32, 0x28, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x3b, //  vec2(0.0, 1.0);
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x78, 0x79, 0x20, 0x3d, // .  tmpvar_1.xy =
	0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x20, 0x20, 0x67, //  a_position;.  g
	0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x28, 0x75, 0x5f, // l_Position = (u_
	0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // viewProj * tmpva
	0x72, 0x5f, 0x31, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, // r_1);.  v_texcoo
	0x72, 0x64, 0x30, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, // rd0 = a_texcoord
	0x30, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x20, 0x3d, 0x20, // 0;.  v_color0 = 
	0x61, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,             // a_color0;.}...
};
static const uint8_t vs_imgui_texture_dx9[326] =
{
	0x56, 0x53, 0x48, 0x03, 0x01, 0x83, 0xf2, 0xe1, 0x01, 0x00, 0x0a, 0x75, 0x5f, 0x76, 0x69, 0x65, // VSH........u_vie
	0x77, 0x50, 0x72, 0x6f, 0x6a, 0x09, 0x01, 0x00, 0x00, 0x04, 0x00, 0x28, 0x01, 0x00, 0x03, 0xfe, // wProj......(....
	0xff, 0xfe, 0xff, 0x22, 0x00, 0x43, 0x54, 0x41, 0x42, 0x1c, 0x00, 0x00, 0x00, 0x53, 0x00, 0x00, // ...".CTAB....S..
	0x00, 0x00, 0x03, 0xfe, 0xff, 0x01, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x81, 0x00, // ................
	0x00, 0x4c, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, // .L...0..........
	0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, // .<.......u_viewP
	0x72, 0x6f, 0x6a, 0x00, 0xab, 0x03, 0x00, 0x03, 0x00, 0x04, 0x00, 0x04, 0x00, 0x01, 0x00, 0x00, // roj.............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x76, 0x73, 0x5f, 0x33, 0x5f, 0x30, 0x00, 0x4d, 0x69, 0x63, 0x72, // .....vs_3_0.Micr
	0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, 0x20, 0x53, // osoft (R) HLSL S
	0x68, 0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x20, 0x39, // hader Compiler 9
	0x2e, 0x32, 0x39, 0x2e, 0x39, 0x35, 0x32, 0x2e, 0x33, 0x31, 0x31, 0x31, 0x00, 0x1f, 0x00, 0x00, // .29.952.3111....
	0x02, 0x0a, 0x00, 0x00, 0x80, 0x00, 0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, // ................
	0x80, 0x01, 0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x00, 0x80, 0x02, 0x00, 0x0f, // ................
	0x90, 0x1f, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x0f, 0xe0, 0x1f, 0x00, 0x00, // ................
	0x02, 0x0a, 0x00, 0x00, 0x80, 0x01, 0x00, 0x0f, 0xe0, 0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x00, // ................
	0x80, 0x02, 0x00, 0x03, 0xe0, 0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0f, 0x80, 0x01, 0x00, 0xe4, // ................
	0xa0, 0x01, 0x00, 0x55, 0x90, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0xe4, // ...U............
	0xa0, 0x01, 0x00, 0x00, 0x90, 0x00, 0x00, 0xe4, 0x80, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0f, // ................
	0xe0, 0x00, 0x00, 0xe4, 0x80, 0x03, 0x00, 0xe4, 0xa0, 0x01, 0x00, 0x00, 0x02, 0x01, 0x00, 0x0f, // ................
	0xe0, 0x00, 0x00, 0xe4, 0x90, 0x01, 0x00, 0x00, 0x02, 0x02, 0x00, 0x03, 0xe0, 0x02, 0x00, 0xe4, // ................
	0x90, 0xff, 0xff, 0x00, 0x00, 0x00,                                                             // ......
};
static const uint8_t vs_imgui_texture_dx11[1347] =
{
	0x56, 0x53, 0x48, 0x03, 0x01, 0x83, 0xf2, 0xe1, 0x01, 0x00, 0x0a, 0x75, 0x5f, 0x76, 0x69, 0x65, // VSH........u_vie
	0x77, 0x50, 0x72, 0x6f, 0x6a, 0x09, 0x00, 0x20, 0x01, 0x04, 0x00, 0x1c, 0x05, 0x44, 0x58, 0x42, // wProj.. .....DXB
	0x43, 0x7b, 0x3a, 0xc5, 0xe7, 0x60, 0x7d, 0xdb, 0xc7, 0xd9, 0xfe, 0x3a, 0xed, 0xb1, 0x1d, 0xff, // C{:..`}....:....
	0xc6, 0x01, 0x00, 0x00, 0x00, 0x1c, 0x05, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, // .............4..
	0x00, 0xb4, 0x02, 0x00, 0x00, 0x24, 0x03, 0x00, 0x00, 0x98, 0x03, 0x00, 0x00, 0xa0, 0x04, 0x00, // .....$..........
	0x00, 0x52, 0x44, 0x45, 0x46, 0x78, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, // .RDEFx.......H..
	0x00, 0x01, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x04, 0xfe, 0xff, 0x00, 0x91, 0x00, // ................
	0x00, 0x44, 0x02, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .D...<..........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x73, 0x00, 0xab, 0xab, // .....$Globals...
	0xab, 0x3c, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x30, 0x0a, 0x00, // .<.......`...0..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8c, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x9c, 0x01, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x8c, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa8, 0x01, 0x00, 0x00, 0x20, 0x00, 0x00, // ............. ..
	0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // .@..............
	0x00, 0xc0, 0x01, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .....`...@......
	0x00, 0xb0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xca, 0x01, 0x00, 0x00, 0xa0, 0x00, 0x00, // ................
	0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // .@..............
	0x00, 0xd1, 0x01, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .........@......
	0x00, 0xb0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xdb, 0x01, 0x00, 0x00, 0x20, 0x01, 0x00, // ............. ..
	0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xb0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // .@..............
	0x00, 0xe6, 0x01, 0x00, 0x00, 0x60, 0x01, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .....`...@......
	0x00, 0xb0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf4, 0x01, 0x00, 0x00, 0xa0, 0x01, 0x00, // ................
	0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x0c, 0x02, 0x00, 0x00, 0xa0, 0x09, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .........@......
	0x00, 0xb0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x02, 0x00, 0x00, 0xe0, 0x09, 0x00, // ................
	0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // .@..............
	0x00, 0x28, 0x02, 0x00, 0x00, 0x20, 0x0a, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .(... ..........
	0x00, 0x34, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x52, // .4.......u_viewR
	0x65, 0x63, 0x74, 0x00, 0xab, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, // ect.............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x54, 0x65, 0x78, 0x65, 0x6c, // .....u_viewTexel
	0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x00, 0xab, 0x03, 0x00, 0x03, 0x00, 0x04, 0x00, 0x04, // .u_view.........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x56, 0x69, // .........u_invVi
	0x65, 0x77, 0x00, 0x75, 0x5f, 0x70, 0x72, 0x6f, 0x6a, 0x00, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x50, // ew.u_proj.u_invP
	0x72, 0x6f, 0x6a, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x75, // roj.u_viewProj.u
	0x5f, 0x69, 0x6e, 0x76, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x75, 0x5f, 0x6d, // _invViewProj.u_m
	0x6f, 0x64, 0x65, 0x6c, 0x00, 0x03, 0x00, 0x03, 0x00, 0x04, 0x00, 0x04, 0x00, 0x20, 0x00, 0x00, // odel......... ..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, // .....u_modelView
	0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, // .u_modelViewProj
	0x00, 0x75, 0x5f, 0x61, 0x6c, 0x70, 0x68, 0x61, 0x52, 0x65, 0x66, 0x00, 0xab, 0x00, 0x00, 0x03, // .u_alphaRef.....
	0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4d, 0x69, 0x63, // .............Mic
	0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, 0x20, // rosoft (R) HLSL 
	0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x20, // Shader Compiler 
	0x39, 0x2e, 0x32, 0x39, 0x2e, 0x39, 0x35, 0x32, 0x2e, 0x33, 0x31, 0x31, 0x31, 0x00, 0xab, 0xab, // 9.29.952.3111...
	0xab, 0x49, 0x53, 0x47, 0x4e, 0x68, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, // .ISGNh..........
	0x00, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // .P..............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x00, 0x00, 0x56, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .........V......
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, // ................
	0x00, 0x5f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // ._..............
	0x00, 0x02, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x43, 0x4f, 0x4c, 0x4f, 0x52, 0x00, 0x50, // .........COLOR.P
	0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, // OSITION.TEXCOORD
	0x00, 0x4f, 0x53, 0x47, 0x4e, 0x6c, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, // .OSGNl..........
	0x00, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // .P..............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, // ................
	0x00, 0x62, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // .b..............
	0x00, 0x02, 0x00, 0x00, 0x00, 0x03, 0x0c, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, // .........SV_POSI
	0x54, 0x49, 0x4f, 0x4e, 0x00, 0x43, 0x4f, 0x4c, 0x4f, 0x52, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, // TION.COLOR.TEXCO
	0x4f, 0x52, 0x44, 0x00, 0xab, 0x53, 0x48, 0x44, 0x52, 0x00, 0x01, 0x00, 0x00, 0x40, 0x00, 0x01, // ORD..SHDR....@..
	0x00, 0x40, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x04, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, // .@...Y...F. ....
	0x00, 0x16, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x03, 0xf2, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, // ....._..........
	0x00, 0x5f, 0x00, 0x00, 0x03, 0x32, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, // ._...2......._..
	0x03, 0x32, 0x10, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x67, 0x00, 0x00, 0x04, 0xf2, 0x20, 0x10, // .2.......g.... .
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, 0x10, // .........e.... .
	0x00, 0x01, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0x32, 0x20, 0x10, 0x00, 0x02, 0x00, 0x00, // .....e...2 .....
	0x00, 0x68, 0x00, 0x00, 0x02, 0x01, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x08, 0xf2, 0x00, 0x10, // .h.......8......
	0x00, 0x00, 0x00, 0x00, 0x00, 0x56, 0x15, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, // .....V.......F. 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, // .........2......
	0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, // .....F. ........
	0x00, 0x06, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, // .........F......
	0x00, 0x00, 0x00, 0x00, 0x08, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, // ...... ......F..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00, // .....F. ........
	0x00, 0x36, 0x00, 0x00, 0x05, 0xf2, 0x20, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x1e, 0x10, // .6.... ......F..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0x32, 0x20, 0x10, 0x00, 0x02, 0x00, 0x00, // .....6...2 .....
	0x00, 0x46, 0x10, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x01, 0x53, 0x54, 0x41, // .F.......>...STA
	0x54, 0x74, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // Tt..............
	0x00, 0x06, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x05, 0x00, 0x01, 0x00, 0x10, // ................
	0x00, 0x30, 0x0a,                                                                               // .0.
};
