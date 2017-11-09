##
## Makefile for Makefile in /home/Romingo/CPE/CPE_2016_BSQ
## 
## Made by romain rousseau
## Login   <Romingo@epitech.net>
## 
## Started on  Mon Dec  5 13:34:02 2016 romain rousseau
## Last update Thu Nov  9 23:32:48 2017 Romain Rousseau
##

NAME	=	bsq

SRC	=	my_bsq.c	\
		my_str_cutter.c	\
		my_str_to_wordtab.c	\
		check_my_punto.c	\
		algo_functions.c	\
		algo.c	\
		check.c	\
		write_func.c

CFLAGS	+=	-Wall -Wextra
CFLAGS	+=	-I./include

OBJ	=	$(SRC:.c=.o)

CC	=	gcc

RM	=	rm -f

all	:	$(NAME)

$(NAME)	:	$(OBJ)
#		make -C ./lib/
		$(CC) -o $(NAME) $(OBJ) -L./lib/ -lmy

clean	:
		$(RM) $(OBJ)

fclean	:	clean
		$(RM) $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re
