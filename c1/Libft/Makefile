# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sersanch <sersanch@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/16 10:05:08 by sersanch          #+#    #+#              #
#    Updated: 2022/09/16 11:49:52 by sersanch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

##### VARIABLES #####
NAME = libft.a
HEADER = libft.h
CC = cc
FLAGS = -Wall -Wextra -Werror -MMD
NORMINETTE = norminette -R CheckForbiddenSourceHeader
RM = rm -f
AR = ar -rcs

##### FILES #####
SRC_FILES :=	ft_isalpha.c \
				ft_isdigit.c \
				ft_isascii.c \
				ft_isalnum.c \
				ft_isprint.c \
				ft_strlen.c \
				ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strncmpt.c \
				ft_memcmp.c \
				ft_strnstr.c \
				ft_atoi.c \
				ft_calloc.c \
				ft_strdup.c

##### OBJECTS #####
SRC_OBJS := $(SRC_FILES:.c=.o)

##### RULES #####
all: $(NAME)

$(NAME): $(SRC_OBJS) Makefile $(HEADER)
	$(CC) $(FLAGS) -I $(HEADER) -c $(NAME) -o $(SRC_OBJS)

clean:
	$(RM) $(SRC_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

#test:

norm:
	$(NORMINETTE)

.PHONY: all, clean, fclean, re, test, norm