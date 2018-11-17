/*
** EPITECH PROJECT, 2018
** my_put_nbr
** File description:
** lib
*/

#include "lib.h"

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
        my_put_nbr(nb);
    } else if (nb >= 10) {
        my_put_nbr(nb / 10);
        nb = nb % 10;
        my_put_nbr(nb);
    } else {
        my_putchar(48 + nb);
    }
}
