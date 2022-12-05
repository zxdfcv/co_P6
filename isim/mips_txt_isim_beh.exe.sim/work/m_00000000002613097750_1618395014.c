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
static const char *ng0 = "C:/Users/10791/P6_version1/P6_code/muldiv.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static int ng5[] = {0, 0};
static unsigned int ng6[] = {0U, 0U, 0U, 0U};
static int ng7[] = {31, 0};
static int ng8[] = {63, 0};
static int ng9[] = {32, 0};
static unsigned int ng10[] = {4U, 0U};
static unsigned int ng11[] = {5U, 0U};
static unsigned int ng12[] = {6U, 0U};
static unsigned int ng13[] = {9U, 0U};



static void Initial_13_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(13, ng0);

LAB2:    xsi_set_current_line(14, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2680);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(15, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2840);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_23_1(char *t0)
{
    char t4[8];
    char t15[8];
    char t27[8];
    char t38[8];
    char t46[8];
    char t87[16];
    char t90[16];
    char t92[16];
    char t93[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    int t70;
    int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    int t86;
    char *t88;
    char *t89;
    char *t91;
    int t94;
    int t95;
    int t96;
    int t97;
    int t98;
    int t99;

LAB0:    t1 = (t0 + 4648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 5464);
    *((int *)t2) = 1;
    t3 = (t0 + 4680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(23, ng0);

LAB5:    xsi_set_current_line(24, ng0);
    t5 = (t0 + 2840);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t8) == 0)
        goto LAB6;

LAB8:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;

LAB9:    memset(t15, 0, 8);
    t16 = (t4 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (~(t17));
    t19 = *((unsigned int *)t4);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t16) != 0)
        goto LAB12;

LAB13:    t23 = (t15 + 4);
    t24 = *((unsigned int *)t15);
    t25 = *((unsigned int *)t23);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB14;

LAB15:    memcpy(t46, t15, 8);

LAB16:    t78 = (t46 + 4);
    t79 = *((unsigned int *)t78);
    t80 = (~(t79));
    t81 = *((unsigned int *)t46);
    t82 = (t81 & t80);
    t83 = (t82 != 0);
    if (t83 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(65, ng0);

LAB131:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3320);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 64);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3000);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3000);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 3160);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3160);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);

LAB30:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t15) = 1;
    goto LAB13;

LAB12:    t22 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB13;

LAB14:    t28 = (t0 + 2680);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memset(t27, 0, 8);
    t31 = (t30 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t30);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t31) == 0)
        goto LAB17;

LAB19:    t37 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t37) = 1;

LAB20:    memset(t38, 0, 8);
    t39 = (t27 + 4);
    t40 = *((unsigned int *)t39);
    t41 = (~(t40));
    t42 = *((unsigned int *)t27);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t39) != 0)
        goto LAB23;

LAB24:    t47 = *((unsigned int *)t15);
    t48 = *((unsigned int *)t38);
    t49 = (t47 & t48);
    *((unsigned int *)t46) = t49;
    t50 = (t15 + 4);
    t51 = (t38 + 4);
    t52 = (t46 + 4);
    t53 = *((unsigned int *)t50);
    t54 = *((unsigned int *)t51);
    t55 = (t53 | t54);
    *((unsigned int *)t52) = t55;
    t56 = *((unsigned int *)t52);
    t57 = (t56 != 0);
    if (t57 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB17:    *((unsigned int *)t27) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t38) = 1;
    goto LAB24;

LAB23:    t45 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB24;

LAB25:    t58 = *((unsigned int *)t46);
    t59 = *((unsigned int *)t52);
    *((unsigned int *)t46) = (t58 | t59);
    t60 = (t15 + 4);
    t61 = (t38 + 4);
    t62 = *((unsigned int *)t15);
    t63 = (~(t62));
    t64 = *((unsigned int *)t60);
    t65 = (~(t64));
    t66 = *((unsigned int *)t38);
    t67 = (~(t66));
    t68 = *((unsigned int *)t61);
    t69 = (~(t68));
    t70 = (t63 & t65);
    t71 = (t67 & t69);
    t72 = (~(t70));
    t73 = (~(t71));
    t74 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t74 & t72);
    t75 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t75 & t73);
    t76 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t76 & t72);
    t77 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t77 & t73);
    goto LAB27;

