/*
** EPITECH PROJECT, 2018
** mem_alloc_2d_array
** File description:
** bootstrap BSQ
*/

#include "./include/my.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

void free_array(char **map, int nb_rows)
{
    for (int i = 0; i < nb_rows; i++) {
        free(map[i]);
    }
    free(map);
}

char **mem_alloc_2d_array(int nb_rows, int nb_cols)
{
    char **zone = malloc(nb_rows * sizeof(*zone));

    for (int i = 0; i < nb_rows; i++) {
        zone[i] = malloc(nb_cols * sizeof(**zone));
    }
    return zone;
}

int get_cols(char const *filepath)
{
    int x = 0;
    int j = 0;
    struct stat st;
    stat(filepath, &st);
    char buffer[st.st_size];
    int fd = open(filepath, O_RDONLY);
    int size = read(fd, buffer, sizeof(buffer));

    for (int i = 0; buffer[i] != '\0'; i++) {
        if (x == 2) {
            return (j - 2);
        }
        if (buffer[i] == '\n') {
            x++;
            if (x == 1)
                j = 0;
        }
        j++;
    }
    return (j - 2);
}

int get_rows(char const *filepath)
{
    struct stat st;
    stat(filepath, &st);
    error_rows(st.st_size);
    char buffer[st.st_size];
    int fd = open(filepath, O_RDONLY);
    int size = read(fd, buffer, sizeof(buffer));
    int nb = my_getnbr(buffer);

    if (fd == -1 || size == -1)
        exit(84);
    for (int i = 0; buffer[i] != '\n'; i++) {
        if (buffer[i] >= '0' && buffer[i] <= '9') {
            if (nb < 0) {
                exit(84);
            } else {
                return nb;
            }
        }
    }
}

void error_rows(int nb)
{
    if (nb > 4500000) {
        my_putstr("Syntax error");
        exit(84);
    }
}
