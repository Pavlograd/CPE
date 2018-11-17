/*
** EPITECH PROJECT, 2018
** my_strcapitalize
** File description:
** lib
*/

#include "lib.h"

char *my_strcapitalize(char *str)
{
    int temp = 0;

    if (str[0] > 96 && str[temp] < 123)
        str[0] = str[0] - 32;
    for (temp = 0; str[temp] != '\0'; temp++) {
        if ((str[temp - 1] == ' ') && (str[temp] > 96 && str[temp] < 123))
            str[temp] = str[temp] - 32;
        if ((str[temp - 1] == '+') && (str[temp] > 96 && str[temp] < 123))
            str[temp] = str[temp] - 32;
        if ((str[temp - 1] == '-') && (str[temp] > 96 && str[temp] < 123))
            str[temp] = str[temp] - 32;
    }
    return (0);
}