LAB28:    xsi_set_current_line(24, ng0);

LAB31:    xsi_set_current_line(25, ng0);
    t84 = (t0 + 1640U);
    t85 = *((char **)t84);

LAB32:    t84 = ((char*)((ng2)));
    t86 = xsi_vlog_unsigned_case_compare(t85, 4, t84, 4);
    if (t86 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng3)));
    t70 = xsi_vlog_unsigned_case_compare(t85, 4, t2, 4);
    if (t70 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng4)));
    t70 = xsi_vlog_unsigned_case_compare(t85, 4, t2, 4);
    if (t70 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng10)));
    t70 = xsi_vlog_unsigned_case_compare(t85, 4, t2, 4);
    if (t70 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng11)));
    t70 = xsi_vlog_unsigned_case_compare(t85, 4, t2, 4);
    if (t70 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng12)));
    t70 = xsi_vlog_unsigned_case_compare(t85, 4, t2, 4);
    if (t70 == 1)
        goto LAB43;

LAB44:
LAB46:
LAB45:    xsi_set_current_line(59, ng0);

LAB130:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3320);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 64);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 3000);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3000);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3160);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3160);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);

LAB47:    goto LAB30;

LAB33:    xsi_set_current_line(26, ng0);

LAB48:    xsi_set_current_line(27, ng0);
    t88 = (t0 + 1320U);
    t89 = *((char **)t88);
    xsi_vlogtype_sign_extend(t87, 64, t89, 32);
    t88 = (t0 + 1480U);
    t91 = *((char **)t88);
    xsi_vlogtype_sign_extend(t90, 64, t91, 32);
    xsi_vlog_signed_multiply(t92, 64, t87, 64, t90, 64);
    t88 = (t0 + 3320);
    xsi_vlogvar_assign_value(t88, t92, 0, 0, 64);
    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t13 & 4294967295U);
    t17 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t17 & 4294967295U);
    t8 = (t0 + 3000);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 32);
    xsi_set_current_line(29, ng0);
    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 8);
    t8 = (t5 + 12);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t13 & 4294967295U);
    t17 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t17 & 4294967295U);
    t14 = (t0 + 3160);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 32);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB47;

LAB35:    xsi_set_current_line(32, ng0);

LAB49:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 1320U);
    t5 = *((char **)t3);
    t3 = (t0 + 1480U);
    t6 = *((char **)t3);
    xsi_vlog_unsigned_multiply(t87, 64, t5, 32, t6, 32);
    t3 = (t0 + 3320);
    xsi_vlogvar_assign_value(t3, t87, 0, 0, 64);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t13 & 4294967295U);
    t17 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t17 & 4294967295U);
    t8 = (t0 + 3000);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 32);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 8);
    t8 = (t5 + 12);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t13 & 4294967295U);
    t17 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t17 & 4294967295U);
    t14 = (t0 + 3160);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 32);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB47;

LAB37:    xsi_set_current_line(38, ng0);

LAB50:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 1480U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng5)));
    memset(t15, 0, 8);
    t6 = (t5 + 4);
    t7 = (t3 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t3);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t7);
    t17 = (t12 ^ t13);
    t18 = (t11 | t17);
    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t24 = (~(t21));
    t25 = (t18 & t24);
    if (t25 != 0)
        goto LAB54;

LAB51:    if (t21 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t15) = 1;

LAB54:    memset(t4, 0, 8);
    t14 = (t15 + 4);
    t26 = *((unsigned int *)t14);
    t32 = (~(t26));
    t33 = *((unsigned int *)t15);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t14) != 0)
        goto LAB57;

LAB58:    t22 = (t4 + 4);
    t36 = *((unsigned int *)t4);
    t40 = *((unsigned int *)t22);
    t41 = (t36 || t40);
    if (t41 > 0)
        goto LAB59;

LAB60:    t42 = *((unsigned int *)t4);
    t43 = (~(t42));
    t44 = *((unsigned int *)t22);
    t47 = (t43 || t44);
    if (t47 > 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t22) > 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t4) > 0)
        goto LAB65;

