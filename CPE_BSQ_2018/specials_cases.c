/*
** EPITECH PROJECT, 2018
** specials_cases
** File description:
** BSQ
*/

#include <stdlib.h>
#include "include/my.h"

int first_square(char **map, int nb_rows, int nb_cols)
{
    int i = 0;

    for (; i < nb_cols; i++) {
        if (map[0][i] == '.') {
            map = change_square(map, 0, i, 1);
            disp_square(map, nb_rows);
            free_array(map, nb_rows);
            exit(0);
        }
    }
    disp_square(map, nb_rows);
    free_array(map, nb_rows);
    exit(0);
}

int empty_rectangle(char **map, int nb_rows, int nb_cols)
{
    int i = 0;

    for (; i < nb_rows; i++) {
        for (int j = 0; j < nb_cols; j++) {
            if (map[i][j] == 'o')
                return (0);
        }
    }
    if (nb_rows == 1)
        return (0);
    if (nb_rows >= nb_cols)
        map = change_square(map, 0, 0, nb_cols - 1);
    if (nb_cols > nb_rows)
        map = change_square(map, 0, 0, nb_rows);
    disp_square(map, nb_rows);
    free_array(map, nb_rows);
    exit(0);
}
