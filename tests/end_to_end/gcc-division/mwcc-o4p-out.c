void test(u32 a) {
    test_s8((s8) a);
    test_s16((s16) a);
    test_s32_div((s32) a);
    test_s32_mod((s32) a);
    test_u32_div(a);
    test_u32_mod(a);
}

void test_s8(s8 c) {
    s8 sp8;
    s32 temp_r0_2;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r0_6;
    s8 temp_r0;
    s8 temp_r0_3;
    s8 temp_r4;
    s8 temp_r4_2;
    s8 temp_r4_3;

    sp8 = c;
    func_00400090((u32) ((s32) (s8) (u8) sp8 / 2));
    func_00400090(MULT_HI(0x55555556, (s8) (u8) sp8) + ((s8) (u8) sp8 / 6442450941));
    func_00400090((s8) (u8) sp8 / 5);
    temp_r0 = (s8) (u8) sp8;
    temp_r0_2 = (s32) (MULT_HI(0x92492493, temp_r0) + temp_r0) >> 2;
    func_00400090(temp_r0_2 + ((u32) temp_r0_2 >> 0x1FU));
    func_00400090((s8) (u8) sp8 / 10);
    func_00400090((s8) (u8) sp8 / 100);
    temp_r0_3 = (s8) (u8) sp8;
    temp_r0_4 = (s32) (MULT_HI(0x80808081, temp_r0_3) + temp_r0_3) >> 7;
    func_00400090(temp_r0_4 + ((u32) temp_r0_4 >> 0x1FU));
    func_00400090((s8) (u8) sp8 % 2);
    temp_r4 = (s8) (u8) sp8;
    func_00400090(temp_r4 - ((MULT_HI(0x55555556, temp_r4) + ((s8) (u8) sp8 / 6442450941)) * 3));
    func_00400090((s8) (u8) sp8 % 5);
    temp_r4_2 = (s8) (u8) sp8;
    temp_r0_5 = (s32) (MULT_HI(0x92492493, temp_r4_2) + temp_r4_2) >> 2;
    func_00400090(temp_r4_2 - ((temp_r0_5 + ((u32) temp_r0_5 >> 0x1FU)) * 7));
    func_00400090((s8) (u8) sp8 % 10);
    func_00400090((s8) (u8) sp8 % 100);
    temp_r4_3 = (s8) (u8) sp8;
    temp_r0_6 = (s32) (MULT_HI(0x80808081, temp_r4_3) + temp_r4_3) >> 7;
    func_00400090(temp_r4_3 - ((temp_r0_6 + ((u32) temp_r0_6 >> 0x1FU)) * 0xFF));
}

void test_s16(s16 h) {
    s16 sp8;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r0_6;
    s32 temp_r0_7;
    s32 temp_r3;

    sp8 = h;
    func_00400090((u32) ((s32) sp8 / 2));
    func_00400090(MULT_HI(0x55555556, sp8) + (sp8 / 6442450941));
    func_00400090(sp8 / 5);
    temp_r0 = (s32) (MULT_HI(0x92492493, sp8) + sp8) >> 2;
    func_00400090(temp_r0 + ((u32) temp_r0 >> 0x1FU));
    func_00400090(sp8 / 10);
    func_00400090(sp8 / 100);
    temp_r0_2 = (s32) (MULT_HI(0x80808081, sp8) + sp8) >> 7;
    func_00400090(temp_r0_2 + ((u32) temp_r0_2 >> 0x1FU));
    temp_r0_3 = (s32) (MULT_HI(0xB60B60B7, sp8) + sp8) >> 8;
    func_00400090(temp_r0_3 + ((u32) temp_r0_3 >> 0x1FU));
    temp_r0_4 = (s32) (MULT_HI(0x80010003, sp8) + sp8) >> 0xF;
    func_00400090(temp_r0_4 + ((u32) temp_r0_4 >> 0x1FU));
    func_00400090(sp8 % 2);
    func_00400090(sp8 - ((MULT_HI(0x55555556, sp8) + (sp8 / 6442450941)) * 3));
    func_00400090(sp8 % 5);
    temp_r0_5 = (s32) (MULT_HI(0x92492493, sp8) + sp8) >> 2;
    func_00400090(sp8 - ((temp_r0_5 + ((u32) temp_r0_5 >> 0x1FU)) * 7));
    func_00400090(sp8 % 10);
    func_00400090(sp8 % 100);
    temp_r0_6 = (s32) (MULT_HI(0x80808081, sp8) + sp8) >> 7;
    func_00400090(sp8 - ((temp_r0_6 + ((u32) temp_r0_6 >> 0x1FU)) * 0xFF));
    temp_r0_7 = (s32) (MULT_HI(0xB60B60B7, sp8) + sp8) >> 8;
    func_00400090(sp8 - ((temp_r0_7 + ((u32) temp_r0_7 >> 0x1FU)) * 0x168));
    temp_r3 = (s32) (MULT_HI(0x80010003, sp8) + sp8) >> 0xF;
    func_00400090(sp8 - ((temp_r3 + ((u32) temp_r3 >> 0x1FU)) * 0xFFFE));
}

