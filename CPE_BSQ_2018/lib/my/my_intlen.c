/*
** EPITECH PROJECT, 2018
** my_intlen
** File description:
** eval_expr
*/

#include "lib.h"

int my_intlen(int nb)
{
    int i = 0;

    if (nb <= 0) {
        nb *= -1;
        i++;
    }
    for (i; nb > 0; i++)
        nb /= 10;
    return i;
}