LAB66:    memcpy(t87, t93, 16);

LAB67:    t28 = (t0 + 3320);
    t31 = (t0 + 3320);
    t37 = (t31 + 72U);
    t39 = *((char **)t37);
    t45 = ((char*)((ng7)));
    t50 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t27, t38, t46, ((int*)(t39)), 2, t45, 32, 1, t50, 32, 1);
    t51 = (t27 + 4);
    t48 = *((unsigned int *)t51);
    t71 = (!(t48));
    t52 = (t38 + 4);
    t49 = *((unsigned int *)t52);
    t86 = (!(t49));
    t94 = (t71 && t86);
    t60 = (t46 + 4);
    t53 = *((unsigned int *)t60);
    t95 = (!(t53));
    t96 = (t94 && t95);
    if (t96 == 1)
        goto LAB68;

LAB69:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t15, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t6);
    t17 = (t12 ^ t13);
    t18 = (t11 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t6);
    t21 = (t19 | t20);
    t24 = (~(t21));
    t25 = (t18 & t24);
    if (t25 != 0)
        goto LAB73;

LAB70:    if (t21 != 0)
        goto LAB72;

LAB71:    *((unsigned int *)t15) = 1;

LAB73:    memset(t4, 0, 8);
    t8 = (t15 + 4);
    t26 = *((unsigned int *)t8);
    t32 = (~(t26));
    t33 = *((unsigned int *)t15);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t8) != 0)
        goto LAB76;

LAB77:    t16 = (t4 + 4);
    t36 = *((unsigned int *)t4);
    t40 = *((unsigned int *)t16);
    t41 = (t36 || t40);
    if (t41 > 0)
        goto LAB78;

LAB79:    t42 = *((unsigned int *)t4);
    t43 = (~(t42));
    t44 = *((unsigned int *)t16);
    t47 = (t43 || t44);
    if (t47 > 0)
        goto LAB80;

LAB81:    if (*((unsigned int *)t16) > 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t4) > 0)
        goto LAB84;

LAB85:    memcpy(t87, t93, 16);

LAB86:    t23 = (t0 + 3320);
    t30 = (t0 + 3320);
    t31 = (t30 + 72U);
    t37 = *((char **)t31);
    t39 = ((char*)((ng8)));
    t45 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t27, t38, t46, ((int*)(t37)), 2, t39, 32, 1, t45, 32, 1);
    t50 = (t27 + 4);
    t48 = *((unsigned int *)t50);
    t70 = (!(t48));
    t51 = (t38 + 4);
    t49 = *((unsigned int *)t51);
    t71 = (!(t49));
    t86 = (t70 && t71);
    t52 = (t46 + 4);
    t53 = *((unsigned int *)t52);
    t94 = (!(t53));
    t95 = (t86 && t94);
    if (t95 == 1)
        goto LAB87;

LAB88:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t13 & 4294967295U);
    t17 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t17 & 4294967295U);
    t8 = (t0 + 3000);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 32);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 8);
    t8 = (t5 + 12);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t13 & 4294967295U);
    t17 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t17 & 4294967295U);
    t14 = (t0 + 3160);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 32);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB47;

LAB39:    xsi_set_current_line(45, ng0);

LAB89:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 1480U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng5)));
    memset(t15, 0, 8);
    t6 = (t5 + 4);
    t7 = (t3 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t3);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t7);
    t17 = (t12 ^ t13);
    t18 = (t11 | t17);
    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t24 = (~(t21));
    t25 = (t18 & t24);
    if (t25 != 0)
        goto LAB93;

LAB90:    if (t21 != 0)
        goto LAB92;

LAB91:    *((unsigned int *)t15) = 1;

LAB93:    memset(t4, 0, 8);
    t14 = (t15 + 4);
    t26 = *((unsigned int *)t14);
    t32 = (~(t26));
    t33 = *((unsigned int *)t15);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB94;

LAB95:    if (*((unsigned int *)t14) != 0)
        goto LAB96;

LAB97:    t22 = (t4 + 4);
    t36 = *((unsigned int *)t4);
    t40 = *((unsigned int *)t22);
    t41 = (t36 || t40);
    if (t41 > 0)
        goto LAB98;

