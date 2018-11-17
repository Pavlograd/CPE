/*
** EPITECH PROJECT, 2018
** my_getnbr
** File description:
** return number send to the function as a string
*/

#include "lib.h"

int neg(char const *str, int nbr)
{
    for (int i = 0; str[i] == '-' || str[i] == '+'; i++) {
        if (str[i] == '-') {
            nbr *= -1;
        }
    }
    return (nbr);
}

int my_getnbr(char const *str)
{
    int nbr = 0;
    int i = 0;

    for (; str[i] < '0' || str[i] > '9'; i++);
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            nbr *= 10;
            nbr += str[i] - '0';
            i++;
        } else {
            break;
        }
    }
    nbr = neg(str, nbr);
    return (nbr);
}
