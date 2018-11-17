/*
** EPITECH PROJECT, 2018
** map_print
** File description:
** BSQ
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include "./include/my.h"

int disp_square(char **map, int nb_rows)
{
    for (int i = 0; i < nb_rows; i++) {
        my_putstr(map[i]);
    }
    return (0);
}

char **change_square(char **map, int row, int col, int square_size)
{
    int i = 0;

    for (; i < square_size; i++) {
        for (int j = 0; j < square_size; j++) {
            map[row + i][col + j] = 'x';
        }
    }
    return map;
}

int is_square_of_size(char **map, int row, int col, int square_size)
{
    int i = 0;

    for (; i < square_size; i++) {
        for (int j = 0; j < square_size; j++) {
            if (map[row + i][col + j] != '.')
                return (0);
        }
    }
    return (1);
}
