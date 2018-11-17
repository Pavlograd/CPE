/*
** EPITECH PROJECT, 2018
** my_str_isupper
** File description:
** lib
*/

#include <unistd.h>
#include "lib.h"

int my_str_isupper(char const *str)
{
    int i = 0;

    if (my_strlen(str) == 0)
        return (1);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] < 65 || str[i] > 90)
            return (0);
    }
    return (1);
}
