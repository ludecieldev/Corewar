/*
** EPITECH PROJECT, 2024
** B_CPE_200_LIL_2_1_corewar_alexandre_garbe
** File description:
** aff.c
*/

#include "../../include/corewar.h"

int aff(corewar_t *corewar, parameter_t *param, champion_t *champ,
    process_t *process)
{
    int arg = get_arg(param->param[0], REG_T, process, corewar);

    my_putnbr(arg % 256);
    return 0;
}
