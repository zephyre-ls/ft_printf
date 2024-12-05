# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lduflot <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/29 15:18:44 by lduflot           #+#    #+#              #
#    Updated: 2024/12/04 16:05:30 by lduflot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

###############################
##ARGUMENTS/MACRO

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = ft_printf.a

###############################
##SOURCES

FILES =	ft_printf.c \
		ft_printadress.c \
		ft_printhexamaj.c \
		ft_printhexaminus.c \
		ft_printnbr.c \
		ft_atoi.c \
		ft_printchar.c \
		ft_printstr.c \
		ft_printnbrunsigned.c 

OBJS = $(FILES:.c=.o)

###############################
##RULES

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
