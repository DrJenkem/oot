glabel func_809995D4
/* 00E54 809995D4 27BDFFD0 */  addiu   $sp, $sp, 0xFFD0           ## $sp = FFFFFFD0
/* 00E58 809995D8 AFBF002C */  sw      $ra, 0x002C($sp)           
/* 00E5C 809995DC AFB00028 */  sw      $s0, 0x0028($sp)           
/* 00E60 809995E0 AFA50034 */  sw      $a1, 0x0034($sp)           
/* 00E64 809995E4 94820192 */  lhu     $v0, 0x0192($a0)           ## 00000192
/* 00E68 809995E8 00808025 */  or      $s0, $a0, $zero            ## $s0 = 00000000
/* 00E6C 809995EC 3C0142C8 */  lui     $at, 0x42C8                ## $at = 42C80000
/* 00E70 809995F0 14400045 */  bne     $v0, $zero, .L80999708     
/* 00E74 809995F4 241900C8 */  addiu   $t9, $zero, 0x00C8         ## $t9 = 000000C8
/* 00E78 809995F8 C4840090 */  lwc1    $f4, 0x0090($a0)           ## 00000090
/* 00E7C 809995FC 44813000 */  mtc1    $at, $f6                   ## $f6 = 100.00
/* 00E80 80999600 3C01C2C4 */  lui     $at, 0xC2C4                ## $at = C2C40000
/* 00E84 80999604 240800FF */  addiu   $t0, $zero, 0x00FF         ## $t0 = 000000FF
/* 00E88 80999608 4606203C */  c.lt.s  $f4, $f6                   
/* 00E8C 8099960C 240900FF */  addiu   $t1, $zero, 0x00FF         ## $t1 = 000000FF
/* 00E90 80999610 240A00FF */  addiu   $t2, $zero, 0x00FF         ## $t2 = 000000FF
/* 00E94 80999614 4502000A */  bc1fl   .L80999640                 
/* 00E98 80999618 C6120024 */  lwc1    $f18, 0x0024($s0)          ## 00000024
/* 00E9C 8099961C 44814000 */  mtc1    $at, $f8                   ## $f8 = -98.00
/* 00EA0 80999620 3C01809A */  lui     $at, %hi(D_8099C78C)       ## $at = 809A0000
/* 00EA4 80999624 E4880024 */  swc1    $f8, 0x0024($a0)           ## 00000024
/* 00EA8 80999628 C42AC78C */  lwc1    $f10, %lo(D_8099C78C)($at) 
/* 00EAC 8099962C 3C01809A */  lui     $at, %hi(D_8099C790)       ## $at = 809A0000
/* 00EB0 80999630 E48A0028 */  swc1    $f10, 0x0028($a0)          ## 00000028
/* 00EB4 80999634 C430C790 */  lwc1    $f16, %lo(D_8099C790)($at) 
/* 00EB8 80999638 E490002C */  swc1    $f16, 0x002C($a0)          ## 0000002C
/* 00EBC 8099963C C6120024 */  lwc1    $f18, 0x0024($s0)          ## 00000024
.L80999640:
/* 00EC0 80999640 C6060028 */  lwc1    $f6, 0x0028($s0)           ## 00000028
/* 00EC4 80999644 C60A002C */  lwc1    $f10, 0x002C($s0)          ## 0000002C
/* 00EC8 80999648 4600910D */  trunc.w.s $f4, $f18                  
/* 00ECC 8099964C AFAA001C */  sw      $t2, 0x001C($sp)           
/* 00ED0 80999650 AFA90018 */  sw      $t1, 0x0018($sp)           
/* 00ED4 80999654 4600320D */  trunc.w.s $f8, $f6                   
/* 00ED8 80999658 44052000 */  mfc1    $a1, $f4                   
/* 00EDC 8099965C AFA80014 */  sw      $t0, 0x0014($sp)           
/* 00EE0 80999660 4600540D */  trunc.w.s $f16, $f10                 
/* 00EE4 80999664 44064000 */  mfc1    $a2, $f8                   
/* 00EE8 80999668 00052C00 */  sll     $a1, $a1, 16               
/* 00EEC 8099966C 00052C03 */  sra     $a1, $a1, 16               
/* 00EF0 80999670 44078000 */  mfc1    $a3, $f16                  
/* 00EF4 80999674 00063400 */  sll     $a2, $a2, 16               
/* 00EF8 80999678 00063403 */  sra     $a2, $a2, 16               
/* 00EFC 8099967C 00073C00 */  sll     $a3, $a3, 16               
/* 00F00 80999680 00073C03 */  sra     $a3, $a3, 16               
/* 00F04 80999684 AFB90010 */  sw      $t9, 0x0010($sp)           
/* 00F08 80999688 0C01E763 */  jal     Lights_InitType0PositionalLight
              