void test_s32_div(s32 d) {
    s32 sp8;
    s32 temp_r0;
    s32 temp_r0_10;
    s32 temp_r0_11;
    s32 temp_r0_12;
    s32 temp_r0_15;
    s32 temp_r0_18;
    s32 temp_r0_19;
    s32 temp_r0_20;
    s32 temp_r0_21;
    s32 temp_r0_22;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r0_6;
    s32 temp_r0_7;
    s32 temp_r0_8;
    s32 temp_r0_9;
    u32 temp_r0_13;
    u32 temp_r0_14;
    u32 temp_r0_16;
    u32 temp_r0_17;

    sp8 = d;
    func_00400090((u32) d);
    func_00400090((u32) (sp8 / 2));
    func_00400090(MULT_HI(0x55555556, sp8) + (sp8 / 6442450941));
    func_00400090((u32) (sp8 / 4));
    func_00400090(sp8 / 5);
    func_00400090(MULT_HI(0x2AAAAAAB, sp8) + (sp8 / 12884901882));
    temp_r0 = (s32) (MULT_HI(0x92492493, sp8) + sp8) >> 2;
    func_00400090(temp_r0 + ((u32) temp_r0 >> 0x1FU));
    func_00400090((u32) (sp8 / 8));
    func_00400090(sp8 / 9);
    func_00400090(sp8 / 10);
    func_00400090(sp8 / 11);
    func_00400090(sp8 / 12);
    func_00400090(sp8 / 13);
    temp_r0_2 = (s32) (MULT_HI(0x92492493, sp8) + sp8) >> 3;
    func_00400090(temp_r0_2 + ((u32) temp_r0_2 >> 0x1FU));
    temp_r0_3 = (s32) (MULT_HI(0x88888889, sp8) + sp8) >> 3;
    func_00400090(temp_r0_3 + ((u32) temp_r0_3 >> 0x1FU));
    func_00400090((u32) (sp8 / 16));
    func_00400090(sp8 / 17);
    func_00400090(sp8 / 18);
    func_00400090(sp8 / 19);
    func_00400090(sp8 / 20);
    func_00400090(sp8 / 21);
    func_00400090(sp8 / 22);
    temp_r0_4 = (s32) (MULT_HI(0xB21642C9, sp8) + sp8) >> 4;
    func_00400090(temp_r0_4 + ((u32) temp_r0_4 >> 0x1FU));
    func_00400090(sp8 / 24);
    func_00400090(sp8 / 25);
    func_00400090(sp8 / 26);
    func_00400090(sp8 / 27);
    temp_r0_5 = (s32) (MULT_HI(0x92492493, sp8) + sp8) >> 4;
    func_00400090(temp_r0_5 + ((u32) temp_r0_5 >> 0x1FU));
    temp_r0_6 = (s32) (MULT_HI(0x8D3DCB09, sp8) + sp8) >> 4;
    func_00400090(temp_r0_6 + ((u32) temp_r0_6 >> 0x1FU));
    temp_r0_7 = (s32) (MULT_HI(0x88888889, sp8) + sp8) >> 4;
    func_00400090(temp_r0_7 + ((u32) temp_r0_7 >> 0x1FU));
    temp_r0_8 = (s32) (MULT_HI(0x84210843, sp8) + sp8) >> 4;
    func_00400090(temp_r0_8 + ((u32) temp_r0_8 >> 0x1FU));
    func_00400090((u32) (sp8 / 32));
    func_00400090(sp8 / 33);
    func_00400090(sp8 / 100);
    temp_r0_9 = (s32) (MULT_HI(0x80808081, sp8) + sp8) >> 7;
    func_00400090(temp_r0_9 + ((u32) temp_r0_9 >> 0x1FU));
    temp_r0_10 = (s32) (MULT_HI(0xB60B60B7, sp8) + sp8) >> 8;
    func_00400090(temp_r0_10 + ((u32) temp_r0_10 >> 0x1FU));
    func_00400090(sp8 / 1000);
    func_00400090(sp8 / 10000);
    func_00400090(sp8 / 100000);
    func_00400090(sp8 / 1000000);
    func_00400090(sp8 / 10000000);
    func_00400090(sp8 / 100000000);
    temp_r0_11 = (s32) (MULT_HI(0x80000005, sp8) + sp8) >> 0x1D;
    func_00400090(temp_r0_11 + ((u32) temp_r0_11 >> 0x1FU));
    temp_r0_12 = (s32) (MULT_HI(0x80000003, sp8) + sp8) >> 0x1D;
    func_00400090(temp_r0_12 + ((u32) temp_r0_12 >> 0x1FU));
    func_00400090((u32) (sp8 / 1073741824));
    temp_r0_13 = sp8 / 1073741824;
    func_00400090(temp_r0_13 + (temp_r0_13 >> 0x1FU));
    temp_r0_14 = sp8 / 2147483644;
    func_00400090(temp_r0_14 + (temp_r0_14 >> 0x1FU));
    temp_r0_15 = (s32) (MULT_HI(0x80000003, sp8) + sp8) >> 0x1E;
    func_00400090(temp_r0_15 + ((u32) temp_r0_15 >> 0x1FU));
    temp_r0_16 = sp8 / 2147483646;
    func_00400090(temp_r0_16 + (temp_r0_16 >> 0x1FU));
    func_00400090(MULTU_HI(2, sp8));
    temp_r0_17 = sp8 / 715827883;
    func_00400090(temp_r0_17 + (temp_r0_17 >> 0x1FU));
    temp_r0_18 = (s32) (MULT_HI(0x7FFFFFFD, sp8) - sp8) >> 0x1E;
    func_00400090(temp_r0_18 + ((u32) temp_r0_18 >> 0x1FU));
    temp_r0_19 = (s32) MULT_HI(0x99999999, sp8) >> 2;
    func_00400090(temp_r0_19 + ((u32) temp_r0_19 >> 0x1FU));
    temp_r0_20 = (s32) (MULT_HI(0x6DB6DB6D, sp8) - sp8) >> 2;
    func_00400090(temp_r0_20 + ((u32) temp_r0_20 >> 0x1FU));
    temp_r0_21 = (s32) MULT_HI(0x99999999, sp8) >> 1;
    func_00400090(temp_r0_21 + ((u32) temp_r0_21 >> 0x1FU));
    func_00400090((u32) -(sp8 / 4));
    temp_r0_22 = (s32) (MULT_HI(0x55555555, sp8) - sp8) >> 1;
    func_00400090(temp_r0_22 + ((u32) temp_r0_22 >> 0x1FU));
    func_00400090((u32) -(sp8 / 2));
    func_00400090((u32) (d / -1));
}

