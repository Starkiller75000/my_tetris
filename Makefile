##
## Makefile for Makefile in /home/Starkiller/tetris
## 
## Made by Benoit Bouton
## Login   <Starkiller@epitech.net>
## 
## Started on  Mon Feb 27 12:25:48 2017 Benoit Bouton
## Last update Thu Mar  2 16:06:42 2017 Benoit Bouton
##

SRC	=	main.c			\
		basics.c		\
		displayer.c		\
		lib/my_strcmp.c		\
		debug.c			\
		debug1.c		\
		debug2.c		\
		open_dir.c		\
		debug_mode_base.c	\
		lib/my_strrchr.c	\
		lib/my_strcpy.c		\
		lib/my_strcat.c

OBJ	=	$(SRC:.c=.o)

##CFLAGS	+=	-Wextra -Wall -Werror

NAME	=	tetris

all:		$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -L. -lmyprintf

clean:
	rm -f $(OBJ)

fclean:		clean
	rm -f $(NAME)

re:		fclean all

.PHONY:		all re fclean clean
