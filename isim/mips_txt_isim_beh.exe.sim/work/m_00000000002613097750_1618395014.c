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
static unsigned int ng5[] = {4U, 0U};
static int ng6[] = {0, 0};
static unsigned int ng7[] = {0U, 0U, 0U, 0U};
static int ng8[] = {31, 0};
static int ng9[] = {63, 0};
static int ng10[] = {32, 0};
static unsigned int ng11[] = {9U, 0U};
static unsigned int ng12[] = {5U, 0U};
static unsigned int ng13[] = {6U, 0U};



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
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

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
    t4 = (t0 + 1640U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(37, ng0);

LAB22:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(25, ng0);

LAB18:    xsi_set_current_line(26, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 2840);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    goto LAB17;

LAB9:    xsi_set_current_line(28, ng0);

LAB19:    xsi_set_current_line(29, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2840);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB17;

LAB11:    xsi_set_current_line(31, ng0);

LAB20:    xsi_set_current_line(32, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2840);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB17;

LAB13:    xsi_set_current_line(34, ng0);

LAB21:    xsi_set_current_line(35, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2840);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB17;

}

static void Always_43_2(char *t0)
{
    char t6[8];
    char t31[16];
    char t34[16];
    char t36[16];
    char t37[8];
    char t46[16];
    char t47[8];
    char t48[8];
    char t49[8];
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
    int t30;
    char *t32;
    char *t33;
    char *t35;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    unsigned int t56;
    int t57;
    char *t58;
    unsigned int t59;
    int t60;
    int t61;
    char *t62;
    unsigned int t63;
    int t64;
    int t65;
    unsigned int t66;
    int t67;
    unsigned int t68;
    unsigned int t69;
    int t70;
    int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;

LAB0:    t1 = (t0 + 4896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 5480);
    *((int *)t2) = 1;
    t3 = (t0 + 4928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
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

LAB11:    xsi_set_current_line(47, ng0);

LAB14:    xsi_set_current_line(48, ng0);
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

LAB20:    xsi_set_current_line(72, ng0);

LAB116:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);

LAB117:    t2 = ((char*)((ng12)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t30 == 1)
        goto LAB118;

LAB119:    t2 = ((char*)((ng13)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t30 == 1)
        goto LAB120;

LAB121:
LAB123:
LAB122:    xsi_set_current_line(80, ng0);

LAB127:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 3320);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 4294967295U);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 4294967295U);
    t21 = (t0 + 3000);
    xsi_vlogvar_wait_assign_value(t21, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 3320);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 8);
    t21 = (t5 + 12);
    t9 = *((unsigned int *)t8);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t21);
    t12 = (t11 >> 0);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 4294967295U);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 4294967295U);
    t22 = (t0 + 3160);
    xsi_vlogvar_wait_assign_value(t22, t6, 0, 0, 32, 0LL);

LAB124:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3480);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng1)));
    memset(t47, 0, 8);
    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB129;

LAB128:    t21 = (t7 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB129;

LAB132:    if (*((unsigned int *)t5) > *((unsigned int *)t7))
        goto LAB130;

LAB131:    memset(t37, 0, 8);
    t28 = (t47 + 4);
    t9 = *((unsigned int *)t28);
    t10 = (~(t9));
    t11 = *((unsigned int *)t47);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB133;

LAB134:    if (*((unsigned int *)t28) != 0)
        goto LAB135;

LAB136:    t33 = (t37 + 4);
    t14 = *((unsigned int *)t37);
    t15 = *((unsigned int *)t33);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB137;

LAB138:    t17 = *((unsigned int *)t37);
    t18 = (~(t17));
    t19 = *((unsigned int *)t33);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB139;

LAB140:    if (*((unsigned int *)t33) > 0)
        goto LAB141;

LAB142:    if (*((unsigned int *)t37) > 0)
        goto LAB143;

LAB144:    memcpy(t6, t52, 8);

LAB145:    t53 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t53, t6, 0, 0, 4, 0LL);

LAB21:
LAB12:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 3480);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB147;