void test_s32_mod(s32 d) {
    s32 sp8;
    s32 temp_r0;
    s32 temp_r0_10;
    s32 temp_r0_11;
    s32 temp_r0_16;
    s32 temp_r0_17;
    s32 temp_r0_18;
    s32 temp_r0_19;
    s32 temp_r0_20;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r0_6;
    s32 temp_r0_7;
    s32 temp_r0_8;
    s32 temp_r0_9;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    u32 temp_r0_12;
    u32 temp_r0_13;
    u32 temp_r0_14;
    u32 temp_r0_15;
    u32 temp_r0_21;

    sp8 = d;
    func_00400090(0U);
    func_00400090(sp8 % 2);
    func_00400090(sp8 - ((MULT_HI(0x55555556, sp8) + (sp8 / 6442450941)) * 3));
    func_00400090(sp8 % 4);
    func_00400090(sp8 % 5);
    func_00400090(sp8 - ((MULT_HI(0x2AAAAAAB, sp8) + (sp8 / 12884901882)) * 6));
    temp_r0 = (s32) (MULT_HI(0x92492493, sp8) + sp8) >> 2;
    func_00400090(sp8 - ((temp_r0 + ((u32) temp_r0 >> 0x1FU)) * 7));
    func_00400090(sp8 % 8);
    func_00400090(sp8 % 9);
    func_00400090(sp8 % 10);
    func_00400090(sp8 % 11);
    func_00400090(sp8 % 12);
    func_00400090(sp8 % 13);
    temp_r0_2 = (s32) (MULT_HI(0x92492493, sp8) + sp8) >> 3;
    func_00400090(sp8 - ((temp_r0_2 + ((u32) temp_r0_2 >> 0x1FU)) * 0xE));
    temp_r0_3 = (s32) (MULT_HI(0x88888889, sp8) + sp8) >> 3;
    func_00400090(sp8 - ((temp_r0_3 + ((u32) temp_r0_3 >> 0x1FU)) * 0xF));
    func_00400090(sp8 % 16);
    func_00400090(sp8 % 17);
    func_00400090(sp8 % 18);
    func_00400090(sp8 % 19);
    func_00400090(sp8 % 20);
    func_00400090(sp8 % 21);
    func_00400090(sp8 % 22);
    temp_r0_4 = (s32) (MULT_HI(0xB21642C9, sp8) + sp8) >> 4;
    func_00400090(sp8 - ((temp_r0_4 + ((u32) temp_r0_4 >> 0x1FU)) * 0x17));
    func_00400090(sp8 % 24);
    func_00400090(sp8 % 25);
    func_00400090(sp8 % 26);
    func_00400090(sp8 % 27);
    temp_r0_5 = (s32) (MULT_HI(0x92492493, sp8) + sp8) >> 4;
    func_00400090(sp8 - ((temp_r0_5 + ((u32) temp_r0_5 >> 0x1FU)) * 0x1C));
    temp_r0_6 = (s32) (MULT_HI(0x8D3DCB09, sp8) + sp8) >> 4;
    func_00400090(sp8 - ((temp_r0_6 + ((u32) temp_r0_6 >> 0x1FU)) * 0x1D));
    temp_r0_7 = (s32) (MULT_HI(0x88888889, sp8) + sp8) >> 4;
    func_00400090(sp8 - ((temp_r0_7 + ((u32) temp_r0_7 >> 0x1FU)) * 0x1E));
    temp_r0_8 = (s32) (MULT_HI(0x84210843, sp8) + sp8) >> 4;
    func_00400090(sp8 - ((temp_r0_8 + ((u32) temp_r0_8 >> 0x1FU)) * 0x1F));
    func_00400090(sp8 - ((sp8 / 32) << 5));
    func_00400090(sp8 % 33);
    func_00400090(sp8 % 100);
    temp_r0_9 = (s32) (MULT_HI(0x80808081, sp8) + sp8) >> 7;
    func_00400090(sp8 - ((temp_r0_9 + ((u32) temp_r0_9 >> 0x1FU)) * 0xFF));
    temp_r0_10 = (s32) (MULT_HI(0xB60B60B7, sp8) + sp8) >> 8;
    func_00400090(sp8 - ((temp_r0_10 + ((u32) temp_r0_10 >> 0x1FU)) * 0x168));
    func_00400090(sp8 % 1000);
    func_00400090(sp8 % 10000);
    func_00400090(sp8 % 100000);
    func_00400090(sp8 % 1000000);
    func_00400090(sp8 % 10000000);
    func_00400090(sp8 % 100000000);
    temp_r0_11 = (s32) (MULT_HI(0x80000005, sp8) + sp8) >> 0x1D;
    func_00400090(sp8 - ((temp_r0_11 + ((u32) temp_r0_11 >> 0x1FU)) * 0x3FFFFFFE));
    temp_r3 = (s32) (MULT_HI(0x80000003, sp8) + sp8) >> 0x1D;
    func_00400090(sp8 - ((temp_r3 + ((u32) temp_r3 >> 0x1FU)) * 0x3FFFFFFF));
    func_00400090(sp8 - ((sp8 / 1073741824) << 0x1E));
    temp_r0_12 = sp8 / 1073741824;
    func_00400090(sp8 - ((temp_r0_12 + (temp_r0_12 >> 0x1FU)) * 0x40000001));
    temp_r0_13 = sp8 / 2147483644;
    func_00400090(sp8 - ((temp_r0_13 + (temp_r0_13 >> 0x1FU)) * 0x7FFFFFFD));
    temp_r3_2 = (s32) (MULT_HI(0x80000003, sp8) + sp8) >> 0x1E;
    func_00400090(sp8 - ((temp_r3_2 + ((u32) temp_r3_2 >> 0x1FU)) * 0x7FFFFFFE));
    temp_r0_14 = sp8 / 2147483646;
    func_00400090(sp8 - ((temp_r0_14 + (temp_r0_14 >> 0x1FU)) * 0x7FFFFFFF));
    func_00400090(d - (MULTU_HI(2, d) * 0x80000000));
    temp_r0_15 = sp8 / 715827883;
    func_00400090(sp8 - ((temp_r0_15 + (temp_r0_15 >> 0x1FU)) * 0x80000001));
    temp_r3_3 = (s32) (MULT_HI(0x7FFFFFFD, sp8) - sp8) >> 0x1E;
    func_00400090(sp8 - ((temp_r3_3 + ((u32) temp_r3_3 >> 0x1FU)) * 0x80000002));
    temp_r0_16 = (s32) MULT_HI(0x99999999, sp8) >> 2;
    func_00400090(sp8 - ((temp_r0_16 + ((u32) temp_r0_16 >> 0x1FU)) * -0xA));
    temp_r0_17 = (s32) (MULT_HI(0x6DB6DB6D, sp8) - sp8) >> 2;
    func_00400090(sp8 - ((temp_r0_17 + ((u32) temp_r0_17 >> 0x1FU)) * -7));
    temp_r0_18 = (s32) MULT_HI(0x99999999, sp8) >> 1;
    func_00400090(sp8 - ((temp_r0_18 + ((u32) temp_r0_18 >> 0x1FU)) * -5));
    temp_r0_19 = (s32) (MULT_HI(0x7FFFFFFF, sp8) - sp8) >> 1;
    func_00400090(sp8 - ((temp_r0_19 + ((u32) temp_r0_19 >> 0x1FU)) * -4));
    temp_r0_20 = (s32) (MULT_HI(0x55555555, sp8) - sp8) >> 1;
    func_00400090(sp8 - ((temp_r0_20 + ((u32) temp_r0_20 >> 0x1FU)) * -3));
    temp_r0_21 = MULT_HI(0x7FFFFFFF, sp8) - sp8;
    func_00400090(sp8 - ((temp_r0_21 + (temp_r0_21 >> 0x1FU)) * -2));
    func_00400090(sp8 % -1);
}

