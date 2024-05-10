/*
** EPITECH PROJECT, 2024
** B_CPE_200_LIL_2_1_corewar_alexandre_garbe
** File description:
** and_or_xor.c
*/

#include "../../include/corewar.h"

int and_inst(corewar_t *corewar, parameter_t *param, champion_t *champ,
    process_t *process)
{
    int arg1 = get_arg(param->param[0], get_param_type(param->param_info, 1,
        6), process, corewar);
    int arg2 = get_arg(param->param[1], get_param_type(param->param_info, 2,
        6), process, corewar);
    int result = arg1 & arg2;

    if (result == 0)
        process->carry = 1;
    else
        process->carry = 0;
    process->reg[param->param[2] % REG_NUMBER - 1] = result;
    return 0;
}

int or_inst(corewar_t *corewar, parameter_t *param, champion_t *champ,
    process_t *process)
{
    int arg1 = get_arg(param->param[0], get_param_type(param->param_info, 1,
        7), process, corewar);
    int arg2 = get_arg(param->param[1], get_param_type(param->param_info, 2,
        7), process, corewar);
    int result = arg1 | arg2;

    if (result == 0)
        process->carry = 1;
    else
        process->carry = 0;
    process->reg[param->param[2] % REG_NUMBER - 1] = result;
    return 0;
}

int xor_inst(corewar_t *corewar, parameter_t *param, champion_t *champ,
    process_t *process)
{
    int arg1 = get_arg(param->param[0], get_param_type(param->param_info, 1,
        8), process, corewar);
    int arg2 = get_arg(param->param[1], get_param_type(param->param_info, 2,
        8), process, corewar);
    int result = arg1 ^ arg2;

    if (result == 0)
        process->carry = 1;
    else
        process->carry = 0;
    process->reg[param->param[2] % REG_NUMBER - 1] = result;
    return 0;
}
