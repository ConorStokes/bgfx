static const uint8_t fs_font_distance_field_glsl[1020] =
{
	0x46, 0x53, 0x48, 0x03, 0x01, 0x83, 0xf2, 0xe1, 0x01, 0x00, 0x0a, 0x75, 0x5f, 0x74, 0x65, 0x78, // FSH........u_tex
	0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0xdc, 0x03, 0x00, 0x00, 0x76, // Color..........v
	0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x70, 0x20, 0x76, // arying mediump v
	0x65, 0x63, 0x34, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x76, 0x61, // ec4 v_color0;.va
	0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x70, 0x20, 0x76, 0x65, // rying mediump ve
	0x63, 0x34, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, // c4 v_texcoord0;.
	0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x43, // uniform samplerC
	0x75, 0x62, 0x65, 0x20, 0x75, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, // ube u_texColor;.
	0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, // void main ().{. 
	0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x72, 0x67, 0x62, 0x61, //  lowp float rgba
	0x5f, 0x31, 0x5b, 0x34, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x76, 0x65, // _1[4];.  lowp ve
	0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x74, // c4 tmpvar_2;.  t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x20, 0x3d, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, // mpvar_2 = textur
	0x65, 0x43, 0x75, 0x62, 0x65, 0x20, 0x28, 0x75, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, // eCube (u_texColo
	0x72, 0x2c, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, // r, v_texcoord0.x
	0x79, 0x7a, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x69, 0x6e, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // yz);.  int tmpva
	0x72, 0x5f, 0x33, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x20, // r_3;.  tmpvar_3 
	0x3d, 0x20, 0x69, 0x6e, 0x74, 0x28, 0x28, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, // = int(((v_texcoo
	0x72, 0x64, 0x30, 0x2e, 0x77, 0x20, 0x2a, 0x20, 0x34, 0x2e, 0x30, 0x29, 0x20, 0x2b, 0x20, 0x30, // rd0.w * 4.0) + 0
	0x2e, 0x35, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x72, 0x67, 0x62, 0x61, 0x5f, 0x31, 0x5b, 0x30, // .5));.  rgba_1[0
	0x5d, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x7a, 0x3b, 0x0a, // ] = tmpvar_2.z;.
	0x20, 0x20, 0x72, 0x67, 0x62, 0x61, 0x5f, 0x31, 0x5b, 0x31, 0x5d, 0x20, 0x3d, 0x20, 0x74, 0x6d, //   rgba_1[1] = tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x79, 0x3b, 0x0a, 0x20, 0x20, 0x72, 0x67, 0x62, 0x61, // pvar_2.y;.  rgba
	0x5f, 0x31, 0x5b, 0x32, 0x5d, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, // _1[2] = tmpvar_2
	0x2e, 0x78, 0x3b, 0x0a, 0x20, 0x20, 0x72, 0x67, 0x62, 0x61, 0x5f, 0x31, 0x5b, 0x33, 0x5d, 0x20, // .x;.  rgba_1[3] 
	0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x77, 0x3b, 0x0a, 0x20, 0x20, // = tmpvar_2.w;.  
	0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x70, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x74, 0x6d, 0x70, // mediump vec3 tmp
	0x76, 0x61, 0x72, 0x5f, 0x34, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // var_4;.  tmpvar_
	0x34, 0x20, 0x3d, 0x20, 0x64, 0x46, 0x64, 0x78, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, // 4 = dFdx(v_texco
	0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x6d, 0x65, 0x64, // ord0.xyz);.  med
	0x69, 0x75, 0x6d, 0x70, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // iump vec3 tmpvar
	0x5f, 0x35, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x20, 0x3d, // _5;.  tmpvar_5 =
	0x20, 0x64, 0x46, 0x64, 0x79, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, //  dFdy(v_texcoord
	0x30, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, // 0.xyz);.  medium
	0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, // p float tmpvar_6
	0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x20, 0x3d, 0x20, 0x28, // ;.  tmpvar_6 = (
	0x38, 0x2e, 0x30, 0x20, 0x2a, 0x20, 0x28, 0x73, 0x71, 0x72, 0x74, 0x28, 0x0a, 0x20, 0x20, 0x20, // 8.0 * (sqrt(.   
	0x20, 0x64, 0x6f, 0x74, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x2c, 0x20, //  dot (tmpvar_4, 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x29, 0x0a, 0x20, 0x20, 0x29, 0x20, 0x2b, 0x20, // tmpvar_4).  ) + 
	0x73, 0x71, 0x72, 0x74, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x64, 0x6f, 0x74, 0x20, 0x28, 0x74, // sqrt(.    dot (t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x2c, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // mpvar_5, tmpvar_
	0x35, 0x29, 0x0a, 0x20, 0x20, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x6d, 0x65, 0x64, 0x69, // 5).  )));.  medi
	0x75, 0x6d, 0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x65, 0x64, 0x67, 0x65, 0x30, 0x5f, // ump float edge0_
	0x37, 0x3b, 0x0a, 0x20, 0x20, 0x65, 0x64, 0x67, 0x65, 0x30, 0x5f, 0x37, 0x20, 0x3d, 0x20, 0x28, // 7;.  edge0_7 = (
	0x30, 0x2e, 0x35, 0x20, 0x2d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x29, 0x3b, // 0.5 - tmpvar_6);
	0x0a, 0x20, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, // .  lowp float tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x38, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // pvar_8;.  tmpvar
	0x5f, 0x38, 0x20, 0x3d, 0x20, 0x63, 0x6c, 0x61, 0x6d, 0x70, 0x20, 0x28, 0x28, 0x28, 0x72, 0x67, // _8 = clamp (((rg
	0x62, 0x61, 0x5f, 0x31, 0x5b, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x5d, 0x20, 0x2d, // ba_1[tmpvar_3] -
	0x20, 0x65, 0x64, 0x67, 0x65, 0x30, 0x5f, 0x37, 0x29, 0x20, 0x2f, 0x20, 0x28, 0x0a, 0x20, 0x20, //  edge0_7) / (.  
	0x20, 0x20, 0x28, 0x30, 0x2e, 0x35, 0x20, 0x2b, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, //   (0.5 + tmpvar_
	0x36, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x65, 0x64, 0x67, 0x65, 0x30, 0x5f, 0x37, 0x29, // 6).   - edge0_7)
	0x29, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, // ), 0.0, 1.0);.  
	0x6c, 0x6f, 0x77, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // lowp vec4 tmpvar
	0x5f, 0x39, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x39, 0x2e, 0x78, // _9;.  tmpvar_9.x
	0x79, 0x7a, 0x20, 0x3d, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x2e, 0x78, 0x79, // yz = v_color0.xy
	0x7a, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x39, 0x2e, 0x77, 0x20, // z;.  tmpvar_9.w 
	0x3d, 0x20, 0x28, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x2e, 0x77, 0x20, 0x2a, 0x20, // = (v_color0.w * 
	0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x38, 0x20, 0x2a, 0x20, 0x28, 0x74, 0x6d, 0x70, // (tmpvar_8 * (tmp
	0x76, 0x61, 0x72, 0x5f, 0x38, 0x20, 0x2a, 0x20, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x28, 0x33, 0x2e, // var_8 * .    (3.
	0x30, 0x20, 0x2d, 0x20, 0x28, 0x32, 0x2e, 0x30, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // 0 - (2.0 * tmpva
	0x72, 0x5f, 0x38, 0x29, 0x29, 0x0a, 0x20, 0x20, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x67, // r_8)).  )));.  g
	0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x74, 0x6d, // l_FragColor = tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x39, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                         // pvar_9;.}...
};
static const uint8_t fs_font_distance_field_dx9[737] =
{
	0x46, 0x53, 0x48, 0x03, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0xd4, 0x02, 0x00, 0x03, 0xff, 0xff, // FSH.............
	0xfe, 0xff, 0x22, 0x00, 0x43, 0x54, 0x41, 0x42, 0x1c, 0x00, 0x00, 0x00, 0x53, 0x00, 0x00, 0x00, // ..".CTAB....S...
	0x00, 0x03, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x81, 0x00, 0x00, // ................
	0x4c, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, // L...0...........
	0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, // <.......u_texCol
	0x6f, 0x72, 0x00, 0xab, 0x04, 0x00, 0x0e, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, // or..............
	0x00, 0x00, 0x00, 0x00, 0x70, 0x73, 0x5f, 0x33, 0x5f, 0x30, 0x00, 0x4d, 0x69, 0x63, 0x72, 0x6f, // ....ps_3_0.Micro
	0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, 0x20, 0x53, 0x68, // soft (R) HLSL Sh
	0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x20, 0x39, 0x2e, // ader Compiler 9.
	0x32, 0x39, 0x2e, 0x39, 0x35, 0x32, 0x2e, 0x33, 0x31, 0x31, 0x31, 0x00, 0x51, 0x00, 0x00, 0x05, // 29.952.3111.Q...
	0x00, 0x00, 0x0f, 0xa0, 0x00, 0x00, 0x80, 0x40, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, // .......@...?....
	0x00, 0x00, 0x80, 0x3f, 0x51, 0x00, 0x00, 0x05, 0x01, 0x00, 0x0f, 0xa0, 0x00, 0x00, 0x00, 0x80, // ...?Q...........
	0x00, 0x00, 0x80, 0xbf, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x40, 0xc0, 0x51, 0x00, 0x00, 0x05, // ..........@.Q...
	0x02, 0x00, 0x0f, 0xa0, 0x00, 0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0xc0, // .......A...?....
	0x00, 0x00, 0x40, 0x40, 0x1f, 0x00, 0x00, 0x02, 0x0a, 0x00, 0x00, 0x80, 0x00, 0x00, 0x0f, 0x90, // ..@@............
	0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x00, 0x80, 0x01, 0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, // ................
	0x00, 0x00, 0x00, 0x98, 0x00, 0x08, 0x0f, 0xa0, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x01, 0x80, // ................
	0x01, 0x00, 0xff, 0x90, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x55, 0xa0, 0x13, 0x00, 0x00, 0x02, // ..........U.....
	0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x00, 0x80, 0x58, 0x00, 0x00, 0x04, 0x00, 0x00, 0x04, 0x80, // ........X.......
	0x00, 0x00, 0x55, 0x81, 0x00, 0x00, 0xaa, 0xa0, 0x00, 0x00, 0xff, 0xa0, 0x02, 0x00, 0x00, 0x03, // ..U.............
	0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x55, 0x81, 0x58, 0x00, 0x00, 0x04, // ..........U.X...
	0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0xaa, 0xa0, 0x00, 0x00, 0xaa, 0x80, // ................
	0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x55, 0x80, // ..............U.
	0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0xe4, 0xa0, // ................
	0x58, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0xe4, 0x8c, 0x00, 0x00, 0xff, 0xa0, // X...............
	0x00, 0x00, 0xaa, 0xa0, 0x42, 0x00, 0x00, 0x03, 0x01, 0x00, 0x0f, 0x80, 0x01, 0x00, 0xe4, 0x90, // ....B...........
	0x00, 0x08, 0xe4, 0xa0, 0x09, 0x00, 0x00, 0x03, 0x00, 0x00, 0x01, 0x80, 0x01, 0x00, 0xc6, 0x80, // ................
	0x00, 0x00, 0xe4, 0x80, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x0e, 0x80, 0x01, 0x00, 0x90, 0x91, // ................
	0x5c, 0x00, 0x00, 0x02, 0x00, 0x00, 0x0e, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x08, 0x00, 0x00, 0x03, // ................
	0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0xf9, 0x80, 0x00, 0x00, 0xf9, 0x80, 0x07, 0x00, 0x00, 0x02, // ................
	0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x55, 0x80, 0x06, 0x00, 0x00, 0x02, 0x00, 0x00, 0x02, 0x80, // ......U.........
	0x00, 0x00, 0x55, 0x80, 0x5b, 0x00, 0x00, 0x02, 0x01, 0x00, 0x07, 0x80, 0x01, 0x00, 0xe4, 0x90, // ..U.[...........
	0x08, 0x00, 0x00, 0x03, 0x00, 0x00, 0x04, 0x80, 0x01, 0x00, 0xe4, 0x80, 0x01, 0x00, 0xe4, 0x80, // ................
	0x07, 0x00, 0x00, 0x02, 0x00, 0x00, 0x04, 0x80, 0x00, 0x00, 0xaa, 0x80, 0x06, 0x00, 0x00, 0x02, // ................
	0x00, 0x00, 0x04, 0x80, 0x00, 0x00, 0xaa, 0x80, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x02, 0x80, // ................
	0x00, 0x00, 0x55, 0x80, 0x00, 0x00, 0xaa, 0x80, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x04, 0x80, // ..U.............
	0x00, 0x00, 0x55, 0x80, 0x02, 0x00, 0x00, 0xa1, 0x02, 0x00, 0x55, 0xa0, 0x04, 0x00, 0x00, 0x04, // ..U.......U.....
	0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x55, 0x80, 0x02, 0x00, 0x00, 0xa0, 0x02, 0x00, 0x55, 0xa0, // ......U.......U.
	0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x03, 0x80, 0x00, 0x00, 0xaa, 0x81, 0x00, 0x00, 0xe4, 0x80, // ................
	0x06, 0x00, 0x00, 0x02, 0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x55, 0x80, 0x05, 0x00, 0x00, 0x03, // ..........U.....
	0x00, 0x00, 0x11, 0x80, 0x00, 0x00, 0x55, 0x80, 0x00, 0x00, 0x00, 0x80, 0x04, 0x00, 0x00, 0x04, // ......U.........
	0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x00, 0x80, 0x02, 0x00, 0xaa, 0xa0, 0x02, 0x00, 0xff, 0xa0, // ................
	0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x80, // ................
	0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x55, 0x80, // ..............U.
	0x05, 0x00, 0x00, 0x03, 0x00, 0x08, 0x08, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0xff, 0x90, // ................
	0x01, 0x00, 0x00, 0x02, 0x00, 0x08, 0x07, 0x80, 0x00, 0x00, 0xe4, 0x90, 0xff, 0xff, 0x00, 0x00, // ................
	0x00,                                                                                           // .
};
static const uint8_t fs_font_distance_field_dx11[1372] =
{
	0x46, 0x53, 0x48, 0x03, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0x4c, 0x05, 0x44, 0x58, 0x42, 0x43, // FSH.......L.DXBC
	0xe3, 0x81, 0xe8, 0x1f, 0xa3, 0x53, 0x27, 0x5a, 0x18, 0x92, 0x1a, 0x9c, 0xda, 0x52, 0x25, 0xcc, // .....S'Z.....R%.
	0x01, 0x00, 0x00, 0x00, 0x4c, 0x05, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, // ....L.......4...
	0x00, 0x01, 0x00, 0x00, 0x74, 0x01, 0x00, 0x00, 0xa8, 0x01, 0x00, 0x00, 0xd0, 0x04, 0x00, 0x00, // ....t...........
	0x52, 0x44, 0x45, 0x46, 0xc4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // RDEF............
	0x02, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x04, 0xff, 0xff, 0x00, 0x91, 0x00, 0x00, // ................
	0x92, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // ................
	0x01, 0x00, 0x00, 0x00, 0x77, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, // ....w...........
	0x09, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // ................
	0x0d, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x75, 0x5f, // ....u_texColoru_
	0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x00, 0x75, // texColorampler.u
	0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x75, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, // _texColoru_texCo
	0x6c, 0x6f, 0x72, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x00, 0x4d, 0x69, 0x63, 0x72, 0x6f, 0x73, // lorexture.Micros
	0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, 0x20, 0x53, 0x68, 0x61, // oft (R) HLSL Sha
	0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x20, 0x39, 0x2e, 0x32, // der Compiler 9.2
	0x39, 0x2e, 0x39, 0x35, 0x32, 0x2e, 0x33, 0x31, 0x31, 0x31, 0x00, 0xab, 0x49, 0x53, 0x47, 0x4e, // 9.952.3111..ISGN
	0x6c, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, // l...........P...
	0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x0f, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x00, 0x00, 0x62, 0x00, 0x00, 0x00, // ............b...
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, // ................
	0x0f, 0x0f, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, // ....SV_POSITION.
	0x43, 0x4f, 0x4c, 0x4f, 0x52, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, 0x00, 0xab, // COLOR.TEXCOORD..
	0x4f, 0x53, 0x47, 0x4e, 0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, // OSGN,...........
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, //  ...............
	0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x54, 0x41, 0x52, 0x47, 0x45, // ........SV_TARGE
	0x54, 0x00, 0xab, 0xab, 0x53, 0x48, 0x44, 0x52, 0x20, 0x03, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, // T...SHDR ...@...
	0xc8, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x03, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ....Z....`......
	0x58, 0x30, 0x00, 0x04, 0x00, 0x70, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0x55, 0x00, 0x00, // X0...p......UU..
	0x62, 0x10, 0x00, 0x03, 0xf2, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, // b...........b...
	0xf2, 0x10, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, 0x10, 0x00, // ........e.... ..
	0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x02, 0x02, 0x00, 0x00, 0x00, 0x69, 0x00, 0x00, 0x04, // ....h.......i...
	0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x09, // ............E...
	0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x12, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, // ........F.......
	0x46, 0x7e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // F~.......`......
	0x36, 0x00, 0x00, 0x06, 0x12, 0x30, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 6....0 .........
	0x2a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x06, 0x12, 0x30, 0x20, 0x00, // *.......6....0 .
	0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x36, 0x00, 0x00, 0x06, 0x12, 0x30, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, // 6....0 .........
	0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x06, 0x12, 0x30, 0x20, 0x00, // ........6....0 .
	0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ........:.......
	0x32, 0x00, 0x00, 0x09, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x10, 0x10, 0x00, // 2...........:...
	0x02, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x01, 0x40, 0x00, 0x00, // .....@.....@.@..
	0x00, 0x00, 0x00, 0x3f, 0x1b, 0x00, 0x00, 0x05, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ...?............
	0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x07, 0x12, 0x00, 0x10, 0x00, // ........6.......
	0x00, 0x00, 0x00, 0x00, 0x0a, 0x30, 0x20, 0x04, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, // .....0 .........
	0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x06, 0xe2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ....6...........
	0x06, 0x19, 0x10, 0x80, 0x41, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x05, // ....A...........
	0xe2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x56, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ........V.......
	0x10, 0x00, 0x00, 0x07, 0x22, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x96, 0x07, 0x10, 0x00, // ...."...........
	0x00, 0x00, 0x00, 0x00, 0x96, 0x07, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x05, // ................
	0x72, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x12, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, // r.......F.......
	0x10, 0x00, 0x00, 0x07, 0x42, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, // ....B.......F...
	0x01, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x4b, 0x00, 0x00, 0x05, // ....F.......K...
	0x62, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x56, 0x06, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // b.......V.......
	0x00, 0x00, 0x00, 0x07, 0x22, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x10, 0x00, // ...."...........
	0x00, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, // ....*.......2...
	0x42, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x10, 0x80, 0x41, 0x00, 0x00, 0x00, // B...........A...
	0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x01, 0x40, 0x00, 0x00, // .....@.....A.@..
	0x00, 0x00, 0x00, 0x3f, 0x32, 0x00, 0x00, 0x09, 0x22, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ...?2...".......
	0x1a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, // .........@.....A
	0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x08, 0x32, 0x00, 0x10, 0x00, // .@.....?....2...
	0x00, 0x00, 0x00, 0x00, 0xa6, 0x0a, 0x10, 0x80, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ........A.......
	0x46, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x0a, 0x22, 0x00, 0x10, 0x00, // F..........."...
	0x00, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x80, 0x3f, // .....@.....?...?
	0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x80, 0x3f, 0x1a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ...?...?........
	0x38, 0x20, 0x00, 0x07, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x10, 0x00, // 8 ..............
	0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x09, // ............2...
	0x22, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // "...............
	0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, // .@.......@....@@
	0x38, 0x00, 0x00, 0x07, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, // 8...............
	0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x07, // ............8...
	0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x1a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x07, 0x82, 0x20, 0x10, 0x00, // ........8.... ..
	0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x10, 0x10, 0x00, // ............:...
	0x01, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0x72, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ....6...r ......
	0x46, 0x12, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x01, 0x53, 0x54, 0x41, 0x54, // F.......>...STAT
	0x74, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // t...............
	0x03, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, // ................
	0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,                         // ............
};
