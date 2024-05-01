/*
** EPITECH PROJECT, 2024
** B_CPE_200_LIL_2_1_corewar_alexandre_garbe
** File description:
** struct.h
*/

#ifndef STRUCT_H
    #define STRUCT_H
    #include "corewar.h"

typedef struct process {
    void *pc;
    void *reg[REG_NUMBER];
    _Bool carry;
} process_t;

typedef struct champion {
    u_int id;
    char *name;
    u_int process_nb;
    process_t **process;
} champion_t;

typedef struct corewar {
    u_int champ_nb;
    champion_t **champions;
    size_t cycle;
    u_char mem[MEM_SIZE];
} corewar_t;

#endif
