Lights1 icicle_Ice_layer1_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Gfx icicle_icicle_ci8_aligner[] = {gsSPEndDisplayList()};
u8 icicle_icicle_ci8[] = {
	0x00, 0x01, 0x00, 0x02, 0x03, 0x04, 0x03, 0x05, 
	0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 
	0x0e, 0x0f, 0x0b, 0x0b, 0x10, 0x11, 0x12, 0x13, 
	0x14, 0x15, 0x16, 0x17, 0x04, 0x12, 0x18, 0x19, 
	0x03, 0x18, 0x00, 0x02, 0x1a, 0x12, 0x1b, 0x1c, 
	0x11, 0x08, 0x11, 0x1d, 0x1e, 0x10, 0x1f, 0x20, 
	0x21, 0x22, 0x23, 0x0d, 0x0c, 0x24, 0x25, 0x26, 
	0x17, 0x27, 0x12, 0x12, 0x03, 0x03, 0x00, 0x28, 
	0x03, 0x1a, 0x03, 0x1b, 0x29, 0x1c, 0x1d, 0x25, 
	0x1d, 0x2a, 0x2b, 0x11, 0x2c, 0x07, 0x0b, 0x2d, 
	0x20, 0x2e, 0x22, 0x0c, 0x22, 0x24, 0x07, 0x0a, 
	0x27, 0x15, 0x15, 0x12, 0x03, 0x13, 0x13, 0x01, 
	0x03, 0x12, 0x12, 0x29, 0x2a, 0x1d, 0x2a, 0x11, 
	0x2a, 0x2a, 0x1e, 0x26, 0x0a, 0x2f, 0x11, 0x11, 
	0x24, 0x24, 0x10, 0x30, 0x30, 0x11, 0x11, 0x10, 
	0x15, 0x29, 0x29, 0x12, 0x29, 0x13, 0x31, 0x31, 
	0x13, 0x13, 0x12, 0x29, 0x2a, 0x1d, 0x2a, 0x11, 
	0x11, 0x08, 0x09, 0x08, 0x11, 0x25, 0x1d, 0x1d, 
	0x0a, 0x24, 0x32, 0x08, 0x11, 0x10, 0x07, 0x10, 
	0x33, 0x33, 0x2a, 0x17, 0x29, 0x12, 0x34, 0x12, 
	0x29, 0x12, 0x12, 0x1d, 0x35, 0x1d, 0x2a, 0x11, 
	0x07, 0x11, 0x24, 0x2c, 0x1e, 0x1e, 0x35, 0x35, 
	0x0a, 0x10, 0x10, 0x0c, 0x24, 0x22, 0x24, 0x06, 
	0x33, 0x1d, 0x1d, 0x36, 0x2a, 0x36, 0x37, 0x35, 
	0x2a, 0x1d, 0x1d, 0x11, 0x1d, 0x2a, 0x11, 0x11, 
	0x24, 0x24, 0x24, 0x11, 0x11, 0x1e, 0x1d, 0x1e, 
	0x2f, 0x08, 0x24, 0x38, 0x0c, 0x24, 0x0b, 0x0e, 
	0x2a, 0x1e, 0x11, 0x1e, 0x11, 0x1d, 0x1d, 0x1e, 
	0x2c, 0x11, 0x08, 0x08, 0x25, 0x2c, 0x11, 0x11, 
	0x07, 0x08, 0x2a, 0x25, 0x25, 0x09, 0x0a, 0x2c, 
	0x17, 0x1e, 0x09, 0x24, 0x10, 0x08, 0x39, 0x2a, 
	0x2a, 0x08, 0x11, 0x25, 0x11, 0x3a, 0x3a, 0x08, 
	0x3b, 0x08, 0x2c, 0x08, 0x25, 0x3b, 0x11, 0x06, 
	0x3c, 0x08, 0x11, 0x1d, 0x1d, 0x11, 0x11, 0x2a, 
	0x34, 0x2a, 0x2c, 0x24, 0x22, 0x10, 0x11, 0x1e, 
	0x39, 0x3d, 0x1e, 0x11, 0x1e, 0x3a, 0x3e, 0x09, 
	0x1e, 0x2c, 0x0a, 0x08, 0x09, 0x2a, 0x0a, 0x0a, 
	0x24, 0x3f, 0x25, 0x1d, 0x1d, 0x11, 0x25, 0x11, 
	0x36, 0x36, 0x25, 0x2c, 0x10, 0x2c, 0x11, 0x08, 
	0x40, 0x2a, 0x0a, 0x1e, 0x35, 0x1b, 0x0a, 0x37, 
	0x09, 0x10, 0x07, 0x0a, 0x11, 0x08, 0x11, 0x11, 
	0x3f, 0x11, 0x36, 0x36, 0x1d, 0x11, 0x25, 0x1d, 
	0x36, 0x36, 0x37, 0x1d, 0x2a, 0x25, 0x2b, 0x09, 
	0x11, 0x41, 0x1e, 0x42, 0x3b, 0x41, 0x3a, 0x11, 
	0x11, 0x08, 0x10, 0x2c, 0x07, 0x25, 0x2a, 0x08, 
	0x11, 0x1e, 0x1d, 0x29, 0x36, 0x1d, 0x1d, 0x1d, 
	0x29, 0x29, 0x29, 0x16, 0x34, 0x33, 0x37, 0x1d, 
	0x12, 0x1d, 0x12, 0x43, 0x1d, 0x36, 0x26, 0x44, 
	0x0a, 0x2c, 0x2c, 0x3a, 0x08, 0x08, 0x09, 0x11, 
	0x36, 0x1d, 0x17, 0x37, 0x37, 0x1d, 0x1d, 0x29, 
	0x12, 0x16, 0x16, 0x13, 0x13, 0x16, 0x29, 0x29, 
	0x37, 0x16, 0x45, 0x46, 0x47, 0x37, 0x09, 0x11, 
	0x2c, 0x26, 0x35, 0x09, 0x1e, 0x09, 0x1e, 0x11, 
	0x1d, 0x29, 0x29, 0x12, 0x12, 0x37, 0x29, 0x12, 
	0x12, 0x15, 0x13, 0x48, 0x13, 0x13, 0x16, 0x29, 
	0x17, 0x49, 0x4a, 0x4b, 0x47, 0x1e, 0x03, 0x26, 
	0x2c, 0x46, 0x13, 0x15, 0x17, 0x36, 0x09, 0x1d, 
	0x1e, 0x37, 0x29, 0x12, 0x4c, 0x12, 0x12, 0x13, 
	0x29, 0x13, 0x48, 0x48, 0x48, 0x48, 0x12, 0x29, 
	0x27, 0x2b, 0x29, 0x27, 0x1e, 0x35, 0x17, 0x2a, 
	0x1e, 0x4d, 0x4e, 0x4f, 0x4f, 0x03, 0x35, 0x1d, 
	0x35, 0x37, 0x36, 0x29, 0x4c, 0x03, 0x12, 0x16, 
	0x12, 0x13, 0x13, 0x13, 0x48, 0x13, 0x16, 0x34, 
	0x1d, 0x27, 0x2b, 0x35, 0x1e, 0x50, 0x37, 0x31, 
	0x08, 0x16, 0x51, 0x52, 0x43, 0x53, 0x1e, 0x1d, 
	0x36, 0x36, 0x36, 0x29, 0x34, 0x15, 0x15, 0x16, 
	0x13, 0x13, 0x54, 0x55, 0x48, 0x48, 0x27, 0x16, 
	0x36, 0x25, 0x1e, 0x3b, 0x25, 0x2c, 0x26, 0x13, 
	0x56, 0x13, 0x57, 0x58, 0x59, 0x48, 0x1e, 0x1d, 
	0x1d, 0x1e, 0x1d, 0x37, 0x33, 0x33, 0x34, 0x12, 
	0x03, 0x31, 0x31, 0x48, 0x31, 0x48, 0x31, 0x34, 
	0x35, 0x1e, 0x11, 0x3b, 0x26, 0x08, 0x39, 0x35, 
	0x09, 0x17, 0x13, 0x52, 0x48, 0x27, 0x1e, 0x2a, 
	0x11, 0x11, 0x2a, 0x2a, 0x1d, 0x1b, 0x03, 0x03, 
	0x03, 0x03, 0x12, 0x14, 0x13, 0x13, 0x15, 0x46, 
	0x35, 0x09, 0x09, 0x08, 0x39, 0x5a, 0x1d, 0x09, 
	0x1e, 0x00, 0x34, 0x57, 0x48, 0x03, 0x37, 0x11, 
	0x25, 0x25, 0x11, 0x2a, 0x1d, 0x37, 0x1b, 0x1a, 
	0x31, 0x15, 0x00, 0x14, 0x34, 0x45, 0x1d, 0x1e, 
	0x3a, 0x35, 0x09, 0x40, 0x2c, 0x5b, 0x12, 0x3a, 
	0x33, 0x12, 0x13, 0x27, 0x41, 0x36, 0x35, 0x37, 
	0x11, 0x2a, 0x1d, 0x37, 0x25, 0x2a, 0x1d, 0x03, 
	0x5c, 0x47, 0x31, 0x16, 0x16, 0x27, 0x36, 0x2f, 
	0x1e, 0x35, 0x35, 0x09, 0x09, 0x5d, 0x41, 0x11, 
	0x36, 0x37, 0x34, 0x34, 0x1d, 0x1e, 0x17, 0x5e, 
	0x1d, 0x11, 0x11, 0x25, 0x1d, 0x2a, 0x5f, 0x29, 
	0x47, 0x5c, 0x60, 0x5c, 0x34, 0x29, 0x36, 0x1e, 
	0x33, 0x33, 0x2b, 0x1e, 0x33, 0x27, 0x17, 0x2b, 
	0x17, 0x09, 0x27, 0x27, 0x11, 0x2b, 0x41, 0x1d, 
	0x37, 0x2b, 0x11, 0x09, 0x09, 0x11, 0x2a, 0x3b, 
	0x17, 0x61, 0x62, 0x63, 0x29, 0x1d, 0x29, 0x16, 
	0x34, 0x33, 0x36, 0x27, 0x64, 0x47, 0x34, 0x29, 
	0x29, 0x33, 0x12, 0x29, 0x3a, 0x25, 0x29, 0x1e, 
	0x2a, 0x11, 0x11, 0x11, 0x2c, 0x2c, 0x11, 0x1e, 
	0x11, 0x65, 0x59, 0x55, 0x36, 0x09, 0x33, 0x66, 
	0x66, 0x12, 0x5e, 0x53, 0x67, 0x64, 0x15, 0x45, 
	0x47, 0x45, 0x34, 0x15, 0x12, 0x29, 0x2b, 0x08, 
	0x10, 0x0e, 0x24, 0x68, 0x07, 0x10, 0x49, 0x66, 
	0x49, 0x45, 0x36, 0x06, 0x2e, 0x2a, 0x69, 0x47, 
	0x29, 0x12, 0x12, 0x13, 0x31, 0x4f, 0x48, 0x48, 
	0x31, 0x13, 0x12, 0x12, 0x16, 0x29, 0x12, 0x1d, 
	0x0a, 0x24, 0x56, 0x10, 0x20, 0x10, 0x56, 0x37, 
	0x48, 0x4e, 0x31, 0x35, 0x09, 0x46, 0x12, 0x03, 
	0x29, 0x15, 0x34, 0x13, 0x31, 0x31, 0x48, 0x13, 
	0x31, 0x15, 0x34, 0x29, 0x36, 0x36, 0x12, 0x36, 
	0x2b, 0x26, 0x10, 0x1f, 0x1f, 0x21, 0x2d, 0x38, 
	0x6a, 0x5c, 0x6b, 0x4f, 0x12, 0x03, 0x57, 0x31, 
	0x52, 0x13, 0x16, 0x31, 0x31, 0x13, 0x31, 0x61, 
	0x48, 0x16, 0x29, 0x36, 0x29, 0x29, 0x12, 0x17, 
	0x33, 0x1d, 0x08, 0x07, 0x0c, 0x6c, 0x44, 0x2c, 
	0x2c, 0x36, 0x34, 0x29, 0x27, 0x27, 0x13, 0x53, 
	0x31, 0x61, 0x16, 0x31, 0x31, 0x31, 0x31, 0x14, 
	0x31, 0x03, 0x03, 0x49, 0x49, 0x15, 0x03, 0x17, 
	0x35, 0x2b, 0x1e, 0x0a, 0x0a, 0x39, 0x56, 0x39, 
	0x2a, 0x10, 0x6d, 0x06, 0x3b, 0x29, 0x17, 0x37, 
	0x4f, 0x5c, 0x13, 0x61, 0x31, 0x31, 0x00, 0x28, 
	0x31, 0x00, 0x28, 0x00, 0x03, 0x13, 0x03, 0x1d, 
	0x2a, 0x2c, 0x3a, 0x3a, 0x08, 0x2a, 0x3b, 0x5a, 
	0x5a, 0x25, 0x06, 0x0f, 0x0c, 0x6e, 0x24, 0x49, 
	0x58, 0x61, 0x13, 0x31, 0x01, 0x00, 0x12, 0x12, 
	0x01, 0x61, 0x28, 0x31, 0x03, 0x03, 0x1a, 0x2a, 
	0x25, 0x0b, 0x06, 0x10, 0x2c, 0x39, 0x2c, 0x24, 
	0x39, 0x3a, 0x25, 0x2a, 0x0e, 0x6f, 0x10, 0x13, 
	0x15, 0x15, 0x13, 0x14, 0x31, 0x03, 0x12, 0x02, 
	0x19, 0x19, 0x01, 0x02, 0x02, 0x02, 0x5b, 0x08, 
	0x24, 0x40, 0x70, 0x0c, 0x24, 0x0a, 0x24, 0x0c, 
	0x41, 0x38, 0x2e, 0x2c, 0x16, 0x50, 0x17, 0x71, 
	0x36, 0x27, 0x12, 0x15, 0x03, 0x31, 0x04, 0x01, 
	
};