LAB146:    t21 = (t7 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB147;

LAB150:    if (*((unsigned int *)t5) > *((unsigned int *)t7))
        goto LAB148;

LAB149:    memset(t37, 0, 8);
    t28 = (t6 + 4);
    t9 = *((unsigned int *)t28);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB151;

LAB152:    if (*((unsigned int *)t28) != 0)
        goto LAB153;

LAB154:    t33 = (t37 + 4);
    t14 = *((unsigned int *)t37);
    t15 = (!(t14));
    t16 = *((unsigned int *)t33);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB155;

LAB156:    memcpy(t48, t37, 8);

LAB157:    t76 = (t48 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t48);
    t80 = (t79 & t78);
    t81 = (t80 != 0);
    if (t81 > 0)
        goto LAB165;

LAB166:    xsi_set_current_line(90, ng0);

LAB169:    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);

LAB167:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(44, ng0);

LAB13:    xsi_set_current_line(45, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 3480);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 4);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB12;

LAB17:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(48, ng0);

LAB22:    xsi_set_current_line(49, ng0);
    t28 = (t0 + 1640U);
    t29 = *((char **)t28);

LAB23:    t28 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t28, 4);
    if (t30 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng3)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t2, 4);
    if (t30 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t2, 4);
    if (t30 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng5)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t2, 4);
    if (t30 == 1)
        goto LAB30;

LAB31:
LAB33:
LAB32:    xsi_set_current_line(68, ng0);

LAB115:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3320);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 64, 0LL);

LAB34:    goto LAB21;

LAB24:    xsi_set_current_line(50, ng0);

LAB35:    xsi_set_current_line(51, ng0);
    t32 = (t0 + 1320U);
    t33 = *((char **)t32);
    xsi_vlogtype_sign_extend(t31, 64, t33, 32);
    t32 = (t0 + 1480U);
    t35 = *((char **)t32);
    xsi_vlogtype_sign_extend(t34, 64, t35, 32);
    xsi_vlog_signed_multiply(t36, 64, t31, 64, t34, 64);
    t32 = (t0 + 3320);
    xsi_vlogvar_wait_assign_value(t32, t36, 0, 0, 64, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB34;

LAB26:    xsi_set_current_line(54, ng0);

LAB36:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 1320U);
    t4 = *((char **)t3);
    t3 = (t0 + 1480U);
    t5 = *((char **)t3);
    xsi_vlog_unsigned_multiply(t31, 64, t4, 32, t5, 32);
    t3 = (t0 + 3320);
    xsi_vlogvar_wait_assign_value(t3, t31, 0, 0, 64, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB34;

LAB28:    xsi_set_current_line(58, ng0);

LAB37:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng6)));
    memset(t37, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t3);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB41;

LAB38:    if (t18 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t37) = 1;

LAB41:    memset(t6, 0, 8);
    t21 = (t37 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t37);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t21) != 0)
        goto LAB44;

LAB45:    t28 = (t6 + 4);
    t38 = *((unsigned int *)t6);
    t39 = *((unsigned int *)t28);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB46;

LAB47:    t41 = *((unsigned int *)t6);
    t42 = (~(t41));
    t43 = *((unsigned int *)t28);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t28) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t6) > 0)
        goto LAB52;

LAB53:    memcpy(t31, t46, 16);

LAB54:    t33 = (t0 + 3320);
    t50 = (t0 + 3320);
    t51 = (t50 + 72U);
    t52 = *((char **)t51);
    t53 = ((char*)((ng8)));
    t54 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t47, t48, t49, ((int*)(t52)), 2, t53, 32, 1, t54, 32, 1);
    t55 = (t47 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (!(t56));
    t58 = (t48 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (!(t59));
    t61 = (t57 && t60);
    t62 = (t49 + 4);
    t63 = *((unsigned int *)t62);
    t64 = (!(t63));
    t65 = (t61 && t64);
    if (t65 == 1)
        goto LAB55;

LAB56:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t37, 0, 8);
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
        goto LAB60;

LAB57:    if (t18 != 0)
        goto LAB59;

LAB58:    *((unsigned int *)t37) = 1;

LAB60:    memset(t6, 0, 8);
    t8 = (t37 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t37);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t8) != 0)
        goto LAB63;

LAB64:    t22 = (t6 + 4);
    t38 = *((unsigned int *)t6);
    t39 = *((unsigned int *)t22);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB65;

LAB66:    t41 = *((unsigned int *)t6);
    t42 = (~(t41));
    t43 = *((unsigned int *)t22);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t22) > 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t6) > 0)
        goto LAB71;