LAB99:    t42 = *((unsigned int *)t4);
    t43 = (~(t42));
    t44 = *((unsigned int *)t22);
    t47 = (t43 || t44);
    if (t47 > 0)
        goto LAB100;

LAB101:    if (*((unsigned int *)t22) > 0)
        goto LAB102;

LAB103:    if (*((unsigned int *)t4) > 0)
        goto LAB104;

LAB105:    memcpy(t87, t90, 16);

LAB106:    t28 = (t0 + 3320);
    t31 = (t0 + 3320);
    t37 = (t31 + 72U);
    t39 = *((char **)t37);
    t45 = ((char*)((ng7)));
    t50 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t27, t38, t46, ((int*)(t39)), 2, t45, 32, 1, t50, 32, 1);
    t51 = (t27 + 4);
    t48 = *((unsigned int *)t51);
    t71 = (!(t48));
    t52 = (t38 + 4);
    t49 = *((unsigned int *)t52);
    t86 = (!(t49));
    t94 = (t71 && t86);
    t60 = (t46 + 4);
    t53 = *((unsigned int *)t60);
    t95 = (!(t53));
    t96 = (t94 && t95);
    if (t96 == 1)
        goto LAB107;

LAB108:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t15, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t6);
    t17 = (t12 ^ t13);
    t18 = (t11 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t6);
    t21 = (t19 | t20);
    t24 = (~(t21));
    t25 = (t18 & t24);
    if (t25 != 0)
        goto LAB112;

LAB109:    if (t21 != 0)
        goto LAB111;

LAB110:    *((unsigned int *)t15) = 1;

LAB112:    memset(t4, 0, 8);
    t8 = (t15 + 4);
    t26 = *((unsigned int *)t8);
    t32 = (~(t26));
    t33 = *((unsigned int *)t15);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB113;

LAB114:    if (*((unsigned int *)t8) != 0)
        goto LAB115;

LAB116:    t16 = (t4 + 4);
    t36 = *((unsigned int *)t4);
    t40 = *((unsigned int *)t16);
    t41 = (t36 || t40);
    if (t41 > 0)
        goto LAB117;

LAB118:    t42 = *((unsigned int *)t4);
    t43 = (~(t42));
    t44 = *((unsigned int *)t16);
    t47 = (t43 || t44);
    if (t47 > 0)
        goto LAB119;

LAB120:    if (*((unsigned int *)t16) > 0)
        goto LAB121;

LAB122:    if (*((unsigned int *)t4) > 0)
        goto LAB123;

LAB124:    memcpy(t87, t90, 16);

LAB125:    t23 = (t0 + 3320);
    t30 = (t0 + 3320);
    t31 = (t30 + 72U);
    t37 = *((char **)t31);
    t39 = ((char*)((ng8)));
    t45 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t27, t38, t46, ((int*)(t37)), 2, t39, 32, 1, t45, 32, 1);
    t50 = (t27 + 4);
    t48 = *((unsigned int *)t50);
    t70 = (!(t48));
    t51 = (t38 + 4);
    t49 = *((unsigned int *)t51);
    t71 = (!(t49));
    t86 = (t70 && t71);
    t52 = (t46 + 4);
    t53 = *((unsigned int *)t52);
    t94 = (!(t53));
    t95 = (t86 && t94);
    if (t95 == 1)
        goto LAB126;

LAB127:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t13 & 4294967295U);
    t17 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t17 & 4294967295U);
    t8 = (t0 + 3000);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 32);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 8);
    t8 = (t5 + 12);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t13 & 4294967295U);
    t17 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t17 & 4294967295U);
    t14 = (t0 + 3160);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 32);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB47;

LAB41:    xsi_set_current_line(52, ng0);

LAB128:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 1320U);
    t5 = *((char **)t3);
    t3 = (t0 + 3160);
    xsi_vlogvar_assign_value(t3, t5, 0, 0, 32);
    goto LAB47;

LAB43:    xsi_set_current_line(56, ng0);

LAB129:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 1320U);
    t5 = *((char **)t3);
    t3 = (t0 + 3000);
    xsi_vlogvar_assign_value(t3, t5, 0, 0, 32);
    goto LAB47;

LAB53:    t8 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB54;