Gfx icicle_icicle_ci8_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 icicle_icicle_ci8_pal_rgba16[] = {
	0x95, 0xf9, 0x96, 0x39, 0x8d, 0xf7, 0x8d, 0xb7, 
	0x85, 0xb5, 0x75, 0x31, 0x64, 0x75, 0x6c, 0xb5, 
	0x64, 0x71, 0x6c, 0x71, 0x64, 0x31, 0x53, 0xef, 
	0x5c, 0x33, 0x53, 0xf3, 0x64, 0x33, 0x4b, 0xad, 
	0x5c, 0x31, 0x6c, 0xb3, 0x85, 0x75, 0x8d, 0xb5, 
	0x95, 0xb7, 0x8d, 0x75, 0x85, 0x73, 0x74, 0xf1, 
	0x8d, 0xf9, 0x96, 0x3b, 0x85, 0xb7, 0x85, 0x77, 
	0x75, 0x33, 0x74, 0xf3, 0x74, 0xb3, 0x4b, 0xaf, 
	0x4b, 0xb1, 0x53, 0xb1, 0x53, 0xf1, 0x43, 0x6d, 
	0x64, 0x73, 0x74, 0xf5, 0x64, 0x2f, 0x7c, 0xf1, 
	0x9e, 0x3b, 0x7d, 0x33, 0x6c, 0xb1, 0x7c, 0xf5, 
	0x6c, 0x73, 0x53, 0xaf, 0x5b, 0xf3, 0x7c, 0xf7, 
	0x5c, 0x71, 0x95, 0xf7, 0x54, 0x2f, 0x85, 0x35, 
	0x85, 0x33, 0x74, 0xb1, 0x7c, 0xf3, 0x7d, 0x35, 
	0x5b, 0xf1, 0x5c, 0x2f, 0x74, 0xb5, 0x64, 0x6f, 
	0x64, 0xb5, 0x6c, 0xb7, 0x6c, 0x6d, 0x64, 0xb3, 
	0x6c, 0x75, 0x6c, 0xaf, 0xa6, 0x7b, 0x8d, 0xb1, 
	0x74, 0xb7, 0x7d, 0x31, 0x6c, 0x6f, 0x8d, 0xb3, 
	0x95, 0xb5, 0x8d, 0x77, 0x85, 0x31, 0x95, 0xb9, 
	0x7d, 0x75, 0x64, 0x2d, 0xa6, 0x79, 0x95, 0xf5, 
	0x74, 0xef, 0xae, 0x7b, 0x7c, 0xef, 0x8d, 0x73, 
	0x95, 0xf3, 0x95, 0xb3, 0x5b, 0xef, 0x9d, 0xf9, 
	0xa6, 0x39, 0x9e, 0x35, 0x7d, 0x37, 0x8d, 0xb9, 
	0x9e, 0x37, 0x74, 0xaf, 0x85, 0x37, 0x6c, 0xf1, 
	0x9d, 0xf5, 0x9e, 0x39, 0xae, 0xb9, 0xb6, 0xfd, 
	0x9d, 0xf7, 0x6c, 0xad, 0x85, 0x71, 0xa6, 0x37, 
	0x5c, 0x73, 0x85, 0xb3, 0x74, 0x71, 0x95, 0xf1, 
	0x74, 0xb9, 0x53, 0xb3, 0x64, 0x35, 0x5b, 0xf5, 
	0x4b, 0x6f, 0x7c, 0xb1, 
};

