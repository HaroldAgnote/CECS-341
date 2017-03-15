/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/Documents/git/CECS-341/Labs/Lab4_MIPSWriteBackStage/WriteBack_TestBench.v";
static const char *ng1 = "Test Case %d";
static const char *ng2 = "aluoutw = %h\treaddata = %h";
static const char *ng3 = "memtoregm = %b\tresultw = %h";
static const char *ng4 = "TEST FAILED: resmux has malfunctioned";
static const char *ng5 = "regwritem = %b\tregwritew = %b";
static const char *ng6 = "writeregm = %h\twriteregw = %h";
static const char *ng7 = "TEST FAILED: signal passing malfunctioned";
static const char *ng8 = "";
static int ng9[] = {0, 0};
static int ng10[] = {5, 0};
static int ng11[] = {1, 0};



static int sp_testcase(char *t1, char *t2)
{
    char t11[8];
    char t17[8];
    char t31[8];
    char t47[8];
    char t55[8];
    char t87[8];
    char t103[8];
    char t119[8];
    char t135[8];
    char t143[8];
    char t175[8];
    char t183[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    int t79;
    int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    char *t102;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    char *t115;
    char *t116;
    char *t117;
    char *t118;
    char *t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    char *t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    char *t142;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    char *t147;
    char *t148;
    char *t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    char *t157;
    char *t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    int t167;
    int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    char *t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    char *t182;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    char *t187;
    char *t188;
    char *t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    char *t197;
    char *t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    int t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    char *t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    char *t217;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(68, ng0);

LAB5:    xsi_set_current_line(69, ng0);
    t5 = (t1 + 3000);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng1, 2, t8, (char)119, t7, 32);
    xsi_set_current_line(70, ng0);
    t4 = (t1 + 2520);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 2680);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng2, 3, t10, (char)118, t6, 32, (char)118, t9, 32);
    xsi_set_current_line(71, ng0);
    t4 = (t1 + 2360);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 1800U);
    t8 = *((char **)t7);
    t7 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng3, 3, t7, (char)118, t6, 1, (char)118, t8, 32);
    xsi_set_current_line(73, ng0);
    t4 = (t1 + 2360);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t11, 0, 8);
    t7 = (t6 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (~(t12));
    t14 = *((unsigned int *)t6);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t7) == 0)
        goto LAB6;

LAB8:    t8 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t8) = 1;

LAB9:    memset(t17, 0, 8);
    t9 = (t11 + 4);
    t18 = *((unsigned int *)t9);
    t19 = (~(t18));
    t20 = *((unsigned int *)t11);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t9) != 0)
        goto LAB12;

LAB13:    t23 = (t17 + 4);
    t24 = *((unsigned int *)t17);
    t25 = *((unsigned int *)t23);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB14;

LAB15:    memcpy(t55, t17, 8);

LAB16:    memset(t87, 0, 8);
    t88 = (t55 + 4);
    t89 = *((unsigned int *)t88);
    t90 = (~(t89));
    t91 = *((unsigned int *)t55);
    t92 = (t91 & t90);
    t93 = (t92 & 1U);
    if (t93 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t88) != 0)
        goto LAB30;

LAB31:    t95 = (t87 + 4);
    t96 = *((unsigned int *)t87);
    t97 = (!(t96));
    t98 = *((unsigned int *)t95);
    t99 = (t97 || t98);
    if (t99 > 0)
        goto LAB32;

LAB33:    memcpy(t183, t87, 8);

LAB34:    t211 = (t183 + 4);
    t212 = *((unsigned int *)t211);
    t213 = (~(t212));
    t214 = *((unsigned int *)t183);
    t215 = (t214 & t213);
    t216 = (t215 != 0);
    if (t216 > 0)
        goto LAB60;

