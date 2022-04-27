# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bchabot <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/19 12:09:11 by bchabot           #+#    #+#              #
#    Updated: 2022/04/25 20:16:28 by bchabot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_printf.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_putstr.c \
		ft_putnbr_base.c \
		ft_putnbr_u.c \
		ft_putptr.c \
		ft_strlen.c

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

OBJS = $(SRCS:.c=.o)

CLIB = ar -rcs

all : $(NAME)

.c.o :
	$(CC) $(CLAGS) -c $< -o $(<:.c=.o)

$(NAME) : $(OBJS)
	$(CLIB) $(NAME) $(OBJS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all re clean fclean
