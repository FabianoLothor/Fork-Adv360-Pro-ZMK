#pragma once

/*
                                           ADV360 KEY MATRIX
╭──────────────────────────────────────────────────┬──────────────────────────────────────────────────╮
│      0      1      2      3      4      5      6 │      7      8      9     10     11     12     13 │
│     14     15     16     17     18     19     20 │     21     22     23     24     25     26     27 │
│     28     29     30     31     32     33     34 │     35     36     37     38     39     40     41 │
│     42     43     44     45     46     47 ╭──────┴──────╮     48     49     50     51     52     53 │
│     54     55     56     57     58 ╭──────╯             ╰──────╮     59     60     61     62     63 │
╰──────────────────────────────────┬─┴─────────────┬─────────────┴─┬──────────────────────────────────╯
                            ╭──────╯     64     65 │     66     67 ╰──────╮
                            │     68     69     70 │     71     72     73 │
                            ╰─────────────╮     74 │     75 ╭─────────────╯
                                          ╰────────┴────────╯
*/

/*
                                          BASE LAYOUT MAPPING
╭──────────────────────────────────────────────────┬──────────────────────────────────────────────────╮
│ L_CAPS L_CK_1 L_CK_2 L_CK_3 L_CK_4 L_CK_5 L_R1C7 │ R_R1C7 L_CK_6 L_CK_7 L_CK_8 L_CK_9 L_CK_0 R_CAPS │
│ LK_TAB L_CK_Q L_CK_W L_CK_F L_CK_P L_CK_B L_R2C7 │ R_R2C7 L_CK_J L_CK_L L_CK_U L_CK_Y L_CKSC RK_TAB │
│ LK_ESC L_CK_A L_CK_R L_CK_S L_CK_T L_CK_G L_R3C7 │ R_R3C7 L_CK_M L_CK_N L_CK_E L_CK_I L_CK_O RK_ESC │
│ LSHIFT L_CK_Z L_CK_X L_CK_C L_CK_D L_CK_V ╭──────┴──────╮ L_CK_K L_CK_H L_CKCO L_CKDO L_CKSL RSHIFT │
│ L_FUNC L_R5C2 L_R5C3 L_R5C4 L_R5C5 ╭──────╯             ╰──────╮ R_R5C5 R_R5C4 R_R5C3 R_R5C2 R_FUNC │
╰──────────────────────────────────┬─┴─────────────┬─────────────┴─┬──────────────────────────────────╯
                            ╭──────╯ L_CTRL LK_ALT │ RK_ALT R_CTRL ╰──────╮
                            │ L_BSPC LK_DEL L_HOME │ R_PGUP RENTER RK_SPC │
                            ╰─────────────╮ LK_END │ R_PGDW ╭─────────────╯
                                          ╰────────┴────────╯
*/

// > LEFT ROW 1

#define L_CK_1 1
#define L_CK_2 2
#define L_CK_3 3
#define L_CK_4 4
#define L_CK_5 5

// > RIGHT ROW 1

#define R_CK_6 8
#define R_CK_7 9
#define R_CK_8 10
#define R_CK_9 11
#define R_CK_0 12

// > LEFT ROW 2

#define L_CK_Q 15
#define L_CK_W 16
#define L_CK_F 17
#define L_CK_P 18
#define L_CK_B 19

// > RIGHT ROW 2

#define R_CK_J 22
#define R_CK_L 23
#define R_CK_U 24
#define R_CK_Y 25
#define R_CKSC 26

// > LEFT ROW 3

#define L_CK_A 29
#define L_CK_R 30
#define L_CK_S 31
#define L_CK_T 32
#define L_CK_G 33

// > RIGHT ROW 3

#define R_CK_M 36
#define R_CK_N 37
#define R_CK_E 38
#define R_CK_I 39
#define R_CK_O 40

// > LEFT ROW 4

#define L_CK_Z 43
#define L_CK_X 44
#define L_CK_C 45
#define L_CK_D 46
#define L_CK_V 47

// > RIGHT ROW 4

#define R_CK_K 48
#define R_CK_H 49
#define R_CKCO 50
#define R_CKDO 51
#define R_CKSL 52
