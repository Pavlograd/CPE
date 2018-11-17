/*
** EPITECH PROJECT, 2018
** my_is_prime
** File description:
** lib
*/

#include "lib.h"

int my_is_prime(int nb)
{
    int i = 3;

    if (nb == 0 || nb == 1)
        return (0);
    if ((nb % 2 == 0) && (nb != 2))
        return (0);
    for (i = 3; i * i <= nb; i = i + 2) {
        if (nb % i == 0)
            return (0);
    }
    return (1);
}
