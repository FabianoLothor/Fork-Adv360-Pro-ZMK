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
│ L_CAPS L_DK_1 L_DK_2 L_DK_3 L_DK_4 L_DK_5 L_R1C7 │ R_R1C7 L_DK_6 L_DK_7 L_DK_8 L_DK_9 L_DK_0 R_CAPS │
│ LK_TAB L_DKSQ L_DKCO L_DKDO L_DK_P L_DK_Y L_R2C7 │ R_R2C7 L_DK_F L_DK_G L_DK_C L_DK_R L_DK_L RK_TAB │
│ LK_ESC L_DK_A L_DK_O L_DK_E L_DK_U L_DK_I L_R3C7 │ R_R3C7 L_DK_D L_DK_H L_DK_T L_DK_N L_DK_S RK_ESC │
│ LSHIFT L_DKSC L_DK_Q L_DK_J L_DK_K L_DK_X ╭──────┴──────╮ L_DK_B L_DK_M L_DK_W L_DK_V L_DK_Z RSHIFT │
│ L_FUNC L_R5C2 L_R5C3 L_R5C4 L_R5C5 ╭──────╯             ╰──────╮ R_R5C5 R_R5C4 R_R5C3 R_R5C2 R_FUNC │
╰──────────────────────────────────┬─┴─────────────┬─────────────┴─┬──────────────────────────────────╯
                            ╭──────╯ L_CTRL LK_ALT │ RK_ALT R_CTRL ╰──────╮
                            │ L_BSPC LK_DEL L_HOME │ R_PGUP RENTER RK_SPC │
                            ╰─────────────╮ LK_END │ R_PGDW ╭─────────────╯
                                          ╰────────┴────────╯
*/

// > LEFT ROW 1

#define L_DK_1 1
#define L_DK_2 2
#define L_DK_3 3
#define L_DK_4 4
#define L_DK_5 5

// > RIGHT ROW 1

#define R_DK_6 8
#define R_DK_7 9
#define R_DK_8 10
#define R_DK_9 11
#define R_DK_0 12

// > LEFT ROW 2

#define L_DKSQ 15
#define L_DKCO 16
#define L_DKDO 17
#define L_DK_P 18
#define L_DK_Y 19

// > RIGHT ROW 2

#define R_DK_F 22
#define R_DK_G 23
#define R_DK_C 24
#define R_DK_R 25
#define R_DK_L 26

// > LEFT ROW 3

#define L_DK_A 29
#define L_DK_O 30
#define L_DK_E 31
#define L_DK_U 32
#define L_DK_I 33

// > RIGHT ROW 3

#define R_DK_D 36
#define R_DK_H 37
#define R_DK_T 38
#define R_DK_N 39
#define R_DK_S 40

// > LEFT ROW 4

#define L_DKSC 43
#define L_DK_Q 44
#define L_DK_J 45
#define L_DK_K 46
#define L_DK_X 47

// > RIGHT ROW 4

#define R_DK_B 48
#define R_DK_M 49
#define R_DK_W 50
#define R_DK_V 51
#define R_DK_Z 52
