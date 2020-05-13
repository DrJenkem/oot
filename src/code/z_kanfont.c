#include <ultra64.h>
#include <global.h>

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kanfont/func_8006EE60.s")

void func_8006EEBC(s32 arg0, u16 arg1) {
	u32 vrom = (u32)&_message_staticSegmentRomStart + ((arg1 << 7) + 0x4000);
    DmaMgr_SendRequest1(arg0 + 0x3C08, vrom, 0x80, "../z_kanfont.c", 100);
}

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kanfont/func_8006EF10.s")
