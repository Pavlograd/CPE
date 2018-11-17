/*
** EPITECH PROJECT, 2018
** my_strlowcase
** File description:
** lib
*/

#include "lib.h"

char *my_strlowcase(char *str)
{
    int i = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] = str[i] + 32;
    }
    return str;
}
