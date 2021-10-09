# Your Makefile must at least contain the rules $(NAME), all, clean, fclean and re.
# -Wall, -Wextra and -Werror
# If your project allows you to use your libft, you must copy its sources and its
# 	associated Makefile in a libft folder with its associated Makefile. Your project’s
# 	Makefile must compile the library by using its Makefile, then compile the project.
# clang -Wall -Wextra -Werror main.c ft_printf.c -L libft/ -lft

NAME = libftprintf.a

INC = libftprintf.h

CC = clang

CFLAGS = -Wall -Wextra -Werror -c

RM = rm -f

SRC = \
	ft_printf.c \
	ft_itoa_address.c \
	ft_putsomething.c

OBJ = $(SRC:.c=.o)

INCLUDE = -L ../../42-1-libft-complete/42-1-libft -lft

MAKE = make -C libraries/libft

.c.o:
	$(CC) $(CFLAGS) $< -o $(<:.c=.o)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

all:	$(NAME) libft

clean:
	$(RM) *.o
	$(MAKE) clean

fclean:	clean
	$(RM) $(NAME)
	$(MAKE) fclean

re:	fclean all
	$(MAKE) re

.PHONY:	all clean fclean re

libft: 
	$(MAKE)

test:
