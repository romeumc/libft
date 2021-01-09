# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmartins <rmartins@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/07 22:00:16 by rmartins          #+#    #+#              #
#    Updated: 2021/01/08 01:06:29 by rmartins         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
INCLUDE	= libft.h
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_strlen.c
OBJS = $(SRCS:.c=.o)
LIB = ar -rcs
INDEXLIB = randlib
RM = /bin/rm -f

%.o: %.c
	$(CC) $(CFLAGS) -I $(INCLUDE) -o $@ -c $<

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDE)
	$(LIB) $(NAME) $(OBJS)
	$(INDEXLIB) $(NAME)

clean:
	$(RM) $(OBJS) $(BONUS_O)

fclean: clean
	$(RM) $(NAME)

re: fclean all