LAB72:    memcpy(t31, t46, 16);

LAB73:    t32 = (t0 + 3320);
    t45 = (t0 + 3320);
    t50 = (t45 + 72U);
    t51 = *((char **)t50);
    t52 = ((char*)((ng9)));
    t53 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t47, t48, t49, ((int*)(t51)), 2, t52, 32, 1, t53, 32, 1);
    t54 = (t47 + 4);
    t56 = *((unsigned int *)t54);
    t30 = (!(t56));
    t55 = (t48 + 4);
    t59 = *((unsigned int *)t55);
    t57 = (!(t59));
    t60 = (t30 && t57);
    t58 = (t49 + 4);
    t63 = *((unsigned int *)t58);
    t61 = (!(t63));
    t64 = (t60 && t61);
    if (t64 == 1)
        goto LAB74;

LAB75:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB34;

LAB30:    xsi_set_current_line(63, ng0);

LAB76:    xsi_set_current_line(64, ng0);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng6)));
    memset(t37, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t3);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB80;

LAB77:    if (t18 != 0)
        goto LAB79;

LAB78:    *((unsigned int *)t37) = 1;

LAB80:    memset(t6, 0, 8);
    t21 = (t37 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t37);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t21) != 0)
        goto LAB83;

LAB84:    t28 = (t6 + 4);
    t38 = *((unsigned int *)t6);
    t39 = *((unsigned int *)t28);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB85;

LAB86:    t41 = *((unsigned int *)t6);
    t42 = (~(t41));
    t43 = *((unsigned int *)t28);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB87;

LAB88:    if (*((unsigned int *)t28) > 0)
        goto LAB89;

LAB90:    if (*((unsigned int *)t6) > 0)
        goto LAB91;

LAB92:    memcpy(t31, t34, 16);

LAB93:    t33 = (t0 + 3320);
    t50 = (t0 + 3320);
    t51 = (t50 + 72U);
    t52 = *((char **)t51);
    t53 = ((char*)((ng8)));
    t54 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t47, t48, t49, ((int*)(t52)), 2, t53, 32, 1, t54, 32, 1);
    t55 = (t47 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (!(t56));
    t58 = (t48 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (!(t59));
    t61 = (t57 && t60);
    t62 = (t49 + 4);
    t63 = *((unsigned int *)t62);
    t64 = (!(t63));
    t65 = (t61 && t64);
    if (t65 == 1)
        goto LAB94;

LAB95:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t37, 0, 8);
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
        goto LAB99;

LAB96:    if (t18 != 0)
        goto LAB98;

LAB97:    *((unsigned int *)t37) = 1;

LAB99:    memset(t6, 0, 8);
    t8 = (t37 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t37);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB100;

LAB101:    if (*((unsigned int *)t8) != 0)
        goto LAB102;

LAB103:    t22 = (t6 + 4);
    t38 = *((unsigned int *)t6);
    t39 = *((unsigned int *)t22);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB104;

LAB105:    t41 = *((unsigned int *)t6);
    t42 = (~(t41));
    t43 = *((unsigned int *)t22);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB106;

LAB107:    if (*((unsigned int *)t22) > 0)
        goto LAB108;

LAB109:    if (*((unsigned int *)t6) > 0)
        goto LAB110;

LAB111:    memcpy(t31, t34, 16);

LAB112:    t32 = (t0 + 3320);
    t45 = (t0 + 3320);
    t50 = (t45 + 72U);
    t51 = *((char **)t50);
    t52 = ((char*)((ng9)));
    t53 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t47, t48, t49, ((int*)(t51)), 2, t52, 32, 1, t53, 32, 1);
    t54 = (t47 + 4);
    t56 = *((unsigned int *)t54);
    t30 = (!(t56));
    t55 = (t48 + 4);
    t59 = *((unsigned int *)t55);
    t57 = (!(t59));
    t60 = (t30 && t57);
    t58 = (t49 + 4);
    t63 = *((unsigned int *)t58);
    t61 = (!(t63));
    t64 = (t60 && t61);
    if (t64 == 1)
        goto LAB113;

LAB114:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB34;

LAB40:    t8 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t6) = 1;
    goto LAB45;

LAB44:    t22 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB45;

LAB46:    t32 = ((char*)((ng7)));
    goto LAB47;

