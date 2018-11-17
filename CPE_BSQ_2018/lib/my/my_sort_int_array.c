/*
** EPITECH PROJECT, 2018
** my_sort_int_array
** File description:
** lib
*/

#include "lib.h"

void my_sort_int_array(int *tab, int size)
{
    int i = 0;
    int temp = 1;

    while (temp == 1) {
        temp = 0;
        for (i = 0; i < size - 1; i++) {
            if (tab[i] > tab[i + 1]) {
                my_swap(&tab[i], &tab[i + 1]);
                temp++;
            }
        }
    }
}
