#include <ultra64.h>
#include <global.h>

#pragma GLOBAL_ASM("asm/non_matchings/code/z_vr_box/func_800ADBB0.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_vr_box/func_800AE2C0.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_vr_box/func_800AEFC8.s")

typedef struct {
    /* 0x00 */ u32  unk_00;
    /* 0x04 */ u32  unk_04;
    /* 0x08 */ u32  unk_08;
    /* 0x0C */ u32  unk_0C;
    /* 0x10 */ u32  unk_10;
} Unk_8012AF0C; // size = 0x14
extern Unk_8012AF0C D_8012AF0C[];

void func_800AF178(SkyboxContext* vr_box, s32 count) {
    s32 phi_s2 = 0;
    Unk_8012AF0C *phi_s0;
    s32 i;

    for (i=0; i < count; i++) {
        phi_s0 = &D_8012AF0C[i];
        phi_s2 = func_800AE2C0(vr_box, vr_box->roomVtx, phi_s2, phi_s0->unk_00, phi_s0->unk_04, phi_s0->unk_08, phi_s0->unk_0C, phi_s0->unk_10, i);
    }
}

#pragma GLOBAL_ASM("asm/non_matchings/code/z_vr_box/func_800AF218.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_vr_box/func_800B0E50.s")
