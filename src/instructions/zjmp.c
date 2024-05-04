/*
** EPITECH PROJECT, 2024
** B_CPE_200_LIL_2_1_corewar_alexandre_garbe
** File description:
** zjmp.c
*/

#include "../../include/corewar.h"

int zjmp(corewar_t *corewar, parameter_t *param, champion_t *champ,
    process_t *process)
{
    if (process->carry == 0)
        return 0;
    process->pc = process->pc + param->param[0] % IDX_MOD;
    return 0;
}