LAB61:
LAB62:    xsi_set_current_line(79, ng0);
    t4 = (t1 + 2200);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 1480U);
    t8 = *((char **)t7);
    t7 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng5, 3, t7, (char)118, t6, 1, (char)118, t8, 1);
    xsi_set_current_line(80, ng0);
    t4 = (t1 + 2840);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 1640U);
    t8 = *((char **)t7);
    t7 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng6, 3, t7, (char)118, t6, 5, (char)118, t8, 5);
    xsi_set_current_line(82, ng0);
    t4 = (t1 + 2200);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 1480U);
    t8 = *((char **)t7);
    memset(t11, 0, 8);
    t7 = (t6 + 4);
    t9 = (t8 + 4);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t9);
    t18 = (t15 ^ t16);
    t19 = (t14 | t18);
    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t9);
    t22 = (t20 | t21);
    t24 = (~(t22));
    t25 = (t19 & t24);
    if (t25 != 0)
        goto LAB65;

LAB64:    if (t22 != 0)
        goto LAB66;

LAB67:    memset(t17, 0, 8);
    t23 = (t11 + 4);
    t26 = *((unsigned int *)t23);
    t34 = (~(t26));
    t35 = *((unsigned int *)t11);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t23) != 0)
        goto LAB70;

LAB71:    t28 = (t17 + 4);
    t38 = *((unsigned int *)t17);
    t39 = (!(t38));
    t40 = *((unsigned int *)t28);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB72;

LAB73:    memcpy(t55, t17, 8);

LAB74:    t95 = (t55 + 4);
    t93 = *((unsigned int *)t95);
    t96 = (~(t93));
    t97 = *((unsigned int *)t55);
    t98 = (t97 & t96);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB86;

LAB87:
LAB88:    xsi_set_current_line(88, ng0);
    t4 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t4);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    *((unsigned int *)t11) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t17) = 1;
    goto LAB13;

LAB12:    t10 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB13;

LAB14:    t27 = (t1 + 1800U);
    t28 = *((char **)t27);
    t27 = (t1 + 2520);
    t29 = (t27 + 56U);
    t30 = *((char **)t29);
    memset(t31, 0, 8);
    t32 = (t28 + 4);
    t33 = (t30 + 4);
    t34 = *((unsigned int *)t28);
    t35 = *((unsigned int *)t30);
    t36 = (t34 ^ t35);
    t37 = *((unsigned int *)t32);
    t38 = *((unsigned int *)t33);
    t39 = (t37 ^ t38);
    t40 = (t36 | t39);
    t41 = *((unsigned int *)t32);
    t42 = *((unsigned int *)t33);
    t43 = (t41 | t42);
    t44 = (~(t43));
    t45 = (t40 & t44);
    if (t45 != 0)
        goto LAB18;

LAB17:    if (t43 != 0)
        goto LAB19;

LAB20:    memset(t47, 0, 8);
    t48 = (t31 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (~(t49));
    t51 = *((unsigned int *)t31);
    t52 = (t51 & t50);
    t53 = (t52 & 1U);
    if (t53 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t48) != 0)
        goto LAB23;

LAB24:    t56 = *((unsigned int *)t17);
    t57 = *((unsigned int *)t47);
    t58 = (t56 & t57);
    *((unsigned int *)t55) = t58;
    t59 = (t17 + 4);
    t60 = (t47 + 4);
    t61 = (t55 + 4);
    t62 = *((unsigned int *)t59);
    t63 = *((unsigned int *)t60);
    t64 = (t62 | t63);
    *((unsigned int *)t61) = t64;
    t65 = *((unsigned int *)t61);
    t66 = (t65 != 0);
    if (t66 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB18:    *((unsigned int *)t31) = 1;
    goto LAB20;

LAB19:    t46 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t47) = 1;
    goto LAB24;

LAB23:    t54 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB24;

LAB25:    t67 = *((unsigned int *)t55);
    t68 = *((unsigned int *)t61);
    *((unsigned int *)t55) = (t67 | t68);
    t69 = (t17 + 4);
    t70 = (t47 + 4);
    t71 = *((unsigned int *)t17);
    t72 = (~(t71));
    t73 = *((unsigned int *)t69);
    t74 = (~(t73));
    t75 = *((unsigned int *)t47);
    t76 = (~(t75));
    t77 = *((unsigned int *)t70);
    t78 = (~(t77));
    t79 = (t72 & t74);
    t80 = (t76 & t78);
    t81 = (~(t79));
    t82 = (~(t80));
    t83 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t83 & t81);
    t84 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t84 & t82);
    t85 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t85 & t81);
    t86 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t86 & t82);
    goto LAB27;

