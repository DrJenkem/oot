glabel func_80AE7668
/* 003B8 80AE7668 84830032 */  lh      $v1, 0x0032($a0)           ## 00000032
/* 003BC 80AE766C 8CA21C44 */  lw      $v0, 0x1C44($a1)           ## 00001C44
/* 003C0 80AE7670 34018000 */  ori     $at, $zero, 0x8000         ## $at = 00008000
/* 003C4 80AE7674 24060001 */  addiu   $a2, $zero, 0x0001         ## $a2 = 00000001
/* 003C8 80AE7678 00611821 */  addu    $v1, $v1, $at              
/* 003CC 80AE767C 00031C00 */  sll     $v1, $v1, 16               
/* 003D0 80AE7680 AC860198 */  sw      $a2, 0x0198($a0)           ## 00000198
/* 003D4 80AE7684 AC860194 */  sw      $a2, 0x0194($a0)           ## 00000194
/* 003D8 80AE7688 00031C03 */  sra     $v1, $v1, 16               
/* 003DC 80AE768C A44300B6 */  sh      $v1, 0x00B6($v0)           ## 000000B6
/* 003E0 80AE7690 03E00008 */  jr      $ra                        
/* 003E4 80AE7694 A4430032 */  sh      $v1, 0x0032($v0)           ## 00000032
