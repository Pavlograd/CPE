/*
** EPITECH PROJECT, 2018
** my_compute_square_root
** File description:
** task05
*/

#include "lib.h"

int my_compute_square_root(int nb)
{
    int i = 1;
    int j;

    if (nb < 0) {
        return (0);
    } else {
        while (j != nb) {
            j = i * i;
            i++;
            if (j > nb) {
                return (0);
            }
        }
        i--;
    }
    return (i);
}
