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
│ L_R1C1 L_R1C2 L_R1C3 L_R1C4 L_R1C5 L_R1C6 L_R1C7 │ R_R1C7 R_R1C6 R_R1C5 R_R1C4 R_R1C3 R_R1C2 R_R1C1 │
│ L_R2C1 L_R2C2 L_R2C3 L_R2C4 L_R2C5 L_R2C6 L_R2C7 │ R_R2C7 R_R2C6 R_R2C5 R_R2C4 R_R2C3 R_R2C2 R_R2C1 │
│ L_R3C1 L_R3C2 L_R3C3 L_R3C4 L_R3C5 L_R3C6 L_R3C7 │ R_R3C7 R_R3C6 R_R3C5 R_R3C4 R_R3C3 R_R3C2 R_R3C1 │
│ L_R4C1 L_R4C2 L_R4C3 L_R4C4 L_R4C5 L_R4C6 ╭──────┴──────╮ R_R4C6 R_R4C5 R_R4C4 R_R4C3 R_R4C2 R_R4C1 │
│ L_R5C1 L_R5C2 L_R5C3 L_R5C4 L_R5C5 ╭──────╯             ╰──────╮ R_R5C5 R_R5C4 R_R5C3 R_R5C2 R_R5C1 │
╰──────────────────────────────────┬─┴─────────────┬─────────────┴─┬──────────────────────────────────╯
                            ╭──────╯ L_R6C6 L_R6C7 │ R_R6C7 R_R6C6 ╰──────╮
                            │ L_R7C5 L_R7C6 L_R7C7 │ R_R7C7 R_R7C6 R_R7C5 │
                            ╰─────────────╮ L_R8C7 │ R_R8C7 ╭─────────────╯
                                          ╰────────┴────────╯
*/

/*
                                            SPECIAL MAPPING
╭──────────────────────────────────────────────────┬──────────────────────────────────────────────────╮
│ L_CAPS L_R1C2 L_R1C3 L_R1C4 L_R1C5 L_R1C6 L_R1C7 │ R_R1C7 R_R1C6 R_R1C5 R_R1C4 R_R1C3 R_R1C2 R_CAPS │
│ LK_TAB L_R2C2 L_R2C3 L_R2C4 L_R2C5 L_R2C6 L_R2C7 │ R_R2C7 R_R2C6 R_R2C5 R_R2C4 R_R2C3 R_R2C2 RK_TAB │
│ LK_ESC L_R3C2 L_R3C3 L_R3C4 L_R3C5 L_R3C6 L_R3C7 │ R_R3C7 R_R3C6 R_R3C5 R_R3C4 R_R3C3 R_R3C2 RK_ESC │
│ LSHIFT L_R4C2 L_R4C3 L_R4C4 L_R4C5 L_R4C6 ╭──────┴──────╮ R_R4C6 R_R4C5 R_R4C4 R_R4C3 R_R4C2 RSHIFT │
│ L_FUNC L_R5C2 L_R5C3 L_R5C4 L_R5C5 ╭──────╯             ╰──────╮ R_R5C5 R_R5C4 R_R5C3 R_R5C2 R_FUNC │
╰──────────────────────────────────┬─┴─────────────┬─────────────┴─┬──────────────────────────────────╯
                            ╭──────╯ L_CTRL LK_ALT │ RK_ALT R_CTRL ╰──────╮
                            │ L_BSPC LK_DEL L_HOME │ R_PGUP RENTER RK_SPC │
                            ╰─────────────╮ LK_END │ R_PGDW ╭─────────────╯
                                          ╰────────┴────────╯
*/

// > LEFT SPECIAL KEYS

#define L_CAPS 0
#define LK_TAB 14
#define LK_ESC 28
#define LSHIFT 42
#define L_FUNC 54

#define L_CTRL 64
#define LK_ALT 65

#define L_BSPC 68
#define LK_DEL 69

#define L_HOME 70
#define LK_END 74

// > RIGHT SPECIAL KEYS

#define R_CAPS 13
#define RK_TAB 27
#define RK_ESC 41
#define RSHIFT 53
#define R_FUNC 63

#define RK_ALT 66
#define R_CTRL 67

#define RENTER 72
#define RK_SPC 73

#define R_PGUP 71
#define R_PGDW 75

// > LEFT ROW 1

#define L_R1C1 0
#define L_R1C2 1
#define L_R1C3 2
#define L_R1C4 3
#define L_R1C5 4
#define L_R1C6 5
#define L_R1C7 6

// > RIGHT ROW 1

#define R_R1C7 7
#define R_R1C6 8
#define R_R1C5 9
#define R_R1C4 10
#define R_R1C3 11
#define R_R1C2 12
#define R_R1C1 13

// > LEFT ROW 2

#define L_R2C1 14
#define L_R2C2 15
#define L_R2C3 16
#define L_R2C4 17
#define L_R2C5 18
#define L_R2C6 19
#define L_R2C7 20

// > RIGHT ROW 2

#define R_R2C7 21
#define R_R2C6 22
#define R_R2C5 23
#define R_R2C4 24
#define R_R2C3 25
#define R_R2C2 26
#define R_R2C1 27

// > LEFT ROW 3

#define L_R3C1 28
#define L_R3C2 29
#define L_R3C3 30
#define L_R3C4 31
#define L_R3C5 32
#define L_R3C6 33
#define L_R3C7 34

// > RIGHT ROW 3

#define R_R3C7 35
#define R_R3C6 36
#define R_R3C5 37
#define R_R3C4 38
#define R_R3C3 39
#define R_R3C2 40
#define R_R3C1 41

// > LEFT ROW 4

#define L_R4C1 42
#define L_R4C2 43
#define L_R4C3 44
#define L_R4C4 45
#define L_R4C5 46
#define L_R4C6 47

// > RIGHT ROW 4

#define R_R4C6 48
#define R_R4C5 49
#define R_R4C4 50
#define R_R4C3 51
#define R_R4C2 52
#define R_R4C1 53

// > LEFT ROW 5

#define L_R5C1 54
#define L_R5C2 55
#define L_R5C3 56
#define L_R5C4 57
#define L_R5C5 58

// > RIGHT ROW 5

#define R_R5C5 59
#define R_R5C4 60
#define R_R5C3 61
#define R_R5C2 62
#define R_R5C1 63

// > LEFT ROW 6

#define L_R6C6 64
#define L_R6C7 65

// > RIGHT ROW 6

#define R_R6C7 66
#define R_R6C6 67

// > LEFT ROW 7

#define L_R7C5 68
#define L_R7C6 69
#define L_R7C7 70

// > RIGHT ROW 7

#define R_R7C7 71
#define R_R7C6 72
#define R_R7C5 73

// > LEFT ROW 8

#define L_R8C7 74

// > RIGHT ROW 8

#define R_R8C7 75
