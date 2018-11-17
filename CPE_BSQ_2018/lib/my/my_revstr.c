/*
** EPITECH PROJECT, 2018
** my_revstr
** File description:
** lib
*/

#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

char *my_revstr(char *str)
{
    int incretion = 0;
    int decretion = my_strlen(str) - 1;
    char *src = str;

    while (decretion > incretion) {
        str[incretion] = str[decretion];
        str[decretion] = *src;
        incretion++;
        decretion--;
    }
    return src;
}
