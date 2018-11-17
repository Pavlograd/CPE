/*
** EPITECH PROJECT, 2018
** load_file_in_mem
** File description:
** bootstrap BSQ
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include "./include/my.h"

int the_bug(int nb_rows)
{
    int nb = nb_rows;

    if (nb_rows == 1)
        return (nb);
    if (nb_rows < 50)
        return (nb - 3);
    if (nb_rows <= 100)
        return (nb - 3);
    if (nb_rows <= 150)
        return (nb - 6);
    if (nb_rows <= 1000)
        return (nb - 6);
    if (nb_rows <= 3000)
        return (nb - 10);
    if (nb_rows > 3000)
        exit(84);
}

int *biggest_size(char **map, int nb_rows, int nb_cols)
{
    int i = 0;
    int *size = malloc(sizeof(int) * 4);
    int nb = the_bug(nb_rows);

    if (nb_rows == 1 )
        first_square(map, nb_rows, nb_cols);
    for (; i < nb; i++) {
        for (int j = 0; j < nb_cols; j++) {
            if (find_biggest_square(map, i, j) > size[2]) {
                size[0] = i;
                size[1] = j;
                size[2] = find_biggest_square(map, i, j);
            }
        }
    }
    if (is_square_of_size(map, size[0], size[1], size[2]) == 1) {
        map = change_square(map, size[0], size[1], size[2]);
        disp_square(map, nb_rows);
    }
    free(size);
}

int find_biggest_square(char **map, int row, int col)
{
    int i = 0;

    if (row < 0 || col < 0)
        exit(84);
    if (map[row][col] != '.')
        return (0);
    for (; map[row][col + i] == '.'; i++);
    for (; is_square_of_size(map, row, col, i) != 1; i--);
    return (i);
}

char **load_2d_arr_from_file(char const *filepath, int nb_rows, int nb_cols)
{
    int i = 0;
    int x = my_intlen(nb_rows) + 1;
    struct stat st;
    stat(filepath, &st);
    char buffer[st.st_size];
    char **dup = mem_alloc_2d_array(nb_rows, nb_cols);
    int fd = open(filepath, O_RDONLY);
    int size = read(fd, buffer, sizeof(buffer));

    for (; i < nb_rows; i++) {
        for (int j = 0; j < nb_cols; j++) {
            dup[i][j] = buffer[x];
            x++;
        }
    }
    close(fd);
    return dup;
}

int main(int ac, char **av)
{
    int nb_rows = get_rows(av[1]);
    int nb_cols = get_cols(av[1]) + 1;
    char **map = load_2d_arr_from_file(av[1], nb_rows, nb_cols);

    if (ac != 2)
        exit(84);
    empty_rectangle(map, nb_rows, nb_cols);
    biggest_size(map, nb_rows, nb_cols);
    free_array(map, nb_rows);
    return (0);
}
