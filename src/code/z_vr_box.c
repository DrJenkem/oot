#include <ultra64.h>
#include <global.h>

#pragma GLOBAL_ASM("asm/non_matchings/code/z_vr_box/func_800ADBB0.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_vr_box/func_800AE2C0.s")

#if 0
typedef struct {
    /* 0x00 */ s32  unk_00;
    /* 0x04 */ s32  unk_04;
    /* 0x08 */ s32  unk_08;
    /* 0x0C */ s32  unk_0C;
    /* 0x10 */ s32  unk_10;
} Unk_8012AEBC; // size = 0x14

extern Unk_8012AEBC D_8012AEBC[];

void func_800AEFC8(SkyboxContext* vr_box, s16 skyboxId) {
    Unk_8012AEBC *phi_s0;
    u32 phi_s2 = 0;
    s32 phi_s3 = 0;
    s32 i;

    if (skyboxId == 2 || (skyboxId >= 0x11 && skyboxId < 0x19)) {
        for (i=0; i < 2; i++) {
            phi_s0 = &D_8012AEBC[i];
            phi_s3 = func_800ADBB0(vr_box, vr_box->roomVtx, phi_s3, phi_s0->unk_00, phi_s0->unk_04, phi_s0->unk_08, phi_s0->unk_0C, phi_s0->unk_10, i, phi_s2);
            phi_s2 = phi_s2 + 2;
        }
        return;
    }

    if (vr_box->unk_140 == 2) {
        for (i=0; i < 3; i++) {
            phi_s0 = &D_8012AEBC[i];
            phi_s3 = func_800ADBB0(vr_box, vr_box->roomVtx, phi_s3, phi_s0->unk_00, phi_s0->unk_04, phi_s0->unk_08, phi_s0->unk_0C, phi_s0->unk_10, i, phi_s2);
            phi_s2 = phi_s2 + 2;
        }
        return;
    }

    for (i=0; i < 4; i++) {
        phi_s0 = &D_8012AEBC[i];
        phi_s3 = func_800ADBB0(vr_box, vr_box->roomVtx, phi_s3, phi_s0->unk_00, phi_s0->unk_04, phi_s0->unk_08, phi_s0->unk_0C, phi_s0->unk_10, i, phi_s2);
        phi_s2 = phi_s2 + 2;
    }
}

/*
void func_800AEFC8(SkyboxContext* vr_box, s16 skyboxId) {
    s32 temp_a1;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 phi_s3;
    Unk_8012AEBC *phi_s0;
    s32 phi_s1;
    s32 phi_s2;
    s32 phi_s3_2;
    Unk_8012AEBC *phi_s0_2;
    s32 phi_s1_2;
    s32 phi_s2_2;
    s32 phi_s3_3;
    Unk_8012AEBC *phi_s0_3;
    s32 phi_s1_3;
    s32 phi_s2_3;

    if (skyboxId == 2) {
block_3:
        phi_s3_3 = 0;
        phi_s0_3 = &D_8012AEBC;
        phi_s1_3 = 0;
        phi_s2_3 = 0;
loop_4:
        temp_s1 = phi_s1_3 + 1;
        phi_s3_3 = func_800ADBB0(vr_box, vr_box->roomVtx, phi_s3_3, phi_s0_3->unk_00, phi_s0_3->unk_04, phi_s0_3->unk_08, phi_s0_3->unk_0C, phi_s0_3->unk_10, phi_s1_3, phi_s2_3);
        phi_s0_3 = phi_s0_3 + 0x14;
        phi_s1_3 = temp_s1;
        phi_s2_3 = phi_s2_3 + 2;
        if (temp_s1 != 2) {
            goto loop_4;
        }
        return;
    }
    if (skyboxId >= 0x11) {
        if (skyboxId < 0x19) {
            goto block_3;
        }
    }
    if (2 == vr_box->unk_140) {
        phi_s3 = 0;
        phi_s0 = &D_8012AEBC;
        phi_s1 = 0;
        phi_s2 = 0;
loop_8:
        temp_s1_2 = phi_s1 + 1;
        phi_s3 = func_800ADBB0(vr_box, vr_box->roomVtx, phi_s3, phi_s0->unk_00, phi_s0->unk_04, phi_s0->unk_08, phi_s0->unk_0C, phi_s0->unk_10, phi_s1, phi_s2);
        phi_s0 = phi_s0 + 0x14;
        phi_s1 = temp_s1_2;
        phi_s2 = phi_s2 + 2;
        if (temp_s1_2 != 3) {
            goto loop_8;
        }
        return;
    }
    phi_s3_2 = 0;
    phi_s0_2 = &D_8012AEBC;
    phi_s1_2 = 0;
    phi_s2_2 = 0;
loop_11:
    temp_s1_3 = phi_s1_2 + 1;
    phi_s3_2 = func_800ADBB0(vr_box, vr_box->roomVtx, phi_s3_2, phi_s0_2->unk_00, phi_s0_2->unk_04, phi_s0_2->unk_08, phi_s0_2->unk_0C, phi_s0_2->unk_10, phi_s1_2, phi_s2_2);
    phi_s0_2 = phi_s0_2 + 0x14;
    phi_s1_2 = temp_s1_3;
    phi_s2_2 = phi_s2_2 + 2;
    if (temp_s1_3 != 4) {
        goto loop_11;
    }
}
*/

#else
#pragma GLOBAL_ASM("asm/non_matchings/code/z_vr_box/func_800AEFC8.s")
#endif

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

#if 0

typedef struct {
    /* 0x00 */ u16  unk_00;
    /* 0x02 */ u16  unk_02;
    /* 0x04 */ u8   unk_04;
    /* 0x05 */ u8   unk_05;
    /* 0x06 */ u8   unk_06;
    /* 0x0C */ u32  unk_0C;
    /* 0x10 */ u32  unk_10;
} Unk_temp_a3; // size = 0x14

