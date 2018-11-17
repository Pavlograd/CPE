/*
** EPITECH PROJECT, 2018
** my_str_isalpha
** File description:
** lib
*/

#include "lib.h"

int my_str_isalpha(char const *str)
{
    int i = 0;

    if (my_strlen(str) == 0)
        return (1);
    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] < 97 || str[i] > 122) && (str[i] < 65 || str[i] > 90))
            return (0);
    }
    return (1);
}
