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
            write(1, "The player ", 11);
            my_putnbr(param->param[0]);
            write(1, "(", 1);
            write(1, corewar->champions[i]->name,
                my_strlen(corewar->champions[i]->name));
            write(1, ") is alive.\n", 12);
        }
    return 0;
}
