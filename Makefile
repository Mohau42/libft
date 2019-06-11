# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmoloi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/07 14:46:45 by mmoloi            #+#    #+#              #
#    Updated: 2019/06/11 12:09:45 by mmoloi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRC = ft_isdigit.c \
	  ft_isalnum.c \
	  ft_isalpha.c \
	  ft_isascii.c \
	  ft_isprint.c \
	  ft_memset.c \
	  ft_putchar.c \
	  ft_strlen.c \
	  ft_tolower.c \
	  ft_toupper.c \
	  ft_putstr.c \
	  ft_strcpy.c \
	  ft_memcpy.c \
      ft_memmove.c \
      ft_strncpy.c \
      ft_memchr.c \
      ft_memcmp.c \
      ft_strequ.c \
      ft_putchar_fd.c \
      ft_striter.c \
      ft_striteri.c \
      ft_strmap.c \
      ft_strmapi.c \
      ft_strncmp.c \
      ft_strcmp.c

OBJ = $(SRC:.c=.o)

CC = gcc

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	echo "$(NAME) is created"
	ranlib $(NAME)
	echo "$(NAME) is indexed"

$(OBJ): %.o: %.c
	gcc $(FLAGS) -c $< -o $@
	echo "Objects created"

clean: 
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)
	echo "$(NAME) deleted"

re: fclean all
