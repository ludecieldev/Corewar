/*
** EPITECH PROJECT, 2024
** B_CPE_200_LIL_2_1_corewar_alexandre_garbe
** File description:
** ld.c
*/

#include "../../include/corewar.h"

int ld_inst(corewar_t *corewar, parameter_t *param, champion_t *champ,
    process_t *process)
{
    int arg = get_arg(param->param[0], get_param_type(param->param_info,
        1, 2), process, corewar);

    process->reg[param->param[1] - 1] = arg;
    if (arg == 0)
        process->carry = 1;
    if (arg != 0)
        process->carry = 0;
    return 0;
}

int lld(corewar_t *corewar, parameter_t *param, champion_t *champ,
    process_t *process)
{
    int arg = get_arg_no_mod(param->param[0],
        get_param_type(param->param_info, 1, 2), process, corewar);

    process->reg[param->param[1] - 1] = arg;
    if (arg == 0)
        process->carry = 1;
    if (arg != 0)
        process->carry = 0;
    return 0;
}
