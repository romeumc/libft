# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmartins <rmartins@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/07 22:00:16 by rmartins          #+#    #+#              #
#    Updated: 2021/01/10 00:11:47 by rmartins         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
INCLUDE	= libft.h
CFLAGS = -Wall -Wextra -Werror
OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(BONUS_S:.c=.o)
AR = ar -rcs
INDEXLIB = ranlib
SRCS = ft_isascii.c ft_isprint.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
			ft_tolower.c ft_toupper.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
			ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c \
			ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
			ft_memchr.c ft_memcmp.c ft_strdup.c ft_calloc.c ft_itoa.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
			ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_strmapi.c
SRCS_BONUS = ft_lstsize.c ft_lstlast.c ft_lstadd_front.c ft_lstadd_back.c \
			ft_lstnew.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c \
			ft_swap_bonus.c ft_islower_bonus.c ft_isupper_bonus.c \
			ft_iscntrl_bonus.c ft_isgraph_bonus.c ft_ispunct_bonus.c \
			ft_isspace_bonus.c ft_isblank_bonus.c ft_isxdigit_bonus.c \
			ft_putchar_bonus.c ft_putstr_bonus.c ft_putendl_bonus.c \
			ft_putnbr_bonus.c ft_sqrt_bonus.c ft_strcmp_bonus.c \
			ft_strcpy_bonus.c ft_strncpy_bonus.c ft_strstr_bonus.c \
			ft_strcat_bonus.c ft_strncat_bonus.c ft_strndup_bonus.c

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	$(INDEXLIB) $(NAME)

bonus: $(OBJS_BONUS)
	$(AR) $(NAME) $(OBJS_BONUS)
	$(INDEXLIB) $(NAME)

%.o: %.c
	gcc $(CFLAGS) -I includes -c $< -o $@

clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

rebonus: fclean bonus

so:   
	$(CC) -fPIC -c $(CFLAGS) $(SRCS)
	gcc -shared -o libft.so $(OBJS)

.PHONY:		all clean fclean re bonus rebonus