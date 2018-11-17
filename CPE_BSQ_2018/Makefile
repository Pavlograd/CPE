##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## makefile
##

SRC	=	main.c			\
		mem_alloc_2d_array.c	\
		map_print.c		\
		specials_cases.c	\

NAME	=	bsq

all:	$(NAME)

$(NAME):
	cd lib/my && make && make clean
	gcc -o $(NAME) $(SRC) -I./include -L./lib/my -lmy

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