LAB55:    *((unsigned int *)t4) = 1;
    goto LAB58;

LAB57:    t16 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB58;

LAB59:    t23 = ((char*)((ng6)));
    goto LAB60;

LAB61:    t28 = (t0 + 1320U);
    t29 = *((char **)t28);
    xsi_vlogtype_zero_extend(t90, 64, t29, 32);
    t28 = (t0 + 1480U);
    t30 = *((char **)t28);
    xsi_vlogtype_zero_extend(t92, 64, t30, 32);
    xsi_vlog_unsigned_divide(t93, 64, t90, 64, t92, 64);
    goto LAB62;

LAB63:    xsi_vlog_unsigned_bit_combine(t87, 64, t23, 64, t93, 64);
    goto LAB67;

LAB65:    memcpy(t87, t23, 16);
    goto LAB67;

LAB68:    t54 = *((unsigned int *)t46);
    t97 = (t54 + 0);
    t55 = *((unsigned int *)t27);
    t56 = *((unsigned int *)t38);
    t98 = (t55 - t56);
    t99 = (t98 + 1);
    xsi_vlogvar_assign_value(t28, t87, t97, *((unsigned int *)t38), t99);
    goto LAB69;

LAB72:    t7 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB73;

LAB74:    *((unsigned int *)t4) = 1;
    goto LAB77;

LAB76:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB77;

LAB78:    t22 = ((char*)((ng6)));
    goto LAB79;

LAB80:    t23 = (t0 + 1320U);
    t28 = *((char **)t23);
    xsi_vlogtype_zero_extend(t90, 64, t28, 32);
    t23 = (t0 + 1480U);
    t29 = *((char **)t23);
    xsi_vlogtype_zero_extend(t92, 64, t29, 32);
    xsi_vlog_unsigned_mod(t93, 64, t90, 64, t92, 64);
    goto LAB81;

LAB82:    xsi_vlog_unsigned_bit_combine(t87, 64, t22, 64, t93, 64);
    goto LAB86;

LAB84:    memcpy(t87, t22, 16);
    goto LAB86;

LAB87:    t54 = *((unsigned int *)t46);
    t96 = (t54 + 0);
    t55 = *((unsigned int *)t27);
    t56 = *((unsigned int *)t38);
    t97 = (t55 - t56);
    t98 = (t97 + 1);
    xsi_vlogvar_assign_value(t23, t87, t96, *((unsigned int *)t38), t98);
    goto LAB88;

LAB92:    t8 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB93;

LAB94:    *((unsigned int *)t4) = 1;
    goto LAB97;

LAB96:    t16 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB97;

LAB98:    t23 = ((char*)((ng6)));
    goto LAB99;

LAB100:    t28 = (t0 + 1320U);
    t29 = *((char **)t28);
    t28 = (t0 + 1480U);
    t30 = *((char **)t28);
    xsi_vlog_unsigned_divide(t90, 64, t29, 32, t30, 32);
    goto LAB101;

LAB102:    xsi_vlog_unsigned_bit_combine(t87, 64, t23, 64, t90, 64);
    goto LAB106;

LAB104:    memcpy(t87, t23, 16);
    goto LAB106;

LAB107:    t54 = *((unsigned int *)t46);
    t97 = (t54 + 0);
    t55 = *((unsigned int *)t27);
    t56 = *((unsigned int *)t38);
    t98 = (t55 - t56);
    t99 = (t98 + 1);
    xsi_vlogvar_assign_value(t28, t87, t97, *((unsigned int *)t38), t99);
    goto LAB108;

LAB111:    t7 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB112;

LAB113:    *((unsigned int *)t4) = 1;
    goto LAB116;

LAB115:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB116;

LAB117:    t22 = ((char*)((ng6)));
    goto LAB118;

LAB119:    t23 = (t0 + 1320U);
    t28 = *((char **)t23);
    t23 = (t0 + 1480U);
    t29 = *((char **)t23);
    xsi_vlog_unsigned_mod(t90, 64, t28, 32, t29, 32);
    goto LAB120;

LAB121:    xsi_vlog_unsigned_bit_combine(t87, 64, t22, 64, t90, 64);
    goto LAB125;

LAB123:    memcpy(t87, t22, 16);
    goto LAB125;

