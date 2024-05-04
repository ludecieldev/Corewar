/*
** EPITECH PROJECT, 2024
** B_CPE_200_LIL_2_1_corewar_alexandre_garbe
** File description:
** get_args.c
*/

#include "../../include/corewar.h"

static _Bool is_dir(int param_info, int param_nb)
{
    if (param_nb == 1 && (param_info & P1_DIR) == P1_DIR)
        return 1;
    if (param_nb == 2 && (param_info & P2_DIR) == P2_DIR)
        return 1;
    if (param_nb == 1 && (param_info & P3_DIR) == P3_DIR)
        return 1;
    return 0;
}

static _Bool is_ind(int param_info, int param_nb)
{
    if (param_nb == 1 && (param_info & P1_IND) == P1_IND)
        return 1;
    if (param_nb == 2 && (param_info & P2_IND) == P2_IND)
        return 1;
    if (param_nb == 3 && (param_info & P3_IND) == P3_IND)
        return 1;
    return 0;
}

char get_param_type(int param_info, int param_nb, int instruction)
{
    if (is_ind(param_info, param_nb))
        return T_IND;
    if (is_dir(param_info, param_nb) && IS_2BYTES_DIR(instruction))
        return T_DIR2;
    if (is_dir(param_info, param_nb))
        return T_DIR;
    return T_REG;
}

int get_arg(int param, char type, process_t *process, corewar_t *corewar)
{
    int *data;
    short *data_s;

    if (type == T_REG)
        return process->reg[(param - 1) % REG_NUMBER];
    if (type == T_IND) {
        data = (int *)(process->pc + param % IDX_MOD);
        return *data;
    }
    if (type == T_DIR)
        return param;
    data_s = (short *)(process->pc + param % IDX_MOD);
    return *data_s;
}

int get_arg_no_mod(int param, char type, process_t *process,
    corewar_t *corewar)
{
    int *data;
    short *data_s;

    if (type == T_REG)
        return process->reg[(param - 1) % REG_NUMBER];
    if (type == T_IND) {
        data = (int *) (process->pc + param);
        return *data;
    }
    if (type == T_DIR)
        return param;
    data_s = (short *) (process->pc + param);
    return *data_s;
}
