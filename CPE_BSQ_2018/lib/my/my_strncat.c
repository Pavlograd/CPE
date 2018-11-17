/*
** EPITECH PROJECT, 2018
** my_strncat
** File description:
** lib
*/

#include "lib.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int len = my_strlen(dest);

    for (i = 0; i < nb && src[i] != '\0'; i++) {
        dest[len + i] = src[i];
    }
    dest[len + i] = '\0';
    return dest;
}
