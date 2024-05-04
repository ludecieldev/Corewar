/*
** EPITECH PROJECT, 2024
** B_CPE_200_LIL_2_1_corewar_alexandre_garbe
** File description:
** struct.h
*/

#ifndef STRUCT_H
    #define STRUCT_H
    #include "corewar.h"

typedef int reg_t;

typedef struct process {
    void *pc;
    reg_t reg[REG_NUMBER];
    _Bool carry;
    u_int sleep;
} process_t;

typedef struct champion {
    u_int id;
    char name[PROG_NAME_LENGTH + 1];
    char *champ_code;
    size_t champ_code_len;
    u_int process_nb;
    process_t *process[50];
    size_t last_live;
} champion_t;

typedef struct corewar {
    u_int champ_nb;
    champion_t **champions;
    size_t cycle;
    char mem[MEM_SIZE];
} corewar_t;

typedef struct parsing {
    int error;
    char *champion_path[4];
    int dump_flag;
} parsing_t;

typedef struct parameter {
    int param[3];
    u_char param_info;
} parameter_t;

#endif