void test_u32_div(u32 u) {
    u32 sp8;
    s32 temp_r3;
    s32 temp_r3_10;
    s32 temp_r3_11;
    s32 temp_r3_12;
    s32 temp_r3_13;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_4;
    s32 temp_r3_5;
    s32 temp_r3_6;
    s32 temp_r3_7;
    s32 temp_r3_8;
    s32 temp_r3_9;

    sp8 = u;
    func_00400090(u);
    func_00400090(sp8 >> 1U);
    func_00400090(sp8 / 3);
    func_00400090(sp8 >> 2U);
    func_00400090(sp8 / 5);
    func_00400090(sp8 / 6);
    temp_r3 = MULTU_HI(0x24924925, sp8);
    func_00400090((u32) (((u32) (sp8 - temp_r3) >> 1U) + temp_r3) >> 2U);
    func_00400090(sp8 >> 3U);
    func_00400090(sp8 / 9);
    func_00400090(sp8 / 10);
    func_00400090(sp8 / 11);
    func_00400090(sp8 / 12);
    func_00400090(sp8 / 13);
    temp_r3_2 = MULTU_HI(0x24924925, sp8);
    func_00400090((u32) (((u32) (sp8 - temp_r3_2) >> 1U) + temp_r3_2) >> 3U);
    func_00400090(sp8 / 15);
    func_00400090(sp8 >> 4U);
    func_00400090(sp8 / 17);
    func_00400090(sp8 / 18);
    temp_r3_3 = MULTU_HI(0xAF286BCB, sp8);
    func_00400090((u32) (((u32) (sp8 - temp_r3_3) >> 1U) + temp_r3_3) >> 4U);
    func_00400090(sp8 / 20);
    temp_r3_4 = MULTU_HI(0x86186187, sp8);
    func_00400090((u32) (((u32) (sp8 - temp_r3_4) >> 1U) + temp_r3_4) >> 4U);
    func_00400090(sp8 / 22);
    func_00400090(sp8 / 23);
    func_00400090(sp8 / 24);
    func_00400090(sp8 / 25);
    func_00400090(sp8 / 26);
    temp_r3_5 = MULTU_HI(0x2F684BDB, sp8);
    func_00400090((u32) (((u32) (sp8 - temp_r3_5) >> 1U) + temp_r3_5) >> 4U);
    temp_r3_6 = MULTU_HI(0x24924925, sp8);
    func_00400090((u32) (((u32) (sp8 - temp_r3_6) >> 1U) + temp_r3_6) >> 4U);
    func_00400090(sp8 / 29);
    func_00400090(sp8 / 30);
    temp_r3_7 = MULTU_HI(0x08421085, sp8);
    func_00400090((u32) (((u32) (sp8 - temp_r3_7) >> 1U) + temp_r3_7) >> 4U);
    func_00400090(sp8 >> 5U);
    func_00400090(sp8 / 33);
    func_00400090(sp8 / 100);
    func_00400090(sp8 / 255);
    temp_r3_8 = MULTU_HI(0x6C16C16D, sp8);
    func_00400090((u32) (((u32) (sp8 - temp_r3_8) >> 1U) + temp_r3_8) >> 8U);
    func_00400090(sp8 / 1000);
    func_00400090(sp8 / 10000);
    temp_r3_9 = MULTU_HI(0x4F8B588F, sp8);
    func_00400090((u32) (((u32) (sp8 - temp_r3_9) >> 1U) + temp_r3_9) >> 0x10U);
    func_00400090(sp8 / 1000000);
    func_00400090(sp8 / 10000000);
    func_00400090(sp8 / 100000000);
    func_00400090(sp8 >> 0x1EU);
    func_00400090((u32) MULTU_HI(-3, sp8) >> 0x1EU);
    temp_r3_10 = MULTU_HI(5, sp8);
    func_00400090((u32) (((u32) (sp8 - temp_r3_10) >> 1U) + temp_r3_10) >> 0x1EU);
    temp_r3_11 = MULTU_HI(3, sp8);
    func_00400090((u32) (((u32) (sp8 - temp_r3_11) >> 1U) + temp_r3_11) >> 0x1EU);
    func_00400090(MULTU_HI(2, sp8));
    temp_r3_12 = MULTU_HI(-3, sp8);
    func_00400090((u32) (((u32) (sp8 - temp_r3_12) >> 1U) + temp_r3_12) >> 0x1FU);
    temp_r3_13 = MULTU_HI(3, sp8);
    func_00400090((u32) (((u32) (sp8 - temp_r3_13) >> 1U) + temp_r3_13) >> 0x1FU);
    func_00400090(sp8 / 4294967294);
}