LAB126:    t54 = *((unsigned int *)t46);
    t96 = (t54 + 0);
    t55 = *((unsigned int *)t27);
    t56 = *((unsigned int *)t38);
    t97 = (t55 - t56);
    t98 = (t97 + 1);
    xsi_vlogvar_assign_value(t23, t87, t96, *((unsigned int *)t38), t98);
    goto LAB127;

}

static void Always_72_2(char *t0)
{
    char t6[8];
    char t30[8];
    char t48[8];
    char t64[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    unsigned int t33;
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
    char *t45;
    char *t46;
    char *t47;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;

LAB0:    t1 = (t0 + 4896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 5480);
    *((int *)t2) = 1;
    t3 = (t0 + 4928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(72, ng0);

LAB5:    xsi_set_current_line(73, ng0);
    t4 = (t0 + 2120U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(76, ng0);

LAB14:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB18;

LAB15:    if (t18 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t6) = 1;

LAB18:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(85, ng0);

LAB54:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3480);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t48, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB56;

LAB55:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB56;

LAB59:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB57;

LAB58:    memset(t30, 0, 8);
    t22 = (t48 + 4);
    t9 = *((unsigned int *)t22);
    t10 = (~(t9));
    t11 = *((unsigned int *)t48);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t22) != 0)
        goto LAB62;

LAB63:    t29 = (t30 + 4);
    t14 = *((unsigned int *)t30);
    t15 = *((unsigned int *)t29);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB64;

LAB65:    t17 = *((unsigned int *)t30);
    t18 = (~(t17));
    t19 = *((unsigned int *)t29);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t29) > 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t30) > 0)
        goto LAB70;

LAB71:    memcpy(t6, t47, 8);

LAB72:    t49 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t49, t6, 0, 0, 4, 0LL);

LAB21:
LAB12:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 3480);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB74;

LAB73:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB74;

LAB77:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB75;

LAB76:    memset(t30, 0, 8);
    t22 = (t6 + 4);
    t9 = *((unsigned int *)t22);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t22) != 0)
        goto LAB80;

LAB81:    t29 = (t30 + 4);
    t14 = *((unsigned int *)t30);
    t15 = (!(t14));
    t16 = *((unsigned int *)t29);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB82;

LAB83:    memcpy(t64, t30, 8);

LAB84:    t70 = (t64 + 4);
    t56 = *((unsigned int *)t70);
    t57 = (~(t56));
    t58 = *((unsigned int *)t64);
    t59 = (t58 & t57);
    t60 = (t59 != 0);
    if (t60 > 0)
        goto LAB92;

LAB93:    xsi_set_current_line(91, ng0);

LAB96:    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB94:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(73, ng0);

LAB13:    xsi_set_current_line(74, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 3480);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 4);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB12;

LAB17:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(77, ng0);

LAB22:    xsi_set_current_line(78, ng0);
    t28 = (t0 + 1640U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng2)));
    memset(t30, 0, 8);
    t31 = (t29 + 4);
    t32 = (t28 + 4);
    t33 = *((unsigned int *)t29);
    t34 = *((unsigned int *)t28);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t31);
    t37 = *((unsigned int *)t32);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t32);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB26;

LAB23:    if (t42 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t30) = 1;

LAB26:    t46 = (t0 + 1640U);
    t47 = *((char **)t46);
    t46 = ((char*)((ng3)));
    memset(t48, 0, 8);
    t49 = (t47 + 4);
    t50 = (t46 + 4);
    t51 = *((unsigned int *)t47);
    t52 = *((unsigned int *)t46);
    t53 = (t51 ^ t52);
    t54 = *((unsigned int *)t49);
    t55 = *((unsigned int *)t50);
    t56 = (t54 ^ t55);
    t57 = (t53 | t56);
    t58 = *((unsigned int *)t49);
    t59 = *((unsigned int *)t50);
    t60 = (t58 | t59);
    t61 = (~(t60));
    t62 = (t57 & t61);
    if (t62 != 0)
        goto LAB30;

LAB27:    if (t60 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t48) = 1;