Vtx icicle_Cube_mesh_layer_1_vtx_0[83] = {
	{{ {-140, 596, -165}, 0, {363, -601}, {201, 232, 144, 255} }},
	{{ {-74, 592, -108}, 0, {185, -592}, {45, 206, 148, 255} }},
	{{ {-124, 356, -126}, 0, {318, 46}, {253, 129, 255, 255} }},
	{{ {-74, 592, -108}, 0, {-217, -592}, {45, 206, 148, 255} }},
	{{ {-144, 744, -78}, 0, {-406, -1003}, {130, 253, 240, 255} }},
	{{ {-124, 356, -126}, 0, {-350, 46}, {253, 129, 255, 255} }},
	{{ {-57, 1084, -185}, 0, {137, -1920}, {59, 72, 169, 255} }},
	{{ {-180, 1090, -209}, 0, {471, -1938}, {162, 69, 204, 255} }},
	{{ {-176, 630, 147}, 0, {-492, -693}, {72, 167, 56, 255} }},
	{{ {-140, 1095, 121}, 0, {-396, -1950}, {73, 103, 17, 255} }},
	{{ {-217, 1095, 149}, 0, {-603, -1950}, {185, 65, 83, 255} }},
	{{ {35, 170, 85}, 0, {79, 549}, {50, 243, 116, 255} }},
	{{ {-18, 436, 78}, 0, {-63, -171}, {248, 252, 127, 255} }},
	{{ {-85, 170, 35}, 0, {-246, 549}, {146, 3, 64, 255} }},
	{{ {-136, -392, -3}, 0, {-383, 2067}, {228, 132, 1, 255} }},
	{{ {-4, 744, -78}, 0, {-4, -1003}, {95, 252, 171, 255} }},
	{{ {-26, 1080, -113}, 0, {53, -1911}, {54, 96, 193, 255} }},
	{{ {44, 1080, -83}, 0, {-136, -1911}, {81, 75, 193, 255} }},
	{{ {-74, 592, -108}, 0, {185, -592}, {45, 206, 148, 255} }},
	{{ {85, 436, -35}, 0, {-246, -171}, {121, 10, 219, 255} }},
	{{ {-68, 436, -42}, 0, {166, -171}, {166, 235, 169, 255} }},
	{{ {0, 170, -100}, 0, {-16, 549}, {10, 252, 129, 255} }},
	{{ {85, 170, -35}, 0, {-246, 549}, {121, 242, 220, 255} }},
	{{ {-136, -392, -3}, 0, {351, 2067}, {228, 132, 1, 255} }},
	{{ {-70, 170, -70}, 0, {173, 549}, {158, 5, 175, 255} }},
	{{ {-197, 744, 95}, 0, {-549, -1003}, {152, 208, 56, 255} }},
	{{ {44, 1080, 57}, 0, {104, -1911}, {70, 73, 77, 255} }},
	{{ {-114, 1080, 105}, 0, {-323, -1911}, {75, 96, 37, 255} }},
	{{ {12, 744, 25}, 0, {15, -1003}, {107, 2, 68, 255} }},
	{{ {-18, 436, 78}, 0, {-63, -171}, {248, 252, 127, 255} }},
	{{ {-68, 436, -42}, 0, {-131, -171}, {166, 235, 169, 255} }},
	{{ {-144, 744, -78}, 0, {-226, -1003}, {130, 253, 240, 255} }},
	{{ {-74, 592, -108}, 0, {-307, -592}, {45, 206, 148, 255} }},
	{{ {-174, 744, -8}, 0, {-37, -1003}, {134, 239, 223, 255} }},
	{{ {-197, 744, 95}, 0, {242, -1003}, {152, 208, 56, 255} }},
	{{ {-18, 436, 78}, 0, {193, -171}, {248, 252, 127, 255} }},
	{{ {-85, 170, 35}, 0, {79, 549}, {146, 3, 64, 255} }},
	{{ {-70, 170, -70}, 0, {-205, 549}, {158, 5, 175, 255} }},
	{{ {-136, -392, -3}, 0, {-23, 2067}, {228, 132, 1, 255} }},
	{{ {-184, 1080, 75}, 0, {187, -1911}, {167, 83, 219, 255} }},
	{{ {-176, 630, 147}, 0, {382, -693}, {72, 167, 56, 255} }},
	{{ {-217, 1095, 149}, 0, {386, -1950}, {185, 65, 83, 255} }},
	{{ {-126, 1080, -13}, 0, {-51, -1911}, {180, 97, 224, 255} }},
	{{ {-96, 1080, -83}, 0, {-240, -1911}, {185, 105, 247, 255} }},
	{{ {-127, 1084, -155}, 0, {-435, -1920}, {186, 98, 41, 255} }},
	{{ {-140, 596, -165}, 0, {-461, -601}, {201, 232, 144, 255} }},
	{{ {-140, 596, -165}, 0, {-461, -601}, {201, 232, 144, 255} }},
	{{ {-127, 1084, -155}, 0, {-435, -1920}, {186, 98, 41, 255} }},
	{{ {-180, 1090, -209}, 0, {-580, -1938}, {162, 69, 204, 255} }},
	{{ {-144, 744, -78}, 0, {-226, -1003}, {130, 253, 240, 255} }},
	{{ {-124, 356, -126}, 0, {-357, 46}, {253, 129, 255, 255} }},
	{{ {-136, -392, -3}, 0, {-9, 2067}, {228, 132, 1, 255} }},
	{{ {85, 170, -35}, 0, {79, 549}, {121, 242, 220, 255} }},
	{{ {35, 170, 85}, 0, {-246, 549}, {50, 243, 116, 255} }},
	{{ {-18, 436, 78}, 0, {-225, -171}, {248, 252, 127, 255} }},
	{{ {85, 436, -35}, 0, {79, -171}, {121, 10, 219, 255} }},
	{{ {12, 744, 25}, 0, {-82, -1003}, {107, 2, 68, 255} }},
	{{ {-4, 744, -78}, 0, {194, -1003}, {95, 252, 171, 255} }},
	{{ {44, 1080, -83}, 0, {208, -1911}, {81, 75, 193, 255} }},
	{{ {74, 1080, -13}, 0, {19, -1911}, {105, 71, 5, 255} }},
	{{ {44, 1080, 57}, 0, {-170, -1911}, {70, 73, 77, 255} }},
	{{ {74, 1080, -13}, 0, {185, 973}, {105, 71, 5, 255} }},
	{{ {-114, 1080, 105}, 0, {-323, 1292}, {75, 96, 37, 255} }},
	{{ {44, 1080, 57}, 0, {104, 1162}, {70, 73, 77, 255} }},
	{{ {-26, 1080, -13}, 0, {-85, 973}, {0, 127, 0, 255} }},
	{{ {44, 1080, -83}, 0, {104, 784}, {81, 75, 193, 255} }},
	{{ {-26, 1080, -113}, 0, {-85, 703}, {54, 96, 193, 255} }},
	{{ {-126, 1080, -13}, 0, {-355, 973}, {180, 97, 224, 255} }},
	{{ {-96, 1080, -83}, 0, {-274, 784}, {185, 105, 247, 255} }},
	{{ {-57, 1084, -185}, 0, {-169, 508}, {59, 72, 169, 255} }},
	{{ {-127, 1084, -155}, 0, {-358, 589}, {186, 98, 41, 255} }},
	{{ {-180, 1090, -209}, 0, {-503, 444}, {162, 69, 204, 255} }},
	{{ {-184, 1080, 75}, 0, {-512, 1211}, {167, 83, 219, 255} }},
	{{ {-217, 1095, 149}, 0, {-603, 1410}, {185, 65, 83, 255} }},
	{{ {-140, 1095, 121}, 0, {-396, 1336}, {73, 103, 17, 255} }},
	{{ {-26, 1080, -113}, 0, {289, -1911}, {54, 96, 193, 255} }},
	{{ {-74, 592, -108}, 0, {275, -592}, {45, 206, 148, 255} }},
	{{ {-140, 596, -165}, 0, {429, -601}, {201, 232, 144, 255} }},
	{{ {-57, 1084, -185}, 0, {484, -1920}, {59, 72, 169, 255} }},
	{{ {-197, 744, 95}, 0, {-274, -1003}, {152, 208, 56, 255} }},
	{{ {-114, 1080, 105}, 0, {-300, -1911}, {75, 96, 37, 255} }},
	{{ {-176, 630, 147}, 0, {-414, -693}, {72, 167, 56, 255} }},
	{{ {-140, 1095, 121}, 0, {-344, -1950}, {73, 103, 17, 255} }},
};

