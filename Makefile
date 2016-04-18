CC = gcc
SRC =	includes/my_putchar.c \
		includes/my_put_nbr.c \
		includes/my_putstr.c \
		includes/my_strlen.c \
		main.c \
		includes/options.c \
		includes/options2.c \
		includes/functions.c

OBJ = $(SRC:%.c=%.o)
RM = rm -f
CFLAGS = -fPIC -W -Wall -Werror -ansi -I -Wextra.
CFLAG = -shared
STATIC = libmy_printf_`uname -m`-`uname -s`.a
DYNAMIC = libmy_printf_`uname -m`-`uname -s`.so

make:		all

my_printf_static:	$(OBJ)
					ar r $(STATIC) $(OBJ)

my_printf_dynamic:	$(OBJ)
					$(CC) $(CFLAGS) $(CFLAG) -o $(DYNAMIC) $(SRC)


all:		my_printf_dynamic my_printf_static

clean:
			$(RM) $(OBJ)

fclean:	 clean
			$(RM) $(DYNAMIC) $(STATIC) a.out

re:	fclean all

.PHONY: my_printf_static my_printf_dynamic clean fclean re
