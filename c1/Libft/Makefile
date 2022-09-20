# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sersanch <sersanch@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/16 10:05:08 by sersanch          #+#    #+#              #
#    Updated: 2022/09/19 14:37:35 by sersanch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

##### VARIABLES #####
NAME = libft.a
HEADER = libft.h
SRC_DIR = src
OBJ_DIR = obj
CC = cc
FLAGS = -Wall -Wextra -Werror -MMD
NORMINETTE = norminette -R CheckForbiddenSourceHeader
RM = rm -f
AR = ar -rcs
MKDIR = mkdir -p
MV = mv -f

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
				ft_strncmp.c \
				ft_memcmp.c \
				ft_strnstr.c \
				ft_atoi.c \
				ft_calloc.c \
				ft_strdup.c \
				ft_memchr.c

##### OBJECTS #####
SRC_OBJS = $(SRC_FILES:.c=.o)

##### DEPENDENCIES #####
SRC_DEPS = $(SRC_FILES:c=.d)

##### RULES #####
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(SRC_OBJS) Makefile $(HEADER)	
	$(AR) $(NAME) $(SRC_OBJS)

clean:
	$(RM) $(SRC_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

#test:

norm:
	$(NORMINETTE)
push:
	git add ft_*.c && git commit -m "Functions updated" && git push

.PHONY: all, clean, fclean, re, test, norm