void test_u32_mod(u32 u) {
    u32 sp8;
    s32 temp_r3;
    s32 temp_r3_10;
    s32 temp_r3_11;
    s32 temp_r3_12;
    s32 temp_r3_13;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_4;
    s32 temp_r3_5;
    s32 temp_r3_6;
    s32 temp_r3_7;
    s32 temp_r3_8;
    s32 temp_r3_9;

    sp8 = u;
    func_00400090(u);
    func_00400090(sp8 >> 1U);
    func_00400090(sp8 / 3);
    func_00400090(sp8 >> 2U);
    func_00400090(sp8 / 5);
    func_00400090(sp8 / 6);
    temp_r3 = MULTU_HI(0x24924925, sp8);
    func_00400090((u32) (((u32) (sp8 - temp_r3) >> 1U) + temp_r3) >> 2U);
    func_00400090(sp8 >> 3U);
    func_00400090(sp8 / 9);
    func_00400090(sp8 / 10);
    func_00400090(sp8 / 11);
    func_00400090(sp8 / 12);
    func_00400090(sp8 / 13);
    temp_r3_2 = MULTU_HI(0x24924925, sp8);
    func_00400090((u32) (((u32) (sp8 - temp_r3_2) >> 1U) + temp_r3_2) >> 3U);
    func_00400090(sp8 / 15);
    func_00400090(sp8 >> 4U);
    func_00400090(sp8 / 17);
    func_00400090(sp8 / 18);
    temp_r3_3 = MULTU_HI(0xAF286BCB, sp8);
    func_00400090((u32) (((u32) (sp8 - temp_r3_3) >> 1U) + temp_r3_3) >> 4U);
    func_00400090(sp8 / 20);
    temp_r3_4 = MULTU_HI(0x86186187, sp8);
    func_00400090((u32) (((u32) (sp8 - temp_r3_4) >> 1U) + temp_r3_4) >> 4U);
    func_00400090(sp8 / 22);
    func_00400090(sp8 / 23);
    func_00400090(sp8 / 24);
    func_00400090(sp8 / 25);
    func_00400090(sp8 / 26);
    temp_r3_5 = MULTU_HI(0x2F684BDB, sp8);
    func_00400090((u32) (((u32) (sp8 - temp_r3_5) >> 1U) + temp_r3_5) >> 4U);
    temp_r3_6 = MULTU_HI(0x24924925, sp8);
    func_00400090((u32) (((u32) (sp8 - temp_r3_6) >> 1U) + temp_r3_6) >> 4U);
    func_00400090(sp8 / 29);
    func_00400090(sp8 / 30);
    temp_r3_7 = MULTU_HI(0x08421085, sp8);
    func_00400090((u32) (((u32) (sp8 - temp_r3_7) >> 1U) + temp_r3_7) >> 4U);
    func_00400090(sp8 >> 5U);
    func_00400090(sp8 / 33);
    func_00400090(sp8 / 100);
    func_00400090(sp8 / 255);
    temp_r3_8 = MULTU_HI(0x6C16C16D, sp8);
    func_00400090((u32) (((u32) (sp8 - temp_r3_8) >> 1U) + temp_r3_8) >> 8U);
    func_00400090(sp8 / 1000);
    func_00400090(sp8 / 10000);
    temp_r3_9 = MULTU_HI(0x4F8B588F, sp8);
    func_00400090((u32) (((u32) (sp8 - temp_r3_9) >> 1U) + temp_r3_9) >> 0x10U);
    func_00400090(sp8 / 1000000);
    func_00400090(sp8 / 10000000);
    func_00400090(sp8 / 100000000);
    func_00400090(sp8 >> 0x1EU);
    func_00400090((u32) MULTU_HI(-3, sp8) >> 0x1EU);
    temp_r3_10 = MULTU_HI(5, sp8);
    func_00400090((u32) (((u32) (sp8 - temp_r3_10) >> 1U) + temp_r3_10) >> 0x1EU);
    temp_r3_11 = MULTU_HI(3, sp8);
    func_00400090((u32) (((u32) (sp8 - temp_r3_11) >> 1U) + temp_r3_11) >> 0x1EU);
    func_00400090(MULTU_HI(2, sp8));
    temp_r3_12 = MULTU_HI(-3, sp8);
    func_00400090((u32) (((u32) (sp8 - temp_r3_12) >> 1U) + temp_r3_12) >> 0x1FU);
    temp_r3_13 = MULTU_HI(3, sp8);
    func_00400090((u32) (((u32) (sp8 - temp_r3_13) >> 1U) + temp_r3_13) >> 0x1FU);
    func_00400090(sp8 / 4294967294);
}
