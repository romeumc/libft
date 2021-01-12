# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmartins <rmartins@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/07 22:00:16 by rmartins          #+#    #+#              #
#    Updated: 2021/01/12 15:24:42 by rmartins         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER	= libft.h
CFLAGS = -Wall -Wextra -Werror
OBJS = $(SRCS:%.c=$(DIR_OBJS)%.o)
OBJS_BONUS = $(SRCS_BONUS:%.c=$(DIR_OBJS)%.o)
AR = ar rcs
INDEXLIB = ranlib
DIR_OBJS = ./compiled_srcs/
SRCS = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
		ft_memchr.c ft_memcmp.c \
		ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_toupper.c ft_tolower.c
#			ft_strlcpy.c ft_strlcat.c \
			ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c \
			 ft_strdup.c ft_calloc.c ft_itoa.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
			ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_strmapi.c
SRCS_BONUS = #ft_lstsize.c ft_lstlast.c ft_lstadd_front.c ft_lstadd_back.c \
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

$(DIR_OBJS)%.o: %.c
	gcc $(CFLAGS) -include $(HEADER) -c $< -o $@

$(OBJS):	| $(DIR_OBJS)
$(DIR_OBJS):
	mkdir $(DIR_OBJS)

clean:
	#rm -f $(OBJS) $(OBJS_BONUS)
	rm -rf $(DIR_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

rebonus: fclean bonus

.PHONY:		all clean fclean re bonus rebonus



## PARA ELIMINAR
so:   
	$(CC) -fPIC -c $(CFLAGS) $(SRCS)
	gcc -shared -o libft.so $(OBJS)
	rm -f *.o

norm:
	norminette -R CheckForbiddenSourceHeader $(SRCS)
	norminette $(HEADER)

run:
	sh ./test/run.sh