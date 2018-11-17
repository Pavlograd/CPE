/*
** EPITECH PROJECT, 2018
** my_str_isnum
** File description:
** lib
*/

#include "lib.h"

int my_str_isnum(char const *str)
{
    int i = 0;

    if (my_strlen(str) == 0)
        return (1);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] < 48 || str[i] > 9)
            return (0);
    }
    return (1);
}
