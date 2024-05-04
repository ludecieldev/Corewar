/*
** EPITECH PROJECT, 2024
** B_CPE_200_LIL_2_1_corewar_alexandre_garbe
** File description:
** corewar.h
*/

#ifndef COREWAR_H
    #define COREWAR_H
    #include "op.h"
    #include "../lib/lib.h"
    #include "macros.h"
    #include "struct.h"
    #include "parsing.h"
    #include "instructions.h"
    #include "arguments.h"

static int (*instructions[17])(corewar_t *corewar, parameter_t *param,
    champion_t *champ, process_t *process) =
    {0, &live, &ld_inst, &st_inst, &add, &sub, &and_inst, &or_inst, &xor_inst,
    &zjmp, &ldi, &sti, &my_fork, &lld, &lldi, &lfork, &aff};

#endif
