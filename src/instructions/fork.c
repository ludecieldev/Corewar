/*
** EPITECH PROJECT, 2024
** B_CPE_200_LIL_2_1_corewar_alexandre_garbe
** File description:
** fork.c
*/

#include "../../include/corewar.h"

static process_t *dup_process(process_t *to_dup, void *pc, int id)
{
    process_t *process = init_process(id, pc);

    for (int i = 0; i < REG_NUMBER; i++)
        process->reg[i] = to_dup->reg[i];
    process->carry = to_dup->carry;
    return process;
}

int my_fork(corewar_t *corewar, parameter_t *param, champion_t *champ,
    process_t *process)
{
    int i = 0;

    for (; champ->process[i]; i++);
    champ->process[i] = dup_process(process, process->pc +
        param->param[0] % IDX_MOD, (int)champ->id);
    return 0;
}

int lfork(corewar_t *corewar, parameter_t *param, champion_t *champ,
    process_t *process)
{
    int i = 0;

    for (; champ->process[i]; i++);
    champ->process[i] = dup_process(process, process->pc +
        param->param[0], (int)champ->id);
    return 0;
}