LAB30:    t65 = *((unsigned int *)t30);
    t66 = *((unsigned int *)t48);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = (t30 + 4);
    t69 = (t48 + 4);
    t70 = (t64 + 4);
    t71 = *((unsigned int *)t68);
    t72 = *((unsigned int *)t69);
    t73 = (t71 | t72);
    *((unsigned int *)t70) = t73;
    t74 = *((unsigned int *)t70);
    t75 = (t74 != 0);
    if (t75 == 1)
        goto LAB31;

LAB32:
LAB33:    t92 = (t64 + 4);
    t93 = *((unsigned int *)t92);
    t94 = (~(t93));
    t95 = *((unsigned int *)t64);
    t96 = (t95 & t94);
    t97 = (t96 != 0);
    if (t97 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB41;

LAB38:    if (t18 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t6) = 1;

LAB41:    t8 = (t0 + 1640U);
    t21 = *((char **)t8);
    t8 = ((char*)((ng10)));
    memset(t30, 0, 8);
    t22 = (t21 + 4);
    t28 = (t8 + 4);
    t23 = *((unsigned int *)t21);
    t24 = *((unsigned int *)t8);
    t25 = (t23 ^ t24);
    t26 = *((unsigned int *)t22);
    t27 = *((unsigned int *)t28);
    t33 = (t26 ^ t27);
    t34 = (t25 | t33);
    t35 = *((unsigned int *)t22);
    t36 = *((unsigned int *)t28);
    t37 = (t35 | t36);
    t38 = (~(t37));
    t39 = (t34 & t38);
    if (t39 != 0)
        goto LAB45;

LAB42:    if (t37 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t30) = 1;

LAB45:    t40 = *((unsigned int *)t6);
    t41 = *((unsigned int *)t30);
    t42 = (t40 | t41);
    *((unsigned int *)t48) = t42;
    t31 = (t6 + 4);
    t32 = (t30 + 4);
    t45 = (t48 + 4);
    t43 = *((unsigned int *)t31);
    t44 = *((unsigned int *)t32);
    t51 = (t43 | t44);
    *((unsigned int *)t45) = t51;
    t52 = *((unsigned int *)t45);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB46;

LAB47:
LAB48:    t49 = (t48 + 4);
    t71 = *((unsigned int *)t49);
    t72 = (~(t71));
    t73 = *((unsigned int *)t48);
    t74 = (t73 & t72);
    t75 = (t74 != 0);
    if (t75 > 0)
        goto LAB49;

LAB50:    xsi_set_current_line(82, ng0);

LAB53:    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB51:
LAB36:    goto LAB21;

LAB25:    t45 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB26;

LAB29:    t63 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB30;

LAB31:    t76 = *((unsigned int *)t64);
    t77 = *((unsigned int *)t70);
    *((unsigned int *)t64) = (t76 | t77);
    t78 = (t30 + 4);
    t79 = (t48 + 4);
    t80 = *((unsigned int *)t78);
    t81 = (~(t80));
    t82 = *((unsigned int *)t30);
    t83 = (t82 & t81);
    t84 = *((unsigned int *)t79);
    t85 = (~(t84));
    t86 = *((unsigned int *)t48);
    t87 = (t86 & t85);
    t88 = (~(t83));
    t89 = (~(t87));
    t90 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t90 & t88);
    t91 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t91 & t89);
    goto LAB33;

LAB34:    xsi_set_current_line(78, ng0);

LAB37:    xsi_set_current_line(79, ng0);
    t98 = ((char*)((ng10)));
    t99 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t99, t98, 0, 0, 4, 0LL);
    goto LAB36;

LAB40:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB41;

LAB44:    t29 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB45;

LAB46:    t54 = *((unsigned int *)t48);
    t55 = *((unsigned int *)t45);
    *((unsigned int *)t48) = (t54 | t55);
    t46 = (t6 + 4);
    t47 = (t30 + 4);
    t56 = *((unsigned int *)t46);
    t57 = (~(t56));
    t58 = *((unsigned int *)t6);
    t83 = (t58 & t57);
    t59 = *((unsigned int *)t47);
    t60 = (~(t59));
    t61 = *((unsigned int *)t30);
    t87 = (t61 & t60);
    t62 = (~(t83));
    t65 = (~(t87));
    t66 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t66 & t62);
    t67 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t67 & t65);
    goto LAB48;

