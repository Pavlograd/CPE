/*
** EPITECH PROJECT, 2018
** my_swap
** File description:
** task01
*/

#include <stdio.h>
#include <unistd.h>
#include "lib.h"

void my_swap(int *a, int *b)
{
    int c = *a;

    *a = *b;
    *b = c;
}