/* 00F0C 8099968C 260401C8 */  addiu   $a0, $s0, 0x01C8           ## $a0 = 000001C8
/* 00F10 80999690 C6120024 */  lwc1    $f18, 0x0024($s0)          ## 00000024
/* 00F14 80999694 C6060028 */  lwc1    $f6, 0x0028($s0)           ## 00000028
/* 00F18 80999698 C60A002C */  lwc1    $f10, 0x002C($s0)          ## 0000002C
/* 00F1C 8099969C 4600910D */  trunc.w.s $f4, $f18                  
/* 00F20 809996A0 240E00C8 */  addiu   $t6, $zero, 0x00C8         ## $t6 = 000000C8
/* 00F24 809996A4 240F00FF */  addiu   $t7, $zero, 0x00FF         ## $t7 = 000000FF
/* 00F28 809996A8 4600320D */  trunc.w.s $f8, $f6                   
/* 00F2C 809996AC 44052000 */  mfc1    $a1, $f4                   
/* 00F30 809996B0 241800FF */  addiu   $t8, $zero, 0x00FF         ## $t8 = 000000FF
/* 00F34 809996B4 4600540D */  trunc.w.s $f16, $f10                 
/* 00F38 809996B8 44064000 */  mfc1    $a2, $f8                   
/* 00F3C 809996BC 241900FF */  addiu   $t9, $zero, 0x00FF         ## $t9 = 000000FF
/* 00F40 809996C0 00052C00 */  sll     $a1, $a1, 16               
/* 00F44 809996C4 44078000 */  mfc1    $a3, $f16                  
/* 00F48 809996C8 00063400 */  sll     $a2, $a2, 16               
/* 00F4C 809996CC 00063403 */  sra     $a2, $a2, 16               
/* 00F50 809996D0 00073C00 */  sll     $a3, $a3, 16               
/* 00F54 809996D4 00073C03 */  sra     $a3, $a3, 16               
/* 00F58 809996D8 00052C03 */  sra     $a1, $a1, 16               
/* 00F5C 809996DC AFB9001C */  sw      $t9, 0x001C($sp)           
/* 00F60 809996E0 AFB80018 */  sw      $t8, 0x0018($sp)           
/* 00F64 809996E4 AFAF0014 */  sw      $t7, 0x0014($sp)           
/* 00F68 809996E8 AFAE0010 */  sw      $t6, 0x0010($sp)           
/* 00F6C 809996EC 0C01E763 */  jal     Lights_InitType0PositionalLight
              
/* 00F70 809996F0 260401DC */  addiu   $a0, $s0, 0x01DC           ## $a0 = 000001DC
/* 00F74 809996F4 3C05809A */  lui     $a1, %hi(func_80999724)    ## $a1 = 809A0000
/* 00F78 809996F8 24A59724 */  addiu   $a1, $a1, %lo(func_80999724) ## $a1 = 80999724
/* 00F7C 809996FC 0C2661E0 */  jal     func_80998780              
/* 00F80 80999700 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 00F84 80999704 96020192 */  lhu     $v0, 0x0192($s0)           ## 00000192
.L80999708:
/* 00F88 80999708 2448FFFF */  addiu   $t0, $v0, 0xFFFF           ## $t0 = FFFFFFFF
/* 00F8C 8099970C A6080192 */  sh      $t0, 0x0192($s0)           ## 00000192
/* 00F90 80999710 8FBF002C */  lw      $ra, 0x002C($sp)           
/* 00F94 80999714 8FB00028 */  lw      $s0, 0x0028($sp)           
/* 00F98 80999718 27BD0030 */  addiu   $sp, $sp, 0x0030           ## $sp = 00000000
/* 00F9C 8099971C 03E00008 */  jr      $ra                        
/* 00FA0 80999720 00000000 */  nop