LAB48:    t33 = (t0 + 1320U);
    t35 = *((char **)t33);
    xsi_vlogtype_zero_extend(t34, 64, t35, 32);
    t33 = (t0 + 1480U);
    t45 = *((char **)t33);
    xsi_vlogtype_zero_extend(t36, 64, t45, 32);
    xsi_vlog_unsigned_divide(t46, 64, t34, 64, t36, 64);
    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t31, 64, t32, 64, t46, 64);
    goto LAB54;

LAB52:    memcpy(t31, t32, 16);
    goto LAB54;

LAB55:    t66 = *((unsigned int *)t49);
    t67 = (t66 + 0);
    t68 = *((unsigned int *)t47);
    t69 = *((unsigned int *)t48);
    t70 = (t68 - t69);
    t71 = (t70 + 1);
    xsi_vlogvar_wait_assign_value(t33, t31, t67, *((unsigned int *)t48), t71, 0LL);
    goto LAB56;

LAB59:    t7 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB60;

LAB61:    *((unsigned int *)t6) = 1;
    goto LAB64;

LAB63:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB64;

LAB65:    t28 = ((char*)((ng7)));
    goto LAB66;

LAB67:    t32 = (t0 + 1320U);
    t33 = *((char **)t32);
    xsi_vlogtype_zero_extend(t34, 64, t33, 32);
    t32 = (t0 + 1480U);
    t35 = *((char **)t32);
    xsi_vlogtype_zero_extend(t36, 64, t35, 32);
    xsi_vlog_unsigned_mod(t46, 64, t34, 64, t36, 64);
    goto LAB68;

LAB69:    xsi_vlog_unsigned_bit_combine(t31, 64, t28, 64, t46, 64);
    goto LAB73;

LAB71:    memcpy(t31, t28, 16);
    goto LAB73;

LAB74:    t66 = *((unsigned int *)t49);
    t65 = (t66 + 0);
    t68 = *((unsigned int *)t47);
    t69 = *((unsigned int *)t48);
    t67 = (t68 - t69);
    t70 = (t67 + 1);
    xsi_vlogvar_wait_assign_value(t32, t31, t65, *((unsigned int *)t48), t70, 0LL);
    goto LAB75;

LAB79:    t8 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB80;

LAB81:    *((unsigned int *)t6) = 1;
    goto LAB84;

LAB83:    t22 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB84;

LAB85:    t32 = ((char*)((ng7)));
    goto LAB86;

LAB87:    t33 = (t0 + 1320U);
    t35 = *((char **)t33);
    t33 = (t0 + 1480U);
    t45 = *((char **)t33);
    xsi_vlog_unsigned_divide(t34, 64, t35, 32, t45, 32);
    goto LAB88;

LAB89:    xsi_vlog_unsigned_bit_combine(t31, 64, t32, 64, t34, 64);
    goto LAB93;

LAB91:    memcpy(t31, t32, 16);
    goto LAB93;

LAB94:    t66 = *((unsigned int *)t49);
    t67 = (t66 + 0);
    t68 = *((unsigned int *)t47);
    t69 = *((unsigned int *)t48);
    t70 = (t68 - t69);
    t71 = (t70 + 1);
    xsi_vlogvar_wait_assign_value(t33, t31, t67, *((unsigned int *)t48), t71, 0LL);
    goto LAB95;

LAB98:    t7 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB99;

LAB100:    *((unsigned int *)t6) = 1;
    goto LAB103;

LAB102:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB103;

LAB104:    t28 = ((char*)((ng7)));
    goto LAB105;

LAB106:    t32 = (t0 + 1320U);
    t33 = *((char **)t32);
    t32 = (t0 + 1480U);
    t35 = *((char **)t32);
    xsi_vlog_unsigned_mod(t34, 64, t33, 32, t35, 32);
    goto LAB107;

LAB108:    xsi_vlog_unsigned_bit_combine(t31, 64, t28, 64, t34, 64);
    goto LAB112;

LAB110:    memcpy(t31, t28, 16);
    goto LAB112;

LAB113:    t66 = *((unsigned int *)t49);
    t65 = (t66 + 0);
    t68 = *((unsigned int *)t47);
    t69 = *((unsigned int *)t48);
    t67 = (t68 - t69);
    t70 = (t67 + 1);
    xsi_vlogvar_wait_assign_value(t32, t31, t65, *((unsigned int *)t48), t70, 0LL);
    goto LAB114;

