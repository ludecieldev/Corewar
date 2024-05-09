/*
** EPITECH PROJECT, 2024
** B_CPE_200_LIL_2_1_corewar_alexandre_garbe
** File description:
** get_adress.c
*/

#include "../../include/corewar.h"

char *get_address(char *mem, char const *address)
{
    return mem + ((address - mem) % MEM_SIZE);
}
