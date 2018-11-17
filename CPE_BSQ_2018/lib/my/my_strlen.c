/*
** EPITECH PROJECT, 2018
** my_strlen
** File description:
** task03
*/

#include <stdio.h>
#include <unistd.h>
#include "lib.h"

int my_strlen(char const *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++);
    return (i);
}
