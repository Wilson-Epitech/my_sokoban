##
## MY_SOKOBAN PROJECT, 2022
## my_sokoban
## File description:
## Makefile
##

CC	=	gcc

CFLAGS  =	-Wextra -Wall

LDFLAFS = -lncurses

SRC	=	main.c						\
		src/lib/my_strlen.c			\

OBJ	=	$(SRC:.c=.o)

NAME	=	my_sokoban

all	:	$(NAME)

$(NAME)	:	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LDFLAFS)

clean	:
	rm -f *~
	rm -f *.o

fclean	:	clean
	rm -f $(NAME)

re	:	fclean all
