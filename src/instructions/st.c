/*
** EPITECH PROJECT, 2024
** B_CPE_200_LIL_2_1_corewar_alexandre_garbe
** File description:
** st.c
*/

#include "../../include/corewar.h"

int st_inst(corewar_t *corewar, parameter_t *param, champion_t *champ,
    process_t *process)
{
    int arg = get_arg(param->param[0], REG_T, process, corewar);

    if (get_param_type(param->param_info, 2, 3) == REG_T) {
        process->reg[param->param[1] % REG_NUMBER] = arg;
        return 0;
    }
    for (int i = 0; i < 4; i++)
        *((char *)(process->pc + param->param[1] % IDX_MOD + i)) =
            ((char *)&arg)[i];
    return 0;
}