extern void * D_8011FC1C;
extern void * D_8011FD3C;
void func_800AF218(GlobalContext* globalCtx, SkyboxContext* vr_box, s32 arg2) {
    s32 sp44;
    u8 sp41;
    u8 sp40;
    void *sp30;
    void *sp2C;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_ret;
    s32 temp_ret_10;
    s32 temp_ret_11;
    s32 temp_ret_12;
    s32 temp_ret_13;
    s32 temp_ret_14;
    s32 temp_ret_15;
    s32 temp_ret_16;
    s32 temp_ret_17;
    s32 temp_ret_18;
    s32 temp_ret_19;
    s32 temp_ret_20;
    s32 temp_ret_21;
    s32 temp_ret_22;
    s32 temp_ret_23;
    s32 temp_ret_24;
    s32 temp_ret_25;
    s32 temp_ret_26;
    s32 temp_ret_27;
    s32 temp_ret_28;
    s32 temp_ret_29;
    s32 temp_ret_2;
    s32 temp_ret_30;
    s32 temp_ret_31;
    s32 temp_ret_32;
    s32 temp_ret_33;
    s32 temp_ret_34;
    s32 temp_ret_35;
    s32 temp_ret_36;
    s32 temp_ret_37;
    s32 temp_ret_38;
    s32 temp_ret_39;
    s32 temp_ret_3;
    s32 temp_ret_40;
    s32 temp_ret_41;
    s32 temp_ret_42;
    s32 temp_ret_43;
    s32 temp_ret_44;
    s32 temp_ret_45;
    s32 temp_ret_46;
    s32 temp_ret_47;
    s32 temp_ret_48;
    s32 temp_ret_49;
    s32 temp_ret_4;
    s32 temp_ret_50;
    s32 temp_ret_51;
    s32 temp_ret_52;
    s32 temp_ret_53;
    s32 temp_ret_54;
    s32 temp_ret_5;
    s32 temp_ret_6;
    s32 temp_ret_7;
    s32 temp_ret_8;
    s32 temp_ret_9;
    s32 temp_t0;
    s32 temp_t0_2;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 temp_v0_4;
    u32 temp_t6;
    void *temp_a1_10;
    void *temp_a1_11;
    void *temp_a1_12;
    void *temp_a1_13;
    void *temp_a1_14;
    void *temp_a1_15;
    void *temp_a1_16;
    void *temp_a1_17;
    void *temp_a1_18;
    void *temp_a1_19;
    void *temp_a1_20;
    void *temp_a1_21;
    void *temp_a1_22;
    void *temp_a1_23;
    void *temp_a1_24;
    void *temp_a1_25;
    void *temp_a1_26;
    void *temp_a1_27;
    void *temp_a1_28;
    void *temp_a1_29;
    void *temp_a1_30;
    void *temp_a1_31;
    void *temp_a1_32;
    void *temp_a1_33;
    void *temp_a1_34;
    void *temp_a1_35;
    void *temp_a1_36;
    void *temp_a1_37;
    void *temp_a1_38;
    void *temp_a1_39;
    void *temp_a1_3;
    void *temp_a1_40;
    void *temp_a1_41;
    void *temp_a1_42;
    void *temp_a1_43;
    void *temp_a1_44;
    void *temp_a1_45;
    void *temp_a1_46;
    void *temp_a1_47;
    void *temp_a1_48;
    void *temp_a1_49;
    void *temp_a1_4;
    void *temp_a1_5;
    void *temp_a1_6;
    void *temp_a1_7;
    void *temp_a1_8;
    void *temp_a1_9;
    Unk_temp_a3 *temp_a3;
    void *temp_v0_2;
    void *temp_v1;
    s32 phi_v1;
    s32 phi_v0;

    temp_t6 = ((s32) (arg2 << 0x10) >> 0x10) - 1;
    if (temp_t6 < 0x27U) {
        //TODO -- wtf is this??
        //goto **(&jtbl_80142DC0 + (temp_t6 * 4));
switch (temp_t6) {
    case 0:
        phi_v1 = 0;
        if (gSaveContext.unk_13C3 != 0) {
            phi_v1 = 0;
            if (gSaveContext.sceneSetupIndex < 4) {
                phi_v1 = 0;
                if ((s32) D_8011FB30 > 0) {
                    phi_v1 = 0;
                    if ((s32) D_8011FB30 < 6) {
                        phi_v1 = 1;
                    }
                }
            }
        }
        phi_v0 = 0;
loop_8:
        temp_a3 = ((((phi_v1 * 8) + phi_v1) * 8) + &D_8011FC1C) + (phi_v0 * 8);
        temp_v0 = (s32) ((phi_v0 + 1) << 0x10) >> 0x10;
        if (((s32) gSaveContext.environmentTime >= (s32) temp_a3->unk_00) && ((s32) gSaveContext.environmentTime >= (s32) temp_a3->unk_02)) {
            if ((0xFFFF == temp_a3->unk_02) && (sp41 = temp_a3->unk_05, globalCtx->envCtx.unk_10[0] = (u8) temp_a3->unk_05, sp40 = temp_a3->unk_06, globalCtx->envCtx.unk_10[1] = (u8) temp_a3->unk_06, (temp_a3->unk_04 != 0))) {
                globalCtx->envCtx.unk_10[2] = (s8) (u32) (func_8006F93C(temp_a3->unk_02, temp_a3->unk_00, gSaveContext.environmentTime) * 255.0f);
            } else {
block_14:
                phi_v0 = temp_v0;
                if (temp_v0 < 9) {
                    goto loop_8;
                }
            }
        } else {
            goto block_14;
        }
        temp_v0_2 = (sp41 * 0x10) + &D_8011FD3C;
        temp_a1 = temp_v0_2->unk4 - temp_v0_2->unk0;
        sp44 = temp_a1;
        sp30 = temp_v0_2;
        temp_ret = Game_Alloc(&globalCtx->state, temp_a1, "../z_vr_box.c", 0x41E);
        vr_box->vr_box_staticSegment[0] = temp_ret;
        if (temp_ret == 0) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x41F);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[0], sp30->unk0, sp44, "../z_vr_box.c", 0x422);
        temp_v1 = (sp40 * 0x10) + &D_8011FD3C;
        temp_a1_2 = temp_v1->unk4 - temp_v1->unk0;
        sp44 = temp_a1_2;
        sp2C = temp_v1;
        temp_ret_2 = Game_Alloc(&globalCtx->state, temp_a1_2, "../z_vr_box.c", 0x424);
        vr_box->vr_box_staticSegment[1] = temp_ret_2;
        if (temp_ret_2 == 0) {
            __assert("vr_box->vr_box_staticSegment[1] != NULL", "../z_vr_box.c", 0x425);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[1], sp2C->unk0, sp44, "../z_vr_box.c", 0x428);
        if ((sp41 & 1) != ((s32) (sp41 & 4) >> 2)) {
            temp_v0_3 = sp30->unkC - sp30->unk8;
            sp44 = temp_v0_3;
            temp_ret_3 = Game_Alloc(&globalCtx->state, temp_v0_3 * 2, "../z_vr_box.c", 0x430);
            vr_box->vr_box_staticSegment[2] = temp_ret_3;
            if (temp_ret_3 == 0) {
                __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x431);
            }
            DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[2], sp30->unk8, sp44, "../z_vr_box.c", 0x433);
            DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[2] + sp44, sp2C->unk8, sp44, "../z_vr_box.c", 0x435);
            return;
            return;
            return;
            return;
            return;
            return;
            return;
            return;
            return;
            return;
            return;
            return;
            return;
            return;
            return;
            return;
            return;
            return;
            return;
            return;
            return;
            return;
            return;
            return;
            return;
        }
        temp_v0_4 = sp30->unkC - sp30->unk8;
        sp44 = temp_v0_4;
        temp_ret_4 = Game_Alloc(&globalCtx->state, temp_v0_4 * 2, "../z_vr_box.c", 0x43D);
        vr_box->vr_box_staticSegment[2] = temp_ret_4;
        if (temp_ret_4 == 0) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x43E);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[2], sp2C->unk8, sp44, "../z_vr_box.c", 0x440);
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[2] + sp44, sp30->unk8, sp44, "../z_vr_box.c", 0x442);
        return;
    case 1:
        vr_box->unk_140 = (u16)1;
        temp_a1_3 = &_vr_SP1a_staticSegmentRomEnd - &_vr_SP1a_staticSegmentRomStart;
        sp2C = temp_a1_3;
        sp30 = &_vr_SP1a_staticSegmentRomStart;
        temp_ret_5 = Game_Alloc(&globalCtx->state, temp_a1_3, "../z_vr_box.c", 0x467);
        vr_box->vr_box_staticSegment[0] = temp_ret_5;
        if (temp_ret_5 == 0) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x468);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[0], sp30, sp2C, "../z_vr_box.c", 0x469);
        temp_a1_4 = &_vr_SP1a_pal_staticSegmentRomEnd - &_vr_SP1a_pal_staticSegmentRomStart;
        sp2C = temp_a1_4;
        sp30 = &_vr_SP1a_pal_staticSegmentRomStart;
        temp_ret_6 = Game_Alloc(&globalCtx->state, temp_a1_4, "../z_vr_box.c", 0x46C);
        vr_box->vr_box_staticSegment[2] = temp_ret_6;
        if (temp_ret_6 == 0) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x46D);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[2], sp30, sp2C, "../z_vr_box.c", 0x46E);
        vr_box->unk_148 = 0.800000011920929f;
        return;
    case 2:
        temp_a1_5 = &_vr_cloud2_staticSegmentRomEnd - &_vr_cloud2_staticSegmentRomStart;
        sp2C = temp_a1_5;
        sp30 = &_vr_cloud2_staticSegmentRomStart;
        temp_ret_7 = Game_Alloc(&globalCtx->state, temp_a1_5, "../z_vr_box.c", 0x483);
        vr_box->vr_box_staticSegment[0] = temp_ret_7;
        if (temp_ret_7 == 0) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x484);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[0], sp30, sp2C, "../z_vr_box.c", 0x487);
        temp_ret_8 = Game_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x48A);
        vr_box->vr_box_staticSegment[1] = temp_ret_8;
        if (temp_ret_8 == 0) {
            __assert("vr_box->vr_box_staticSegment[1] != NULL", "../z_vr_box.c", 0x48B);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[1], sp30, sp2C, "../z_vr_box.c", 0x48E);
        temp_t0 = &_vr_cloud2_pal_staticSegmentRomEnd - &_vr_cloud2_pal_staticSegmentRomStart;
        sp2C = (void *) temp_t0;
        sp30 = &_vr_cloud2_pal_staticSegmentRomStart;
        temp_ret_9 = Game_Alloc(&globalCtx->state, temp_t0 * 2, "../z_vr_box.c", 0x492);
        vr_box->vr_box_staticSegment[2] = temp_ret_9;
        if (temp_ret_9 == 0) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x493);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[2], sp30, sp2C, "../z_vr_box.c", 0x495);
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[2] + sp2C, sp30, sp2C, "../z_vr_box.c", 0x497);
        return;
    case 3:
        vr_box->unk_140 = (u16)1;
        temp_a1_6 = &_vr_RUVR_staticSegmentRomEnd - &_vr_RUVR_staticSegmentRomStart;
        sp2C = temp_a1_6;
        sp30 = &_vr_RUVR_staticSegmentRomStart;
        temp_ret_10 = Game_Alloc(&globalCtx->state, temp_a1_6, "../z_vr_box.c", 0x49E);
        vr_box->vr_box_staticSegment[0] = temp_ret_10;
        if (temp_ret_10 == 0) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x49F);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[0], sp30, sp2C, "../z_vr_box.c", 0x4A0);
        temp_a1_7 = &_vr_RUVR_pal_staticSegmentRomEnd - &_vr_RUVR_pal_staticSegmentRomStart;
        sp2C = temp_a1_7;
        sp30 = &_vr_RUVR_pal_staticSegmentRomStart;
        osSyncPrintf("ＳＩＺＥ = %d\n", temp_a1_7);
        temp_ret_11 = Game_Alloc(&globalCtx->state, temp_a1_7, "../z_vr_box.c", 0x4A4);
        vr_box->vr_box_staticSegment[2] = temp_ret_11;
        if (temp_ret_11 == 0) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x4A5);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[2], sp30, sp2C, "../z_vr_box.c", 0x4A6);
        return;
    case 4:
        temp_a1_8 = &_vr_holy0_staticSegmentRomEnd - &_vr_holy0_staticSegmentRomStart;
        sp2C = temp_a1_8;
        sp30 = &_vr_holy0_staticSegmentRomStart;
        temp_ret_12 = Game_Alloc(&globalCtx->state, temp_a1_8, "../z_vr_box.c", 0x4AC);
        vr_box->vr_box_staticSegment[0] = temp_ret_12;
        if (temp_ret_12 == 0) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x4AD);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[0], sp30, sp2C, "../z_vr_box.c", 0x4B0);
        temp_a1_9 = &_vr_holy1_staticSegmentRomEnd - &_vr_holy1_staticSegmentRomStart;
        sp2C = temp_a1_9;
        sp30 = &_vr_holy1_staticSegmentRomStart;
        temp_ret_13 = Game_Alloc(&globalCtx->state, temp_a1_9, "../z_vr_box.c", 0x4B3);
        vr_box->vr_box_staticSegment[1] = temp_ret_13;
        if (temp_ret_13 == 0) {
            __assert("vr_box->vr_box_staticSegment[1] != NULL", "../z_vr_box.c", 0x4B4);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[1], sp30, sp2C, "../z_vr_box.c", 0x4B7);
        temp_t0_2 = &_vr_holy0_pal_staticSegmentRomEnd - &_vr_holy0_pal_staticSegmentRomStart;
        sp2C = (void *) temp_t0_2;
        sp30 = &_vr_holy0_pal_staticSegmentRomStart;
        temp_ret_14 = Game_Alloc(&globalCtx->state, temp_t0_2 * 2, "../z_vr_box.c", 0x4BB);
        vr_box->vr_box_staticSegment[2] = temp_ret_14;
        if (temp_ret_14 == 0) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x4BC);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[2], sp30, sp2C, "../z_vr_box.c", 0x4BE);
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[2] + sp2C, &_vr_holy1_pal_staticSegmentRomStart, sp2C, "../z_vr_box.c", 0x4C0);
        return;
    case 6:
        vr_box->unk_140 = (u16)1;
        temp_a1_10 = &_vr_LHVR_staticSegmentRomEnd - &_vr_LHVR_staticSegmentRomStart;
        sp2C = temp_a1_10;
        sp30 = &_vr_LHVR_staticSegmentRomStart;
        temp_ret_15 = Game_Alloc(&globalCtx->state, temp_a1_10, "../z_vr_box.c", 0x4CA);
        vr_box->vr_box_staticSegment[0] = temp_ret_15;
        if (temp_ret_15 == 0) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x4CB);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[0], sp30, sp2C, "../z_vr_box.c", 0x4CC);
        temp_a1_11 = &_vr_LHVR_pal_staticSegmentRomEnd - &_vr_LHVR_pal_staticSegmentRomStart;
        sp2C = temp_a1_11;
        sp30 = &_vr_LHVR_pal_staticSegmentRomStart;
        temp_ret_16 = Game_Alloc(&globalCtx->state, temp_a1_11, "../z_vr_box.c", 0x4CF);
        vr_box->vr_box_staticSegment[2] = temp_ret_16;
        if (temp_ret_16 == 0) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x4D0);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[2], sp30, sp2C, "../z_vr_box.c", 0x4D1);
        return;
    case 8:
        vr_box->unk_140 = (u16)1;
        temp_a1_12 = &_vr_MDVR_staticSegmentRomEnd - &_vr_MDVR_staticSegmentRomStart;
        sp2C = temp_a1_12;
        sp30 = &_vr_MDVR_staticSegmentRomStart;
        temp_ret_17 = Game_Alloc(&globalCtx->state, temp_a1_12, "../z_vr_box.c", 0x4E9);
        vr_box->vr_box_staticSegment[0] = temp_ret_17;
        if (temp_ret_17 == 0) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x4EA);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[0], sp30, sp2C, "../z_vr_box.c", 0x4EB);
        temp_a1_13 = &_vr_MDVR_pal_staticSegmentRomEnd - &_vr_MDVR_pal_staticSegmentRomStart;
        sp2C = temp_a1_13;
        sp30 = &_vr_MDVR_pal_staticSegmentRomStart;
        temp_ret_18 = Game_Alloc(&globalCtx->state, temp_a1_13, "../z_vr_box.c", 0x4EE);
        vr_box->vr_box_staticSegment[2] = temp_ret_18;
        if (temp_ret_18 == 0) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x4EF);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[2], sp30, sp2C, "../z_vr_box.c", 0x4F0);
        return;
    case 9:
        vr_box->unk_140 = (u16)1;
        temp_a1_14 = &_vr_MNVR_staticSegmentRomEnd - &_vr_MNVR_staticSegmentRomStart;
        sp2C = temp_a1_14;
        sp30 = &_vr_MNVR_staticSegmentRomStart;
        temp_ret_19 = Game_Alloc(&globalCtx->state, temp_a1_14, "../z_vr_box.c", 0x4F7);
        vr_box->vr_box_staticSegment[0] = temp_ret_19;
        if (temp_ret_19 == 0) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x4F8);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[0], sp30, sp2C, "../z_vr_box.c", 0x4F9);
        temp_a1_15 = &_vr_MNVR_pal_staticSegmentRomEnd - &_vr_MNVR_pal_staticSegmentRomStart;
        sp2C = temp_a1_15;
        sp30 = &_vr_MNVR_pal_staticSegmentRomStart;
        osSyncPrintf("ＳＩＺＥ = %d\n", temp_a1_15);
        temp_ret_20 = Game_Alloc(&globalCtx->state, temp_a1_15, "../z_vr_box.c", 0x4FD);
        vr_box->vr_box_staticSegment[2] = temp_ret_20;
        if (temp_ret_20 == 0) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x4FE);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[2], sp30, sp2C, "../z_vr_box.c", 0x4FF);
        return;
    case 10:
        vr_box->unk_140 = (u16)1;
        temp_a1_16 = &_vr_FCVR_staticSegmentRomEnd - &_vr_FCVR_staticSegmentRomStart;
        sp2C = temp_a1_16;
        sp30 = &_vr_FCVR_staticSegmentRomStart;
        temp_ret_21 = Game_Alloc(&globalCtx->state, temp_a1_16, "../z_vr_box.c", 0x506);
        vr_box->vr_box_staticSegment[0] = temp_ret_21;
        if (temp_ret_21 == 0) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x507);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[0], sp30, sp2C, "../z_vr_box.c", 0x508);
        temp_a1_17 = &_vr_FCVR_pal_staticSegmentRomEnd - &_vr_FCVR_pal_staticSegmentRomStart;
        sp2C = temp_a1_17;
        sp30 = &_vr_FCVR_pal_staticSegmentRomStart;
        temp_ret_22 = Game_Alloc(&globalCtx->state, temp_a1_17, "../z_vr_box.c", 0x50B);
        vr_box->vr_box_staticSegment[2] = temp_ret_22;
        if (temp_ret_22 == 0) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x50C);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[2], sp30, sp2C, "../z_vr_box.c", 0x50D);
        vr_box->unk_148 = 0.800000011920929f;
        return;
    case 11:
        vr_box->unk_140 = (u16)1;
        temp_a1_18 = &_vr_KHVR_staticSegmentRomEnd - &_vr_KHVR_staticSegmentRomStart;
        sp2C = temp_a1_18;
        sp30 = &_vr_KHVR_staticSegmentRomStart;
        temp_ret_23 = Game_Alloc(&globalCtx->state, temp_a1_18, "../z_vr_box.c", 0x515);
        vr_box->vr_box_staticSegment[0] = temp_ret_23;
        if (temp_ret_23 == 0) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x516);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[0], sp30, sp2C, "../z_vr_box.c", 0x517);
        temp_a1_19 = &_vr_KHVR_pal_staticSegmentRomEnd - &_vr_KHVR_pal_staticSegmentRomStart;
        sp2C = temp_a1_19;
        sp30 = &_vr_KHVR_pal_staticSegmentRomStart;
        temp_ret_24 = Game_Alloc(&globalCtx->state, temp_a1_19, "../z_vr_box.c", 0x51A);
        vr_box->vr_box_staticSegment[2] = temp_ret_24;
        if (temp_ret_24 == 0) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x51B);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[2], sp30, sp2C, "../z_vr_box.c", 0x51C);
        return;
    case 13:
        vr_box->unk_140 = (u16)2;
        temp_a1_20 = &_vr_K3VR_staticSegmentRomEnd - &_vr_K3VR_staticSegmentRomStart;
        sp2C = temp_a1_20;
        sp30 = &_vr_K3VR_staticSegmentRomStart;
        temp_ret_25 = Game_Alloc(&globalCtx->state, temp_a1_20, "../z_vr_box.c", 0x533);
        vr_box->vr_box_staticSegment[0] = temp_ret_25;
        if (temp_ret_25 == 0) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x534);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[0], sp30, sp2C, "../z_vr_box.c", 0x535);
        temp_a1_21 = &_vr_K3VR_pal_staticSegmentRomEnd - &_vr_K3VR_pal_staticSegmentRomStart;
        sp2C = temp_a1_21;
        sp30 = &_vr_K3VR_pal_staticSegmentRomStart;
        temp_ret_26 = Game_Alloc(&globalCtx->state, temp_a1_21, "../z_vr_box.c", 0x538);
        vr_box->vr_box_staticSegment[2] = temp_ret_26;
        if (temp_ret_26 == 0) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x539);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[2], sp30, sp2C, "../z_vr_box.c", 0x53A);
        return;
    case 14:
        vr_box->unk_140 = (u16)1;
        temp_a1_22 = &_vr_MLVR_staticSegmentRomEnd - &_vr_MLVR_staticSegmentRomStart;
        sp2C = temp_a1_22;
        sp30 = &_vr_MLVR_staticSegmentRomStart;
        temp_ret_27 = Game_Alloc(&globalCtx->state, temp_a1_22, "../z_vr_box.c", 0x541);
        vr_box->vr_box_staticSegment[0] = temp_ret_27;
        if (temp_ret_27 == 0) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x542);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[0], sp30, sp2C, "../z_vr_box.c", 0x543);
        temp_a1_23 = &_vr_MLVR_pal_staticSegmentRomEnd - &_vr_MLVR_pal_staticSegmentRomStart;
        sp2C = temp_a1_23;
        sp30 = &_vr_MLVR_pal_staticSegmentRomStart;
        temp_ret_28 = Game_Alloc(&globalCtx->state, temp_a1_23, "../z_vr_box.c", 0x546);
        vr_box->vr_box_staticSegment[2] = temp_ret_28;
        if (temp_ret_28 == 0) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x547);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[2], sp30, sp2C, "../z_vr_box.c", 0x548);
        return;
    case 15:
        vr_box->unk_140 = (u16)1;
        temp_a1_24 = &_vr_KKRVR_staticSegmentRomEnd - &_vr_KKRVR_staticSegmentRomStart;
        sp2C = temp_a1_24;
        sp30 = &_vr_KKRVR_staticSegmentRomStart;
        temp_ret_29 = Game_Alloc(&globalCtx->state, temp_a1_24, "../z_vr_box.c", 0x54F);
        vr_box->vr_box_staticSegment[0] = temp_ret_29;
        if (temp_ret_29 == 0) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x550);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[0], sp30, sp2C, "../z_vr_box.c", 0x551);
        temp_a1_25 = &_vr_KKRVR_pal_staticSegmentRomEnd - &_vr_KKRVR_pal_staticSegmentRomStart;
        sp2C = temp_a1_25;
        sp30 = &_vr_KKRVR_pal_staticSegmentRomStart;
        temp_ret_30 = Game_Alloc(&globalCtx->state, temp_a1_25, "../z_vr_box.c", 0x554);
        vr_box->vr_box_staticSegment[2] = temp_ret_30;
        if (temp_ret_30 == 0) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x555);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[2], sp30, sp2C, "../z_vr_box.c", 0x556);
        return;
    case 16:
        vr_box->unk_140 = (u16)1;
        temp_a1_26 = &_vr_KSVR_staticSegmentRomEnd - &_vr_KSVR_staticSegmentRomStart;
        sp2C = temp_a1_26;
        sp30 = &_vr_KSVR_staticSegmentRomStart;
        temp_ret_31 = Game_Alloc(&globalCtx->state, temp_a1_26, "../z_vr_box.c", 0x55D);
        vr_box->vr_box_staticSegment[0] = temp_ret_31;
        if (temp_ret_31 == 0) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x55E);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[0], sp30, sp2C, "../z_vr_box.c", 0x55F);
        temp_a1_27 = &_vr_KSVR_pal_staticSegmentRomEnd - &_vr_KSVR_pal_staticSegmentRomStart;
        sp2C = temp_a1_27;
        sp30 = &_vr_KSVR_pal_staticSegmentRomStart;
        temp_ret_32 = Game_Alloc(&globalCtx->state, temp_a1_27, "../z_vr_box.c", 0x562);
        vr_box->vr_box_staticSegment[2] = temp_ret_32;
        if (temp_ret_32 == 0) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x563);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[2], sp30, sp2C, "../z_vr_box.c", 0x564);
        vr_box->unk_148 = 0.800000011920929f;
        return;
    case 18:
        vr_box->unk_140 = (u16)1;
        temp_a1_28 = &_vr_GLVR_staticSegmentRomEnd - &_vr_GLVR_staticSegmentRomStart;
        sp2C = temp_a1_28;
        sp30 = &_vr_GLVR_staticSegmentRomStart;
        temp_ret_33 = Game_Alloc(&globalCtx->state, temp_a1_28, "../z_vr_box.c", 0x57D);
        vr_box->vr_box_staticSegment[0] = temp_ret_33;
        if (temp_ret_33 == 0) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x57E);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[0], sp30, sp2C, "../z_vr_box.c", 0x57F);
        temp_a1_29 = &_vr_GLVR_pal_staticSegmentRomEnd - &_vr_GLVR_pal_staticSegmentRomStart;
        sp2C = temp_a1_29;
        sp30 = &_vr_GLVR_pal_staticSegmentRomStart;
        temp_ret_34 = Game_Alloc(&globalCtx->state, temp_a1_29, "../z_vr_box.c", 0x582);
        vr_box->vr_box_staticSegment[2] = temp_ret_34;
        if (temp_ret_34 == 0) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x583);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[2], sp30, sp2C, "../z_vr_box.c", 0x584);
        vr_box->unk_148 = 0.800000011920929f;
        return;
    case 19:
        vr_box->unk_140 = (u16)1;
        temp_a1_30 = &_vr_ZRVR_staticSegmentRomEnd - &_vr_ZRVR_staticSegmentRomStart;
        sp2C = temp_a1_30;
        sp30 = &_vr_ZRVR_staticSegmentRomStart;
        temp_ret_35 = Game_Alloc(&globalCtx->state, temp_a1_30, "../z_vr_box.c", 0x58C);
        vr_box->vr_box_staticSegment[0] = temp_ret_35;
        if (temp_ret_35 == 0) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x58D);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[0], sp30, sp2C, "../z_vr_box.c", 0x58E);
        temp_a1_31 = &_vr_ZRVR_pal_staticSegmentRomEnd - &_vr_ZRVR_pal_staticSegmentRomStart;
        sp2C = temp_a1_31;
        sp30 = &_vr_ZRVR_pal_staticSegmentRomStart;
        temp_ret_36 = Game_Alloc(&globalCtx->state, temp_a1_31, "../z_vr_box.c", 0x591);
        vr_box->vr_box_staticSegment[2] = temp_ret_36;
        if (temp_ret_36 == 0) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x592);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[2], sp30, sp2C, "../z_vr_box.c", 0x593);
        vr_box->unk_148 = 0.800000011920929f;
        return;
    case 21:
        vr_box->unk_140 = (u16)1;
        temp_a1_32 = &_vr_DGVR_staticSegmentRomEnd - &_vr_DGVR_staticSegmentRomStart;
        sp2C = temp_a1_32;
        sp30 = &_vr_DGVR_staticSegmentRomStart;
        temp_ret_37 = Game_Alloc(&globalCtx->state, temp_a1_32, "../z_vr_box.c", 0x5AB);
        vr_box->vr_box_staticSegment[0] = temp_ret_37;
        if (temp_ret_37 == 0) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x5AC);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[0], sp30, sp2C, "../z_vr_box.c", 0x5AD);
        temp_a1_33 = &_vr_DGVR_pal_staticSegmentRomEnd - &_vr_DGVR_pal_staticSegmentRomStart;
        sp2C = temp_a1_33;
        sp30 = &_vr_DGVR_pal_staticSegmentRomStart;
        temp_ret_38 = Game_Alloc(&globalCtx->state, temp_a1_33, "../z_vr_box.c", 0x5B0);
        vr_box->vr_box_staticSegment[2] = temp_ret_38;
        if (temp_ret_38 == 0) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x5B1);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[2], sp30, sp2C, "../z_vr_box.c", 0x5B2);
        vr_box->unk_148 = 0.800000011920929f;
        return;
    case 22:
        vr_box->unk_140 = (u16)1;
        temp_a1_34 = &_vr_ALVR_staticSegmentRomEnd - &_vr_ALVR_staticSegmentRomStart;
        sp2C = temp_a1_34;
        sp30 = &_vr_ALVR_staticSegmentRomStart;
        temp_ret_39 = Game_Alloc(&globalCtx->state, temp_a1_34, "../z_vr_box.c", 0x5BA);
        vr_box->vr_box_staticSegment[0] = temp_ret_39;
        if (temp_ret_39 == 0) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x5BB);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[0], sp30, sp2C, "../z_vr_box.c", 0x5BC);
        temp_a1_35 = &_vr_ALVR_pal_staticSegmentRomEnd - &_vr_ALVR_pal_staticSegmentRomStart;
        sp2C = temp_a1_35;
        sp30 = &_vr_ALVR_pal_staticSegmentRomStart;
        temp_ret_40 = Game_Alloc(&globalCtx->state, temp_a1_35, "../z_vr_box.c", 0x5BF);
        vr_box->vr_box_staticSegment[2] = temp_ret_40;
        if (temp_ret_40 == 0) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x5C0);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[2], sp30, sp2C, "../z_vr_box.c", 0x5C1);
        vr_box->unk_148 = 0.800000011920929f;
        return;
    case 23:
        vr_box->unk_140 = (u16)1;
        temp_a1_36 = &_vr_NSVR_staticSegmentRomEnd - &_vr_NSVR_staticSegmentRomStart;
        sp2C = temp_a1_36;
        sp30 = &_vr_NSVR_staticSegmentRomStart;
        temp_ret_41 = Game_Alloc(&globalCtx->state, temp_a1_36, "../z_vr_box.c", 0x5C9);
        vr_box->vr_box_staticSegment[0] = temp_ret_41;
        if (temp_ret_41 == 0) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x5CA);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[0], sp30, sp2C, "../z_vr_box.c", 0x5CB);
        temp_a1_37 = &_vr_NSVR_pal_staticSegmentRomEnd - &_vr_NSVR_pal_staticSegmentRomStart;
        sp2C = temp_a1_37;
        sp30 = &_vr_NSVR_pal_staticSegmentRomStart;
        temp_ret_42 = Game_Alloc(&globalCtx->state, temp_a1_37, "../z_vr_box.c", 0x5CE);
        vr_box->vr_box_staticSegment[2] = temp_ret_42;
        if (temp_ret_42 == 0) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x5CF);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[2], sp30, sp2C, "../z_vr_box.c", 0x5D0);
        vr_box->unk_148 = 0.800000011920929f;
        return;
    case 25:
        vr_box->unk_140 = (u16)1;
        temp_a1_38 = &_vr_IPVR_staticSegmentRomEnd - &_vr_IPVR_staticSegmentRomStart;
        sp2C = temp_a1_38;
        sp30 = &_vr_IPVR_staticSegmentRomStart;
        temp_ret_43 = Game_Alloc(&globalCtx->state, temp_a1_38, "../z_vr_box.c", 0x5E8);
        vr_box->vr_box_staticSegment[0] = temp_ret_43;
        if (temp_ret_43 == 0) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x5E9);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[0], sp30, sp2C, "../z_vr_box.c", 0x5EA);
        temp_a1_39 = &_vr_IPVR_pal_staticSegmentRomEnd - &_vr_IPVR_pal_staticSegmentRomStart;
        sp2C = temp_a1_39;
        sp30 = &_vr_IPVR_pal_staticSegmentRomStart;
        temp_ret_44 = Game_Alloc(&globalCtx->state, temp_a1_39, "../z_vr_box.c", 0x5ED);
        vr_box->vr_box_staticSegment[2] = temp_ret_44;
        if (temp_ret_44 == 0) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x5EE);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[2], sp30, sp2C, "../z_vr_box.c", 0x5EF);
        return;
    case 26:
        vr_box->unk_140 = (u16)1;
        temp_a1_40 = &_vr_LBVR_staticSegmentRomEnd - &_vr_LBVR_staticSegmentRomStart;
        sp2C = temp_a1_40;
        sp30 = &_vr_LBVR_staticSegmentRomStart;
        temp_ret_45 = Game_Alloc(&globalCtx->state, temp_a1_40, "../z_vr_box.c", 0x5F6);
        vr_box->vr_box_staticSegment[0] = temp_ret_45;
        if (temp_ret_45 == 0) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x5F7);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[0], sp30, sp2C, "../z_vr_box.c", 0x5F8);
        temp_a1_41 = &_vr_LBVR_pal_staticSegmentRomEnd - &_vr_LBVR_pal_staticSegmentRomStart;
        sp2C = temp_a1_41;
        sp30 = &_vr_LBVR_pal_staticSegmentRomStart;
        temp_ret_46 = Game_Alloc(&globalCtx->state, temp_a1_41, "../z_vr_box.c", 0x5FB);
        vr_box->vr_box_staticSegment[2] = temp_ret_46;
        if (temp_ret_46 == 0) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x5FC);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[2], sp30, sp2C, "../z_vr_box.c", 0x5FD);
        return;
    case 27:
        vr_box->unk_140 = (u16)2;
        temp_a1_42 = &_vr_TTVR_staticSegmentRomEnd - &_vr_TTVR_staticSegmentRomStart;
        sp2C = temp_a1_42;
        sp30 = &_vr_TTVR_staticSegmentRomStart;
        temp_ret_47 = Game_Alloc(&globalCtx->state, temp_a1_42, "../z_vr_box.c", 0x604);
        vr_box->vr_box_staticSegment[0] = temp_ret_47;
        if (temp_ret_47 == 0) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x605);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[0], sp30, sp2C, "../z_vr_box.c", 0x606);
        temp_a1_43 = &_vr_TTVR_pal_staticSegmentRomEnd - &_vr_TTVR_pal_staticSegmentRomStart;
        sp2C = temp_a1_43;
        sp30 = &_vr_TTVR_pal_staticSegmentRomStart;
        temp_ret_48 = Game_Alloc(&globalCtx->state, temp_a1_43, "../z_vr_box.c", 0x609);
        vr_box->vr_box_staticSegment[2] = temp_ret_48;
        if (temp_ret_48 == 0) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x60A);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[2], sp30, sp2C, "../z_vr_box.c", 0x60B);
        return;
    case 31:
        vr_box->unk_140 = (u16)2;
        temp_a1_44 = &_vr_K4VR_staticSegmentRomEnd - &_vr_K4VR_staticSegmentRomStart;
        sp2C = temp_a1_44;
        sp30 = &_vr_K4VR_staticSegmentRomStart;
        temp_ret_49 = Game_Alloc(&globalCtx->state, temp_a1_44, "../z_vr_box.c", 0x618);
        vr_box->vr_box_staticSegment[0] = temp_ret_49;
        if (temp_ret_49 == 0) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x619);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[0], sp30, sp2C, "../z_vr_box.c", 0x61A);
        temp_a1_45 = &_vr_K4VR_pal_staticSegmentRomEnd - &_vr_K4VR_pal_staticSegmentRomStart;
        sp2C = temp_a1_45;
        sp30 = &_vr_K4VR_pal_staticSegmentRomStart;
        temp_ret_50 = Game_Alloc(&globalCtx->state, temp_a1_45, "../z_vr_box.c", 0x61D);
        vr_box->vr_box_staticSegment[2] = temp_ret_50;
        if (temp_ret_50 == 0) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x61E);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[2], sp30, sp2C, "../z_vr_box.c", 0x61F);
        return;
    case 32:
        vr_box->unk_140 = (u16)2;
        temp_a1_46 = &_vr_K5VR_staticSegmentRomEnd - &_vr_K5VR_staticSegmentRomStart;
        sp2C = temp_a1_46;
        sp30 = &_vr_K5VR_staticSegmentRomStart;
        temp_ret_51 = Game_Alloc(&globalCtx->state, temp_a1_46, "../z_vr_box.c", 0x626);
        vr_box->vr_box_staticSegment[0] = temp_ret_51;
        if (temp_ret_51 == 0) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x627);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[0], sp30, sp2C, "../z_vr_box.c", 0x628);
        temp_a1_47 = &_vr_K5VR_pal_staticSegmentRomEnd - &_vr_K5VR_pal_staticSegmentRomStart;
        sp2C = temp_a1_47;
        sp30 = &_vr_K5VR_pal_staticSegmentRomStart;
        temp_ret_52 = Game_Alloc(&globalCtx->state, temp_a1_47, "../z_vr_box.c", 0x62B);
        vr_box->vr_box_staticSegment[2] = temp_ret_52;
        if (temp_ret_52 == 0) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x62C);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[2], sp30, sp2C, "../z_vr_box.c", 0x62D);
        return;
    case 33:
        vr_box->unk_140 = (u16)2;
        temp_a1_48 = &_vr_KR3VR_staticSegmentRomEnd - &_vr_KR3VR_staticSegmentRomStart;
        sp2C = temp_a1_48;
        sp30 = &_vr_KR3VR_staticSegmentRomStart;
        temp_ret_53 = Game_Alloc(&globalCtx->state, temp_a1_48, "../z_vr_box.c", 0x634);
        vr_box->vr_box_staticSegment[0] = temp_ret_53;
        if (temp_ret_53 == 0) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x635);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[0], sp30, sp2C, "../z_vr_box.c", 0x636);
        temp_a1_49 = &_vr_KR3VR_pal_staticSegmentRomEnd - &_vr_KR3VR_pal_staticSegmentRomStart;
        sp2C = temp_a1_49;
        sp30 = &_vr_KR3VR_pal_staticSegmentRomStart;
        temp_ret_54 = Game_Alloc(&globalCtx->state, temp_a1_49, "../z_vr_box.c", 0x639);
        vr_box->vr_box_staticSegment[2] = temp_ret_54;
        if (temp_ret_54 == 0) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x63A);
        }
        DmaMgr_SendRequest1(vr_box->vr_box_staticSegment[2], sp30, sp2C, "../z_vr_box.c", 0x63B);
    }
//default:
}
}

#else
#pragma GLOBAL_ASM("asm/non_matchings/code/z_vr_box/func_800AF218.s")
#endif

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
