/*
** EPITECH PROJECT, 2018
** my_strcmp
** File description:
** lib
*/

#include "lib.h"

int my_strcmp(char const *s1, char const *s2)
{
    int z = my_strlen(s1);
    int y = my_strlen(s2);

    if (z < y) {
        return ( z - y);
    }
    else if (z > y) {
        return ( z - y);
    }
    else {
        return (0);
    }
}