Gfx icicle_Cube_mesh_layer_1_tri_0[] = {
	gsSPVertex(icicle_Cube_mesh_layer_1_vtx_0 + 0, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 0, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(14, 11, 13, 0),
	gsSPVertex(icicle_Cube_mesh_layer_1_vtx_0 + 15, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(6, 5, 4, 0),
	gsSP1Triangle(6, 4, 7, 0),
	gsSP1Triangle(8, 6, 7, 0),
	gsSP1Triangle(8, 9, 6, 0),
	gsSP1Triangle(9, 5, 6, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(10, 13, 11, 0),
	gsSP1Triangle(14, 13, 10, 0),
	gsSPVertex(icicle_Cube_mesh_layer_1_vtx_0 + 30, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(0, 4, 3, 0),
	gsSP1Triangle(0, 5, 4, 0),
	gsSP1Triangle(6, 5, 0, 0),
	gsSP1Triangle(6, 0, 7, 0),
	gsSP1Triangle(8, 6, 7, 0),
	gsSP1Triangle(3, 4, 9, 0),
	gsSP1Triangle(9, 4, 10, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(3, 9, 12, 0),
	gsSP1Triangle(1, 3, 12, 0),
	gsSP1Triangle(1, 12, 13, 0),
	gsSP1Triangle(1, 13, 14, 0),
	gsSP1Triangle(1, 14, 15, 0),
	gsSPVertex(icicle_Cube_mesh_layer_1_vtx_0 + 46, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 0, 4, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSP1Triangle(6, 9, 8, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(10, 12, 13, 0),
	gsSP1Triangle(10, 13, 14, 0),
	gsSPVertex(icicle_Cube_mesh_layer_1_vtx_0 + 61, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(5, 6, 3, 0),
	gsSP1Triangle(5, 7, 6, 0),
	gsSP1Triangle(7, 5, 8, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(9, 8, 10, 0),
	gsSP1Triangle(3, 6, 11, 0),
	gsSP1Triangle(3, 11, 1, 0),
	gsSP1Triangle(1, 11, 12, 0),
	gsSP1Triangle(1, 12, 13, 0),
	gsSPVertex(icicle_Cube_mesh_layer_1_vtx_0 + 75, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(5, 7, 6, 0),
	gsSPEndDisplayList(),
};


Gfx mat_icicle_Ice_layer1[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
	gsDPSetFogColor(0, 0, 0, 255),
	gsSPFogPosition(985, 1000),
	gsSPSetGeometryMode(G_FOG),
	gsDPSetCycleType(G_CYC_2CYCLE),
	gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, icicle_icicle_ci8_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(7, 113),
	gsDPLoadSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, icicle_icicle_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(icicle_Ice_layer1_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_icicle_Ice_layer1[] = {
	gsDPPipeSync(),
	gsSPClearGeometryMode(G_FOG),
	gsDPSetCycleType(G_CYC_1CYCLE),
	gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx icicle_Cube_mesh_layer_1[] = {
	gsSPDisplayList(mat_icicle_Ice_layer1),
	gsSPDisplayList(icicle_Cube_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_icicle_Ice_layer1),
	gsSPEndDisplayList(),
};

Gfx icicle_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

