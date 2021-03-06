.rdata
glabel D_809C8310
    .asciz "../z_en_bombf.c"
    .balign 4

glabel D_809C8320
    .asciz "../z_en_bombf.c"
    .balign 4

glabel D_809C8330
    .asciz "../z_en_bombf.c"
    .balign 4

glabel D_809C8340
    .asciz "../z_en_bombf.c"
    .balign 4

.text
glabel EnBombf_Draw
/* 01054 809C7FB4 27BDFF98 */  addiu   $sp, $sp, 0xFF98           ## $sp = FFFFFF98
/* 01058 809C7FB8 AFBF001C */  sw      $ra, 0x001C($sp)           
/* 0105C 809C7FBC AFB00018 */  sw      $s0, 0x0018($sp)           
/* 01060 809C7FC0 AFA40068 */  sw      $a0, 0x0068($sp)           
/* 01064 809C7FC4 AFA5006C */  sw      $a1, 0x006C($sp)           
/* 01068 809C7FC8 8CA50000 */  lw      $a1, 0x0000($a1)           ## 00000000
/* 0106C 809C7FCC 3C06809D */  lui     $a2, %hi(D_809C8310)       ## $a2 = 809D0000
/* 01070 809C7FD0 24C68310 */  addiu   $a2, $a2, %lo(D_809C8310)  ## $a2 = 809C8310
/* 01074 809C7FD4 27A4004C */  addiu   $a0, $sp, 0x004C           ## $a0 = FFFFFFE4
/* 01078 809C7FD8 2407040A */  addiu   $a3, $zero, 0x040A         ## $a3 = 0000040A
/* 0107C 809C7FDC 0C031AB1 */  jal     Graph_OpenDisps              
/* 01080 809C7FE0 00A08025 */  or      $s0, $a1, $zero            ## $s0 = 00000000
/* 01084 809C7FE4 8FA20068 */  lw      $v0, 0x0068($sp)           
/* 01088 809C7FE8 8FB8006C */  lw      $t8, 0x006C($sp)           
/* 0108C 809C7FEC 00002025 */  or      $a0, $zero, $zero          ## $a0 = 00000000
/* 01090 809C7FF0 844F001C */  lh      $t7, 0x001C($v0)           ## 0000001C
/* 01094 809C7FF4 1DE00083 */  bgtz    $t7, .L809C8204            
/* 01098 809C7FF8 00000000 */  nop
/* 0109C 809C7FFC 0C024F46 */  jal     func_80093D18              
/* 010A0 809C8000 8F040000 */  lw      $a0, 0x0000($t8)           ## 00000000
/* 010A4 809C8004 8FB90068 */  lw      $t9, 0x0068($sp)           
/* 010A8 809C8008 3C0ADA38 */  lui     $t2, 0xDA38                ## $t2 = DA380000
/* 010AC 809C800C 8728001C */  lh      $t0, 0x001C($t9)           ## 0000001C
/* 010B0 809C8010 5100002B */  beql    $t0, $zero, .L809C80C0     
/* 010B4 809C8014 8E0202C0 */  lw      $v0, 0x02C0($s0)           ## 000002C0
/* 010B8 809C8018 8E0202C0 */  lw      $v0, 0x02C0($s0)           ## 000002C0
/* 010BC 809C801C 354A0003 */  ori     $t2, $t2, 0x0003           ## $t2 = DA380003
/* 010C0 809C8020 3C05809D */  lui     $a1, %hi(D_809C8320)       ## $a1 = 809D0000
/* 010C4 809C8024 24490008 */  addiu   $t1, $v0, 0x0008           ## $t1 = 00000008
/* 010C8 809C8028 AE0902C0 */  sw      $t1, 0x02C0($s0)           ## 000002C0
/* 010CC 809C802C AC4A0000 */  sw      $t2, 0x0000($v0)           ## 00000000
/* 010D0 809C8030 8FAB006C */  lw      $t3, 0x006C($sp)           
/* 010D4 809C8034 24A58320 */  addiu   $a1, $a1, %lo(D_809C8320)  ## $a1 = 809C8320
/* 010D8 809C8038 24060411 */  addiu   $a2, $zero, 0x0411         ## $a2 = 00000411
/* 010DC 809C803C 8D640000 */  lw      $a0, 0x0000($t3)           ## 00000000
/* 010E0 809C8040 0C0346A2 */  jal     Matrix_NewMtx              
/* 010E4 809C8044 AFA20048 */  sw      $v0, 0x0048($sp)           
/* 010E8 809C8048 8FA30048 */  lw      $v1, 0x0048($sp)           
/* 010EC 809C804C 3C0D0600 */  lui     $t5, 0x0600                ## $t5 = 06000000
/* 010F0 809C8050 25AD0340 */  addiu   $t5, $t5, 0x0340           ## $t5 = 06000340
/* 010F4 809C8054 AC620004 */  sw      $v0, 0x0004($v1)           ## 00000004
/* 010F8 809C8058 8E0202C0 */  lw      $v0, 0x02C0($s0)           ## 000002C0
/* 010FC 809C805C 3C04DE00 */  lui     $a0, 0xDE00                ## $a0 = DE000000
/* 01100 809C8060 44806000 */  mtc1    $zero, $f12                ## $f12 = 0.00
/* 01104 809C8064 244C0008 */  addiu   $t4, $v0, 0x0008           ## $t4 = 00000008
/* 01108 809C8068 AE0C02C0 */  sw      $t4, 0x02C0($s0)           ## 000002C0
/* 0110C 809C806C AC4D0004 */  sw      $t5, 0x0004($v0)           ## 00000004
/* 01110 809C8070 AC440000 */  sw      $a0, 0x0000($v0)           ## 00000000
/* 01114 809C8074 8E0202C0 */  lw      $v0, 0x02C0($s0)           ## 000002C0
/* 01118 809C8078 3C0F0600 */  lui     $t7, 0x0600                ## $t7 = 06000000
/* 0111C 809C807C 3C01447A */  lui     $at, 0x447A                ## $at = 447A0000
/* 01120 809C8080 244E0008 */  addiu   $t6, $v0, 0x0008           ## $t6 = 00000008
/* 01124 809C8084 AE0E02C0 */  sw      $t6, 0x02C0($s0)           ## 000002C0
/* 01128 809C8088 25EF0530 */  addiu   $t7, $t7, 0x0530           ## $t7 = 06000530
/* 0112C 809C808C 44817000 */  mtc1    $at, $f14                  ## $f14 = 1000.00
/* 01130 809C8090 44066000 */  mfc1    $a2, $f12                  
/* 01134 809C8094 24070001 */  addiu   $a3, $zero, 0x0001         ## $a3 = 00000001
/* 01138 809C8098 AC4F0004 */  sw      $t7, 0x0004($v0)           ## 00000004
/* 0113C 809C809C 0C034261 */  jal     Matrix_Translate              
/* 01140 809C80A0 AC440000 */  sw      $a0, 0x0000($v0)           ## 00000000
/* 01144 809C80A4 8FB80068 */  lw      $t8, 0x0068($sp)           
/* 01148 809C80A8 24070001 */  addiu   $a3, $zero, 0x0001         ## $a3 = 00000001
/* 0114C 809C80AC C70C020C */  lwc1    $f12, 0x020C($t8)          ## 0000020C
/* 01150 809C80B0 44066000 */  mfc1    $a2, $f12                  
/* 01154 809C80B4 0C0342A3 */  jal     Matrix_Scale              
/* 01158 809C80B8 46006386 */  mov.s   $f14, $f12                 
/* 0115C 809C80BC 8E0202C0 */  lw      $v0, 0x02C0($s0)           ## 000002C0
.L809C80C0:
/* 01160 809C80C0 3C09C8FF */  lui     $t1, 0xC8FF                ## $t1 = C8FF0000
/* 01164 809C80C4 3529C8FF */  ori     $t1, $t1, 0xC8FF           ## $t1 = C8FFC8FF
/* 01168 809C80C8 24590008 */  addiu   $t9, $v0, 0x0008           ## $t9 = 00000008
/* 0116C 809C80CC AE1902C0 */  sw      $t9, 0x02C0($s0)           ## 000002C0
/* 01170 809C80D0 3C08FA00 */  lui     $t0, 0xFA00                ## $t0 = FA000000
/* 01174 809C80D4 AC480000 */  sw      $t0, 0x0000($v0)           ## 00000000
/* 01178 809C80D8 AC490004 */  sw      $t1, 0x0004($v0)           ## 00000004
/* 0117C 809C80DC 8E0202C0 */  lw      $v0, 0x02C0($s0)           ## 000002C0
/* 01180 809C80E0 3C0BE700 */  lui     $t3, 0xE700                ## $t3 = E7000000
/* 01184 809C80E4 3C0DFB00 */  lui     $t5, 0xFB00                ## $t5 = FB000000
/* 01188 809C80E8 244A0008 */  addiu   $t2, $v0, 0x0008           ## $t2 = 00000008
/* 0118C 809C80EC AE0A02C0 */  sw      $t2, 0x02C0($s0)           ## 000002C0
/* 01190 809C80F0 AC4B0000 */  sw      $t3, 0x0000($v0)           ## 00000000
/* 01194 809C80F4 AC400004 */  sw      $zero, 0x0004($v0)         ## 00000004
/* 01198 809C80F8 8E0202C0 */  lw      $v0, 0x02C0($s0)           ## 000002C0
/* 0119C 809C80FC 3C010014 */  lui     $at, 0x0014                ## $at = 00140000
/* 011A0 809C8100 3C05809D */  lui     $a1, %hi(D_809C8330)       ## $a1 = 809D0000
/* 011A4 809C8104 244C0008 */  addiu   $t4, $v0, 0x0008           ## $t4 = 00000008
/* 011A8 809C8108 AE0C02C0 */  sw      $t4, 0x02C0($s0)           ## 000002C0
/* 011AC 809C810C AC4D0000 */  sw      $t5, 0x0000($v0)           ## 00000000
/* 011B0 809C8110 8FAE0068 */  lw      $t6, 0x0068($sp)           
/* 011B4 809C8114 24A58330 */  addiu   $a1, $a1, %lo(D_809C8330)  ## $a1 = 809C8330
/* 011B8 809C8118 2406041E */  addiu   $a2, $zero, 0x041E         ## $a2 = 0000041E
/* 011BC 809C811C C5C40208 */  lwc1    $f4, 0x0208($t6)           ## 00000208
/* 011C0 809C8120 3C0EDA38 */  lui     $t6, 0xDA38                ## $t6 = DA380000
/* 011C4 809C8124 35CE0003 */  ori     $t6, $t6, 0x0003           ## $t6 = DA380003
/* 011C8 809C8128 4600218D */  trunc.w.s $f6, $f4                   
/* 011CC 809C812C 44093000 */  mfc1    $t1, $f6                   
/* 011D0 809C8130 00000000 */  nop
/* 011D4 809C8134 00095600 */  sll     $t2, $t1, 24               
/* 011D8 809C8138 01415825 */  or      $t3, $t2, $at              ## $t3 = 00140008
/* 011DC 809C813C 356C0A00 */  ori     $t4, $t3, 0x0A00           ## $t4 = 00140A08
/* 011E0 809C8140 AC4C0004 */  sw      $t4, 0x0004($v0)           ## 00000004
/* 011E4 809C8144 8E0202C0 */  lw      $v0, 0x02C0($s0)           ## 000002C0
/* 011E8 809C8148 244D0008 */  addiu   $t5, $v0, 0x0008           ## $t5 = 00000008
/* 011EC 809C814C AE0D02C0 */  sw      $t5, 0x02C0($s0)           ## 000002C0
/* 011F0 809C8150 AC4E0000 */  sw      $t6, 0x0000($v0)           ## 00000000
/* 011F4 809C8154 8FAF006C */  lw      $t7, 0x006C($sp)           
/* 011F8 809C8158 8DE40000 */  lw      $a0, 0x0000($t7)           ## 00000000
/* 011FC 809C815C 0C0346A2 */  jal     Matrix_NewMtx              
/* 01200 809C8160 AFA20030 */  sw      $v0, 0x0030($sp)           
/* 01204 809C8164 8FA30030 */  lw      $v1, 0x0030($sp)           
/* 01208 809C8168 3C19DB06 */  lui     $t9, 0xDB06                ## $t9 = DB060000
/* 0120C 809C816C 37390020 */  ori     $t9, $t9, 0x0020           ## $t9 = DB060020
/* 01210 809C8170 AC620004 */  sw      $v0, 0x0004($v1)           ## 00000004
/* 01214 809C8174 8E0202C0 */  lw      $v0, 0x02C0($s0)           ## 000002C0
/* 01218 809C8178 8FA5006C */  lw      $a1, 0x006C($sp)           
/* 0121C 809C817C 24580008 */  addiu   $t8, $v0, 0x0008           ## $t8 = 00000008
/* 01220 809C8180 AE1802C0 */  sw      $t8, 0x02C0($s0)           ## 000002C0
/* 01224 809C8184 AC590000 */  sw      $t9, 0x0000($v0)           ## 00000000
/* 01228 809C8188 8CA40000 */  lw      $a0, 0x0000($a1)           ## 00000000
/* 0122C 809C818C 0C271FC9 */  jal     func_809C7F24              
/* 01230 809C8190 AFA2002C */  sw      $v0, 0x002C($sp)           
/* 01234 809C8194 8FA5006C */  lw      $a1, 0x006C($sp)           
/* 01238 809C8198 AFA20024 */  sw      $v0, 0x0024($sp)           
/* 0123C 809C819C 0C271FC9 */  jal     func_809C7F24              
/* 01240 809C81A0 8CA40000 */  lw      $a0, 0x0000($a1)           ## 00000000
/* 01244 809C81A4 8FAA0024 */  lw      $t2, 0x0024($sp)           
/* 01248 809C81A8 3C0E8016 */  lui     $t6, %hi(gSegments)
/* 0124C 809C81AC 3C0100FF */  lui     $at, 0x00FF                ## $at = 00FF0000
/* 01250 809C81B0 000A5900 */  sll     $t3, $t2,  4               
/* 01254 809C81B4 000B6702 */  srl     $t4, $t3, 28               
/* 01258 809C81B8 000C6880 */  sll     $t5, $t4,  2               
/* 0125C 809C81BC 01CD7021 */  addu    $t6, $t6, $t5              
/* 01260 809C81C0 8DCE6FA8 */  lw      $t6, %lo(gSegments)($t6)
/* 01264 809C81C4 3421FFFF */  ori     $at, $at, 0xFFFF           ## $at = 00FFFFFF
/* 01268 809C81C8 00414824 */  and     $t1, $v0, $at              
/* 0126C 809C81CC 8FB9002C */  lw      $t9, 0x002C($sp)           
/* 01270 809C81D0 3C018000 */  lui     $at, 0x8000                ## $at = 80000000
/* 01274 809C81D4 012E7821 */  addu    $t7, $t1, $t6              
/* 01278 809C81D8 01E1C021 */  addu    $t8, $t7, $at              
/* 0127C 809C81DC AF380004 */  sw      $t8, 0x0004($t9)           ## 00000004
/* 01280 809C81E0 8E0202C0 */  lw      $v0, 0x02C0($s0)           ## 000002C0
/* 01284 809C81E4 3C0B0600 */  lui     $t3, 0x0600                ## $t3 = 06000000
/* 01288 809C81E8 256B0408 */  addiu   $t3, $t3, 0x0408           ## $t3 = 06000408
/* 0128C 809C81EC 24480008 */  addiu   $t0, $v0, 0x0008           ## $t0 = 00000008
/* 01290 809C81F0 AE0802C0 */  sw      $t0, 0x02C0($s0)           ## 000002C0
/* 01294 809C81F4 3C0ADE00 */  lui     $t2, 0xDE00                ## $t2 = DE000000
/* 01298 809C81F8 AC4A0000 */  sw      $t2, 0x0000($v0)           ## 00000000
/* 0129C 809C81FC 10000003 */  beq     $zero, $zero, .L809C820C   
/* 012A0 809C8200 AC4B0004 */  sw      $t3, 0x0004($v0)           ## 00000004
.L809C8204:
/* 012A4 809C8204 0C018A29 */  jal     func_800628A4              
/* 012A8 809C8208 24450198 */  addiu   $a1, $v0, 0x0198           ## $a1 = 00000198
.L809C820C:
/* 012AC 809C820C 8FAC006C */  lw      $t4, 0x006C($sp)           
/* 012B0 809C8210 3C06809D */  lui     $a2, %hi(D_809C8340)       ## $a2 = 809D0000
/* 012B4 809C8214 24C68340 */  addiu   $a2, $a2, %lo(D_809C8340)  ## $a2 = 809C8340
/* 012B8 809C8218 27A4004C */  addiu   $a0, $sp, 0x004C           ## $a0 = FFFFFFE4
/* 012BC 809C821C 24070427 */  addiu   $a3, $zero, 0x0427         ## $a3 = 00000427
/* 012C0 809C8220 0C031AD5 */  jal     Graph_CloseDisps              
/* 012C4 809C8224 8D850000 */  lw      $a1, 0x0000($t4)           ## 00000000
/* 012C8 809C8228 8FBF001C */  lw      $ra, 0x001C($sp)           
/* 012CC 809C822C 8FB00018 */  lw      $s0, 0x0018($sp)           
/* 012D0 809C8230 27BD0068 */  addiu   $sp, $sp, 0x0068           ## $sp = 00000000
/* 012D4 809C8234 03E00008 */  jr      $ra                        
/* 012D8 809C8238 00000000 */  nop
/* 012DC 809C823C 00000000 */  nop
