	.include "asm/macros.inc"
	.include "constants/constants.inc"

	.section .rodata

    .align 2
gUnknown_085F06C0:: @ 85F06C0
	.4byte 0x000001f0, 0x000011e3

    .align 2
gUnknown_085F06C8:: @ 85F06C8
    window_template 0x00, 0x03, 0x0f, 0x1a, 0x04, 0x0f, 0x000b
    window_template_terminator

    .align 2
gUnknown_085F06D8:: @ 85F06D8
	window_template 0x00, 0x03, 0x02, 0x05, 0x04, 0x0f, 0x0073
