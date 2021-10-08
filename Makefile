# Your Makefile must at least contain the rules $(NAME), all, clean, fclean and re.
# -Wall, -Wextra and -Werror
# If your project allows you to use your libft, you must copy its sources and its
# 	associated Makefile in a libft folder with its associated Makefile. Your project’s
# 	Makefile must compile the library by using its Makefile, then compile the project.
# clang -Wall -Wextra -Werror main.c ft_printf.c -L libft/ -lft

NAME = libprintf.a

INC = libprintf.h

CC = clang

CFLAGS = -Wall -Wextra -Werror -c

LFLAGS = -Wall -Wextra -Werror -o #confirm these flags

RM = rm -f

SRC = ft_printf.c \
	ft_itoa_address.c \
	ft_putsomething.c

OBJ = $(SRC: .c=.o)

INCLUDE = -L ../../42-1-libft-complete/42-1-libft -lft

compile:
	$(CC) $(CFLAGS) $(SRC) 

link: compile $(OBJ)
	$(CC) $(LFLAGS) $(OBJ) $(INCLUDE)

all:
	echo "Hello!"

$(NAME):

clean:
	$(RM) *.o

fclean:

re:

libft:

test:
