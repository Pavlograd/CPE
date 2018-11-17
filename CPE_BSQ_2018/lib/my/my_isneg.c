/*
** EPITECH PROJECT, 2018
** my_isneg.c
** File description:
** task04
*/

#include <stdio.h>
#include <unistd.h>
#include "lib.h"

int my_isneg(int n)
{
    char N = 'N';
    char P = 'P';

    if (n < 0)
    {
        my_putchar(N);
    } else {
        my_putchar(P);
    }
    return (0);
}
