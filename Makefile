# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wfelipe- < wfelipe-@student.42sp.org.br    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/12 16:26:54 by wfelipe-          #+#    #+#              #
#    Updated: 2021/10/12 16:27:38 by wfelipe-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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

INCLUDE = libft

LIBRARIES = make -C libft

TESTER = ./tester

.c.o:
	$(CC) $(CFLAGS) $< -o $(<:.c=.o)

$(NAME): $(OBJ)
	$(LIBRARIES)
	cp $(INCLUDE)/libft.a ./$(NAME)
	ar rcs $(NAME) $(OBJ)

all:	$(NAME)

clean:
	$(RM) *.o
	$(LIBRARIES) clean

fclean:	clean
	$(RM) $(NAME)
	$(LIBRARIES) fclean

re:	fclean all
	$(LIBRARIES) re

.PHONY:	all clean fclean re

libft:
	$(LIBRARIES)

test: all
	$(TESTER)/tester m