LAB49:    xsi_set_current_line(80, ng0);

LAB52:    xsi_set_current_line(81, ng0);
    t50 = ((char*)((ng13)));
    t63 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t63, t50, 0, 0, 4, 0LL);
    goto LAB51;

LAB56:    t21 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB58;

LAB57:    *((unsigned int *)t48) = 1;
    goto LAB58;

LAB60:    *((unsigned int *)t30) = 1;
    goto LAB63;

LAB62:    t28 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB63;

LAB64:    t31 = (t0 + 3480);
    t32 = (t31 + 56U);
    t45 = *((char **)t32);
    t46 = ((char*)((ng2)));
    memset(t64, 0, 8);
    xsi_vlog_unsigned_minus(t64, 4, t45, 4, t46, 4);
    goto LAB65;

LAB66:    t47 = ((char*)((ng1)));
    goto LAB67;

LAB68:    xsi_vlog_unsigned_bit_combine(t6, 4, t64, 4, t47, 4);
    goto LAB72;

LAB70:    memcpy(t6, t64, 8);
    goto LAB72;

LAB74:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB76;

LAB75:    *((unsigned int *)t6) = 1;
    goto LAB76;

LAB78:    *((unsigned int *)t30) = 1;
    goto LAB81;

LAB80:    t28 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB81;

LAB82:    t31 = (t0 + 2840);
    t32 = (t31 + 56U);
    t45 = *((char **)t32);
    memset(t48, 0, 8);
    t46 = (t45 + 4);
    t18 = *((unsigned int *)t46);
    t19 = (~(t18));
    t20 = *((unsigned int *)t45);
    t23 = (t20 & t19);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t46) != 0)
        goto LAB87;

LAB88:    t25 = *((unsigned int *)t30);
    t26 = *((unsigned int *)t48);
    t27 = (t25 | t26);
    *((unsigned int *)t64) = t27;
    t49 = (t30 + 4);
    t50 = (t48 + 4);
    t63 = (t64 + 4);
    t33 = *((unsigned int *)t49);
    t34 = *((unsigned int *)t50);
    t35 = (t33 | t34);
    *((unsigned int *)t63) = t35;
    t36 = *((unsigned int *)t63);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB89;

LAB90:
LAB91:    goto LAB84;

LAB85:    *((unsigned int *)t48) = 1;
    goto LAB88;

LAB87:    t47 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB88;

LAB89:    t38 = *((unsigned int *)t64);
    t39 = *((unsigned int *)t63);
    *((unsigned int *)t64) = (t38 | t39);
    t68 = (t30 + 4);
    t69 = (t48 + 4);
    t40 = *((unsigned int *)t68);
    t41 = (~(t40));
    t42 = *((unsigned int *)t30);
    t83 = (t42 & t41);
    t43 = *((unsigned int *)t69);
    t44 = (~(t43));
    t51 = *((unsigned int *)t48);
    t87 = (t51 & t44);
    t52 = (~(t83));
    t53 = (~(t87));
    t54 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t54 & t52);
    t55 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t55 & t53);
    goto LAB91;

LAB92:    xsi_set_current_line(89, ng0);

LAB95:    xsi_set_current_line(90, ng0);
    t78 = ((char*)((ng2)));
    t79 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t79, t78, 0, 0, 1, 0LL);
    goto LAB94;

}

static void Cont_95_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;

LAB0:    t1 = (t0 + 5144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 1800U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t29);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t42, 8);

LAB20:    t43 = (t0 + 5576);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    memcpy(t47, t3, 8);
    xsi_driver_vfirst_trans(t43, 0, 31);
    t48 = (t0 + 5496);
    *((int *)t48) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = (t0 + 3160);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    goto LAB13;

LAB14:    t40 = (t0 + 3000);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t35, 32, t42, 32);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

}


extern void work_m_00000000002613097750_1618395014_init()
{
	static char *pe[] = {(void *)Initial_13_0,(void *)Always_23_1,(void *)Always_72_2,(void *)Cont_95_3};
	xsi_register_didat("work_m_00000000002613097750_1618395014", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000002613097750_1618395014.didat");
	xsi_register_executes(pe);
}
