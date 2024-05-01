/*
** EPITECH PROJECT, 2024
** B_CPE_200_LIL_2_1_corewar_alexandre_garbe
** File description:
** main.c
*/

#include "../include/corewar.h"

int main(int ac, char **av)
{
    parsing_t *parse = parsing(ac, av);
    corewar_t *corewar;

    if (parse->error == 84) {
        free_parsing(parse);
        return 84;
    }
    corewar = setup_corewar(parse);
    if (!corewar) {
        free_parsing(parse);
        return 84;
    }
    write(1, corewar->mem, MEM_SIZE);
    free_parsing(parse);
    return 0;
}
