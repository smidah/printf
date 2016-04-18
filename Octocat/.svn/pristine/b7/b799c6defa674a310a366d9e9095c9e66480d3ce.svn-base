##
## Makefile for octocat in /Users/aboube_s/Desktop/octocat/smida_h
## 
## Made by SMIDA haïkel
## Login   <smida_h@etna-alternance.net>
## 
## Started on  Fri Jan 22 16:33:31 2016 SMIDA haïkel
## Last update Fri Jan 22 16:33:35 2016 SMIDA haïkel
##

CC      = gcc
NAME    = octocat.a
SRC     = map.c\
	  fonctions.c\
	  menu.c\
	  options.c\
	  movecasus.c\
	  mouvements.c\
	  movehard.c\
	  move_bonus_mur.c\
	  mouvements_bonus_mur.c\
	  move_bonus_blind.c\
	  move_bonus_compteur.c


OBJ = $(SRC:%.c=%.o)
RM = rm -f
CFLAGS = -W -Wall -Werror -pedantic -g -I.

$(NAME):	$(OBJ)
		$(CC) $(OBJ) -o $(NAME) $(CFLAGS)

all:	$(NAME)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:	fclean all