LAB28:    *((unsigned int *)t87) = 1;
    goto LAB31;

LAB30:    t94 = (t87 + 4);
    *((unsigned int *)t87) = 1;
    *((unsigned int *)t94) = 1;
    goto LAB31;

LAB32:    t100 = (t1 + 2360);
    t101 = (t100 + 56U);
    t102 = *((char **)t101);
    memset(t103, 0, 8);
    t104 = (t102 + 4);
    t105 = *((unsigned int *)t104);
    t106 = (~(t105));
    t107 = *((unsigned int *)t102);
    t108 = (t107 & t106);
    t109 = (t108 & 1U);
    if (t109 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t104) != 0)
        goto LAB37;

LAB38:    t111 = (t103 + 4);
    t112 = *((unsigned int *)t103);
    t113 = *((unsigned int *)t111);
    t114 = (t112 || t113);
    if (t114 > 0)
        goto LAB39;

LAB40:    memcpy(t143, t103, 8);

LAB41:    memset(t175, 0, 8);
    t176 = (t143 + 4);
    t177 = *((unsigned int *)t176);
    t178 = (~(t177));
    t179 = *((unsigned int *)t143);
    t180 = (t179 & t178);
    t181 = (t180 & 1U);
    if (t181 != 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t176) != 0)
        goto LAB55;

LAB56:    t184 = *((unsigned int *)t87);
    t185 = *((unsigned int *)t175);
    t186 = (t184 | t185);
    *((unsigned int *)t183) = t186;
    t187 = (t87 + 4);
    t188 = (t175 + 4);
    t189 = (t183 + 4);
    t190 = *((unsigned int *)t187);
    t191 = *((unsigned int *)t188);
    t192 = (t190 | t191);
    *((unsigned int *)t189) = t192;
    t193 = *((unsigned int *)t189);
    t194 = (t193 != 0);
    if (t194 == 1)
        goto LAB57;

LAB58:
LAB59:    goto LAB34;

LAB35:    *((unsigned int *)t103) = 1;
    goto LAB38;

LAB37:    t110 = (t103 + 4);
    *((unsigned int *)t103) = 1;
    *((unsigned int *)t110) = 1;
    goto LAB38;

LAB39:    t115 = (t1 + 1800U);
    t116 = *((char **)t115);
    t115 = (t1 + 2680);
    t117 = (t115 + 56U);
    t118 = *((char **)t117);
    memset(t119, 0, 8);
    t120 = (t116 + 4);
    t121 = (t118 + 4);
    t122 = *((unsigned int *)t116);
    t123 = *((unsigned int *)t118);
    t124 = (t122 ^ t123);
    t125 = *((unsigned int *)t120);
    t126 = *((unsigned int *)t121);
    t127 = (t125 ^ t126);
    t128 = (t124 | t127);
    t129 = *((unsigned int *)t120);
    t130 = *((unsigned int *)t121);
    t131 = (t129 | t130);
    t132 = (~(t131));
    t133 = (t128 & t132);
    if (t133 != 0)
        goto LAB43;

LAB42:    if (t131 != 0)
        goto LAB44;

LAB45:    memset(t135, 0, 8);
    t136 = (t119 + 4);
    t137 = *((unsigned int *)t136);
    t138 = (~(t137));
    t139 = *((unsigned int *)t119);
    t140 = (t139 & t138);
    t141 = (t140 & 1U);
    if (t141 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t136) != 0)
        goto LAB48;

LAB49:    t144 = *((unsigned int *)t103);
    t145 = *((unsigned int *)t135);
    t146 = (t144 & t145);
    *((unsigned int *)t143) = t146;
    t147 = (t103 + 4);
    t148 = (t135 + 4);
    t149 = (t143 + 4);
    t150 = *((unsigned int *)t147);
    t151 = *((unsigned int *)t148);
    t152 = (t150 | t151);
    *((unsigned int *)t149) = t152;
    t153 = *((unsigned int *)t149);
    t154 = (t153 != 0);
    if (t154 == 1)
        goto LAB50;

