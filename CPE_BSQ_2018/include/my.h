/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** task02
*/

#ifndef MY_H_
#define MY_H_

void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
int get_rows(char const *filepath);
int get_cols(char const *filepath);
int my_intlen(int nb);
char **mem_alloc_2d_array(int nb_rows, int nb_cols);
void free_array(char **map, int nb_rows);
int disp_square(char **map, int nb_rows);
char **change_square(char **map, int row, int col, int square_size);
int is_square_of_size(char **map, int row, int col, int square_size);
int find_biggest_square(char **map, int row, int col);
int *biggest_size(char **map, int nb_rows, int nb_cols);
int first_square(char **map, int nb_rows, int nb_cols);
void error_rows(int nb);
int empty_rectangle(char **map, int nb_rows, int nb_cols);

#endif /* MY_H_ */
