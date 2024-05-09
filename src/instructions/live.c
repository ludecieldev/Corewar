/*
** EPITECH PROJECT, 2024
** B_CPE_200_LIL_2_1_corewar_alexandre_garbe
** File description:
** live.c
*/

#include "../../include/corewar.h"

int live(corewar_t *corewar, parameter_t *param, champion_t *champ,
    process_t *process)
{
    for (int i = 0; i < corewar->champ_nb; i++)
        if (param->param[0] == corewar->champions[i]->id) {
            corewar->champions[i]->last_live = corewar->cycle;
            corewar->live_nb++;
        }
    if (corewar->live_nb == NBR_LIVE) {
        corewar->live_nb = 0;
        corewar->cycle_to_die -= CYCLE_DELTA;
    }
    return 0;
}