LAB51:
LAB52:    goto LAB41;

LAB43:    *((unsigned int *)t119) = 1;
    goto LAB45;

LAB44:    t134 = (t119 + 4);
    *((unsigned int *)t119) = 1;
    *((unsigned int *)t134) = 1;
    goto LAB45;

LAB46:    *((unsigned int *)t135) = 1;
    goto LAB49;

LAB48:    t142 = (t135 + 4);
    *((unsigned int *)t135) = 1;
    *((unsigned int *)t142) = 1;
    goto LAB49;

LAB50:    t155 = *((unsigned int *)t143);
    t156 = *((unsigned int *)t149);
    *((unsigned int *)t143) = (t155 | t156);
    t157 = (t103 + 4);
    t158 = (t135 + 4);
    t159 = *((unsigned int *)t103);
    t160 = (~(t159));
    t161 = *((unsigned int *)t157);
    t162 = (~(t161));
    t163 = *((unsigned int *)t135);
    t164 = (~(t163));
    t165 = *((unsigned int *)t158);
    t166 = (~(t165));
    t167 = (t160 & t162);
    t168 = (t164 & t166);
    t169 = (~(t167));
    t170 = (~(t168));
    t171 = *((unsigned int *)t149);
    *((unsigned int *)t149) = (t171 & t169);
    t172 = *((unsigned int *)t149);
    *((unsigned int *)t149) = (t172 & t170);
    t173 = *((unsigned int *)t143);
    *((unsigned int *)t143) = (t173 & t169);
    t174 = *((unsigned int *)t143);
    *((unsigned int *)t143) = (t174 & t170);
    goto LAB52;

LAB53:    *((unsigned int *)t175) = 1;
    goto LAB56;

LAB55:    t182 = (t175 + 4);
    *((unsigned int *)t175) = 1;
    *((unsigned int *)t182) = 1;
    goto LAB56;

LAB57:    t195 = *((unsigned int *)t183);
    t196 = *((unsigned int *)t189);
    *((unsigned int *)t183) = (t195 | t196);
    t197 = (t87 + 4);
    t198 = (t175 + 4);
    t199 = *((unsigned int *)t197);
    t200 = (~(t199));
    t201 = *((unsigned int *)t87);
    t202 = (t201 & t200);
    t203 = *((unsigned int *)t198);
    t204 = (~(t203));
    t205 = *((unsigned int *)t175);
    t206 = (t205 & t204);
    t207 = (~(t202));
    t208 = (~(t206));
    t209 = *((unsigned int *)t189);
    *((unsigned int *)t189) = (t209 & t207);
    t210 = *((unsigned int *)t189);
    *((unsigned int *)t189) = (t210 & t208);
    goto LAB59;

LAB60:    xsi_set_current_line(74, ng0);

LAB63:    xsi_set_current_line(75, ng0);
    t217 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng4, 1, t217);
    xsi_set_current_line(76, ng0);
    xsi_vlog_finish(1);
    goto LAB62;

LAB65:    *((unsigned int *)t11) = 1;
    goto LAB67;

LAB66:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB67;

LAB68:    *((unsigned int *)t17) = 1;
    goto LAB71;

LAB70:    t27 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB71;

LAB72:    t29 = (t1 + 2840);
    t30 = (t29 + 56U);
    t32 = *((char **)t30);
    t33 = (t1 + 1640U);
    t46 = *((char **)t33);
    memset(t31, 0, 8);
    t33 = (t32 + 4);
    t48 = (t46 + 4);
    t42 = *((unsigned int *)t32);
    t43 = *((unsigned int *)t46);
    t44 = (t42 ^ t43);
    t45 = *((unsigned int *)t33);
    t49 = *((unsigned int *)t48);
    t50 = (t45 ^ t49);
    t51 = (t44 | t50);
    t52 = *((unsigned int *)t33);
    t53 = *((unsigned int *)t48);
    t56 = (t52 | t53);
    t57 = (~(t56));
    t58 = (t51 & t57);
    if (t58 != 0)
        goto LAB76;

LAB75:    if (t56 != 0)
        goto LAB77;

