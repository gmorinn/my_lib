##
## EPITECH PROJECT, 2020
## lib
## File description:
## Makefile
##

PRINTF =	$(wildcard *.c lib/*.c \
					lib/linked_list/*.c \
					lib/my_printf/*.c \
					lib/strings/*.c \
					lib/file/*.c \
					lib/numbers/*.c \
					lib/tab/*.c \
					lib/malloc/*.c \
					lib/binary_tree/*.c \
					lib/hash_table/*.c)

SRC		=	test.c

NAME	=		test

LIB		=		libmy.a

IFLAGS	=	-I ./include/

CFLAGS	=	-W -Wextra -Wall -Werror -g

all: $(NAME)

$(NAME):
	gcc -c $(PRINTF)
	ar rc $(LIB) *o
	rm *.o
	gcc -o $(NAME) $(SRC) $(IFLAGS) -lmy -L./ $(CFLAGS)

clean:
	find . -type f -name "*~" -o -name "#*#" -delete
	rm -f *gc*
	rm -f *~*
	rm -f *o

fclean: clean
	rm -f $(LIB)
	rm -f $(NAME)

re: fclean all
