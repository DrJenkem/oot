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

extern const char D_80142C00;
void func_800B0E50(GlobalContext* globalCtx, SkyboxContext* vr_box, s16 skyboxId) {
    vr_box->unk_140 = 0;
    vr_box->unk_144 = 0.0f;
    vr_box->unk_148 = 0.0f;
    vr_box->unk_14C = 0.0f;
    func_800AF218(globalCtx, vr_box, skyboxId);
    osSyncPrintf(&D_80142C00, skyboxId);

    if (skyboxId == 0) {
        return;
    }

    osSyncPrintf("\x1b[32m");
    if (vr_box->unk_140 != 0) {
        vr_box->dpList = Game_Alloc(&globalCtx->state, 0x2580, "../z_vr_box.c", 1636);
        if (vr_box->dpList == NULL) {
            __assert("vr_box->dpList != NULL", "../z_vr_box.c", 1637);
        }
        vr_box->roomVtx = Game_Alloc(&globalCtx->state, 0x1000, "../z_vr_box.c", 1639);
        if (vr_box->roomVtx == NULL) {
            __assert("vr_box->roomVtx != NULL", "../z_vr_box.c", 1640);
        }
        func_800AEFC8(vr_box, skyboxId);
    } else {
        vr_box->dpList = Game_Alloc(&globalCtx->state, 0x3840, "../z_vr_box.c", 1643);
        if (vr_box->dpList == NULL) {
            __assert("vr_box->dpList != NULL", "../z_vr_box.c", 1644);
        }
        if (skyboxId == 5) {
            vr_box->roomVtx = Game_Alloc(&globalCtx->state, 0xC00, "../z_vr_box.c", 1648);
            if (vr_box->roomVtx == NULL) {
                __assert("vr_box->roomVtx != NULL", "../z_vr_box.c", 1649);
            }
            func_800AF178(vr_box, 6);
        } else {
            vr_box->roomVtx = Game_Alloc(&globalCtx->state, 0xA00, "../z_vr_box.c", 1653);
            if (vr_box->roomVtx == NULL) {
                __assert("vr_box->roomVtx != NULL", "../z_vr_box.c", 1654);
            }
            func_800AF178(vr_box, 5);
        }
    }
    osSyncPrintf("\x1b[m");
}
