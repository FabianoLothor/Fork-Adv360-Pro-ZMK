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
│ L_CAPS L_QY_1 L_QY_2 L_QY_3 L_QY_4 L_QY_5 L_R1C7 │ R_R1C7 L_QY_6 L_QY_7 L_QY_8 L_QY_9 L_QY_0 R_CAPS │
│ LK_TAB L_QY_Q L_QY_W L_QY_E L_QY_R L_QY_T L_R2C7 │ R_R2C7 L_QY_Y L_QY_U L_QY_I L_QY_O L_QY_P RK_TAB │
│ LK_ESC L_QY_A L_QY_S L_QY_D L_QY_F L_QY_G L_R3C7 │ R_R3C7 L_QY_H L_QY_J L_QY_K L_QY_L L_QYSC RK_ESC │
│ LSHIFT L_QY_Z L_QY_X L_QY_C L_QY_V L_QY_B ╭──────┴──────╮ L_QY_N L_QY_M L_QYCO L_QYDO L_QYSL RSHIFT │
│ L_FUNC L_R5C2 L_R5C3 L_R5C4 L_R5C5 ╭──────╯             ╰──────╮ R_R5C5 R_R5C4 R_R5C3 R_R5C2 R_FUNC │
╰──────────────────────────────────┬─┴─────────────┬─────────────┴─┬──────────────────────────────────╯
                            ╭──────╯ L_CTRL LK_ALT │ RK_ALT R_CTRL ╰──────╮
                            │ L_BSPC LK_DEL L_HOME │ R_PGUP RENTER RK_SPC │
                            ╰─────────────╮ LK_END │ R_PGDW ╭─────────────╯
                                          ╰────────┴────────╯
*/

// > LEFT ROW 1

#define L_QY_1 1
#define L_QY_2 2
#define L_QY_3 3
#define L_QY_4 4
#define L_QY_5 5

// > RIGHT ROW 1

#define R_QY_6 8
#define R_QY_7 9
#define R_QY_8 10
#define R_QY_9 11
#define R_QY_0 12

// > LEFT ROW 2

#define L_QY_Q 15
#define L_QY_W 16
#define L_QY_E 17
#define L_QY_R 18
#define L_QY_T 19

// > RIGHT ROW 2

#define R_QY_Y 22
#define R_QY_U 23
#define R_QY_I 24
#define R_QY_O 25
#define R_QY_P 26

// > LEFT ROW 3

#define L_QY_A 29
#define L_QY_S 30
#define L_QY_D 31
#define L_QY_F 32
#define L_QY_G 33

// > RIGHT ROW 3

#define R_QY_H 36
#define R_QY_J 37
#define R_QY_K 38
#define R_QY_L 39
#define R_QYSC 40

// > LEFT ROW 4

#define L_QY_Z 43
#define L_QY_X 44
#define L_QY_C 45
#define L_QY_V 46
#define L_QY_B 47

// > RIGHT ROW 4

#define R_QY_N 48
#define R_QY_M 49
#define R_QYCO 50
#define R_QYDO 51
#define R_QYSL 52
