# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wfelipe- < wfelipe-@student.42sp.org.br    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/12 16:27:05 by wfelipe-          #+#    #+#              #
#    Updated: 2021/10/12 16:27:07 by wfelipe-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

INC = libft.h

CC = clang

FLAGS = -Wall -Wextra -Werror -c

RM = rm -f

SRC = \
	ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_itoa.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_strjoin.c \
	ft_strmapi.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_strlen.c \
	ft_strlcat.c \
	ft_striteri.c \
	ft_putunbr_fd.c \
	ft_power.c \
	ft_itoa_base.c \
	ft_itoa_base_upper.c

OBJ = $(SRC:.c=.o)

.c.o:
	$(CC) $(FLAGS) $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
