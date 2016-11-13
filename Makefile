# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmanon <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/21 22:27:20 by nmanon            #+#    #+#              #
#    Updated: 2016/08/21 22:27:24 by nmanon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libft.a

CC = 	gcc

FLG =	-Wall -Wextra -Werror

INC =	-I ./includes

SRC =	Srcs/ft_putchar.c \
		Srcs/ft_putstr.c \
		Srcs/ft_putnbr.c \
		Srcs/ft_strlen.c \
		Srcs/ft_atoi.c \
		Srcs/ft_strcat.c \
		Srcs/ft_strcapitalize.c \
		Srcs/ft_strlowcase.c \
		Srcs/ft_strupcase.c \
		Srcs/ft_strcmp.c \
		Srcs/ft_strncmp.c \
		Srcs/ft_strstr.c \
		Srcs/ft_strcpy.c \
		Srcs/ft_strncpy.c \
		Srcs/ft_swap.c \
		Srcs/ft_memset.c \
		Srcs/ft_bzero.c \
		Srcs/ft_memcpy.c \
		Srcs/ft_putchar_fd.c \
		Srcs/ft_memccpy.c \
		Srcs/ft_memmove.c \
		Srcs/ft_memcmp.c \
		Srcs/ft_putstr_fd.c

OBJ =	ft_putchar.o \
		ft_putstr.o \
		ft_putnbr.o \
		ft_strlen.o \
		ft_atoi.o \
		ft_strcat.o \
		ft_strcapitalize.o \
		ft_strlowcase.o \
		ft_strupcase.o \
		ft_strcmp.o \
		ft_strncmp.o \
		ft_strstr.o \
		ft_strcpy.o \
		ft_strncpy.o \
		ft_swap.o \
		ft_memset.o \
		ft_bzero.o \
		ft_memcpy.o \
		ft_putchar_fd.o \
		ft_memccpy.o \
		ft_memmove.o \
		ft_memcmp.o \
		ft_putstr_fd.o

all: $(NAME)

$(NAME):
	$(CC) -c $(FLG) $(SRC) $(INC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)


fclean: clean
	rm -f $(NAME)

re: fclean all

norm:
	norminette $(SRC) includes/ft.h