LAB118:    xsi_set_current_line(74, ng0);

LAB125:    xsi_set_current_line(75, ng0);
    t4 = (t0 + 1320U);
    t5 = *((char **)t4);
    t4 = (t0 + 3160);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    goto LAB124;

LAB120:    xsi_set_current_line(77, ng0);

LAB126:    xsi_set_current_line(78, ng0);
    t4 = (t0 + 1320U);
    t5 = *((char **)t4);
    t4 = (t0 + 3000);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    goto LAB124;

LAB129:    t22 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB131;

LAB130:    *((unsigned int *)t47) = 1;
    goto LAB131;

LAB133:    *((unsigned int *)t37) = 1;
    goto LAB136;

LAB135:    t32 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB136;

LAB137:    t35 = (t0 + 3480);
    t45 = (t35 + 56U);
    t50 = *((char **)t45);
    t51 = ((char*)((ng2)));
    memset(t48, 0, 8);
    xsi_vlog_unsigned_minus(t48, 4, t50, 4, t51, 4);
    goto LAB138;

LAB139:    t52 = ((char*)((ng1)));
    goto LAB140;

LAB141:    xsi_vlog_unsigned_bit_combine(t6, 4, t48, 4, t52, 4);
    goto LAB145;

LAB143:    memcpy(t6, t48, 8);
    goto LAB145;

LAB147:    t22 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB149;

LAB148:    *((unsigned int *)t6) = 1;
    goto LAB149;

LAB151:    *((unsigned int *)t37) = 1;
    goto LAB154;

LAB153:    t32 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB154;

LAB155:    t35 = (t0 + 2840);
    t45 = (t35 + 56U);
    t50 = *((char **)t45);
    memset(t47, 0, 8);
    t51 = (t50 + 4);
    t18 = *((unsigned int *)t51);
    t19 = (~(t18));
    t20 = *((unsigned int *)t50);
    t23 = (t20 & t19);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB158;

LAB159:    if (*((unsigned int *)t51) != 0)
        goto LAB160;

LAB161:    t25 = *((unsigned int *)t37);
    t26 = *((unsigned int *)t47);
    t27 = (t25 | t26);
    *((unsigned int *)t48) = t27;
    t53 = (t37 + 4);
    t54 = (t47 + 4);
    t55 = (t48 + 4);
    t38 = *((unsigned int *)t53);
    t39 = *((unsigned int *)t54);
    t40 = (t38 | t39);
    *((unsigned int *)t55) = t40;
    t41 = *((unsigned int *)t55);
    t42 = (t41 != 0);
    if (t42 == 1)
        goto LAB162;

LAB163:
LAB164:    goto LAB157;

LAB158:    *((unsigned int *)t47) = 1;
    goto LAB161;

LAB160:    t52 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB161;

LAB162:    t43 = *((unsigned int *)t48);
    t44 = *((unsigned int *)t55);
    *((unsigned int *)t48) = (t43 | t44);
    t58 = (t37 + 4);
    t62 = (t47 + 4);
    t56 = *((unsigned int *)t58);
    t59 = (~(t56));
    t63 = *((unsigned int *)t37);
    t30 = (t63 & t59);
    t66 = *((unsigned int *)t62);
    t68 = (~(t66));
    t69 = *((unsigned int *)t47);
    t57 = (t69 & t68);
    t72 = (~(t30));
    t73 = (~(t57));
    t74 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t74 & t72);
    t75 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t75 & t73);
    goto LAB164;

LAB165:    xsi_set_current_line(88, ng0);

LAB168:    xsi_set_current_line(89, ng0);
    t82 = ((char*)((ng2)));
    t83 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t83, t82, 0, 0, 1, 0LL);
    goto LAB167;

}

static void Cont_94_3(char *t0)
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

LAB2:    xsi_set_current_line(94, ng0);
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
	static char *pe[] = {(void *)Initial_13_0,(void *)Always_23_1,(void *)Always_43_2,(void *)Cont_94_3};
	xsi_register_didat("work_m_00000000002613097750_1618395014", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000002613097750_1618395014.didat");
	xsi_register_executes(pe);
}
