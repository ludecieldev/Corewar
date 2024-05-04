/*
** EPITECH PROJECT, 2024
** B_CPE_200_LIL_2_1_corewar_alexandre_garbe
** File description:
** sti.c
*/

#include "../../include/corewar.h"

int sti(corewar_t *corewar, parameter_t *param, champion_t *champ,
    process_t *process)
{
    int arg1 = get_arg(param->param[1], get_param_type(param->param_info,
        2, 11), process, corewar);
    int arg2 = get_arg(param->param[2], get_param_type(param->param_info,
        3, 11), process, corewar);
    int result = arg1 + arg2;

    if (result == 0)
        process->carry = 1;
    else
        process->carry = 0;
    for (int i = 0; i < REG_SIZE; i++)
        *((char *)process->pc + result % IDX_MOD + i) =
            *((char *)&process->reg[param->param[0]]);
    return 0;
}