LAB78:    memset(t47, 0, 8);
    t59 = (t31 + 4);
    t62 = *((unsigned int *)t59);
    t63 = (~(t62));
    t64 = *((unsigned int *)t31);
    t65 = (t64 & t63);
    t66 = (t65 & 1U);
    if (t66 != 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t59) != 0)
        goto LAB81;

LAB82:    t67 = *((unsigned int *)t17);
    t68 = *((unsigned int *)t47);
    t71 = (t67 | t68);
    *((unsigned int *)t55) = t71;
    t61 = (t17 + 4);
    t69 = (t47 + 4);
    t70 = (t55 + 4);
    t72 = *((unsigned int *)t61);
    t73 = *((unsigned int *)t69);
    t74 = (t72 | t73);
    *((unsigned int *)t70) = t74;
    t75 = *((unsigned int *)t70);
    t76 = (t75 != 0);
    if (t76 == 1)
        goto LAB83;

LAB84:
LAB85:    goto LAB74;

LAB76:    *((unsigned int *)t31) = 1;
    goto LAB78;

LAB77:    t54 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB78;

LAB79:    *((unsigned int *)t47) = 1;
    goto LAB82;

LAB81:    t60 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB82;

LAB83:    t77 = *((unsigned int *)t55);
    t78 = *((unsigned int *)t70);
    *((unsigned int *)t55) = (t77 | t78);
    t88 = (t17 + 4);
    t94 = (t47 + 4);
    t81 = *((unsigned int *)t88);
    t82 = (~(t81));
    t83 = *((unsigned int *)t17);
    t79 = (t83 & t82);
    t84 = *((unsigned int *)t94);
    t85 = (~(t84));
    t86 = *((unsigned int *)t47);
    t80 = (t86 & t85);
    t89 = (~(t79));
    t90 = (~(t80));
    t91 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t91 & t89);
    t92 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t92 & t90);
    goto LAB85;

LAB86:    xsi_set_current_line(83, ng0);

LAB89:    xsi_set_current_line(84, ng0);
    t100 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t100);
    xsi_set_current_line(85, ng0);
    xsi_vlog_finish(1);
    goto LAB88;

}

static void Initial_53_0(char *t0)
{
    char t6[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    t1 = (t0 + 3920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);

LAB4:    xsi_set_current_line(56, ng0);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB5:    t2 = (t0 + 3000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng10)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3728);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB16;

LAB1:    return;
LAB6:    xsi_set_current_line(57, ng0);

LAB8:    xsi_set_current_line(58, ng0);
    *((int *)t13) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t14 = (t13 + 4);
    *((int *)t14) = 0;
    t15 = (t0 + 2520);
    xsi_vlogvar_assign_value(t15, t13, 0, 0, 32);
    xsi_set_current_line(58, ng0);
    *((int *)t6) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t2 = (t6 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 2680);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 32);
    xsi_set_current_line(59, ng0);
    *((int *)t6) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t2 = (t6 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 1);
    t4 = (t0 + 2840);
    xsi_vlogvar_assign_value(t4, t6, 1, 0, 5);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2360);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3728);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(61, ng0);
    t3 = (t0 + 3728);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);

LAB12:    t7 = (t0 + 3824);
    t14 = *((char **)t7);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t0, t14);

LAB14:    if (t21 != 0)
        goto LAB15;

LAB10:    t14 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB11:    t22 = (t0 + 3824);
    t23 = *((char **)t22);
    t22 = (t0 + 848);
    t24 = (t0 + 3728);
    t25 = 0;
    xsi_delete_subprogram_invocation(t22, t23, t0, t24, t25);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng11)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 3000);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB5;

LAB13:;
LAB15:    t7 = (t0 + 3920U);
    *((char **)t7) = &&LAB12;
    goto LAB1;

LAB16:    xsi_set_current_line(64, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}


extern void work_m_00000000000871215150_2353564442_init()
{
	static char *pe[] = {(void *)Initial_53_0};
	static char *se[] = {(void *)sp_testcase};
	xsi_register_didat("work_m_00000000000871215150_2353564442", "isim/WriteBack_TestBench_isim_beh.exe.sim/work/m_00000000000871215150_2353564442.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
