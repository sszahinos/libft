# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sersanch <sersanch@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/16 10:05:08 by sersanch          #+#    #+#              #
#    Updated: 2022/09/20 10:54:00 by sersanch         ###   ########.fr        #
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
				ft_isalnum.c \
				ft_isascii.c \
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
				ft_memchr.c \
				ft_memcmp.c \
				ft_strnstr.c \
				ft_atoi.c \
				ft_calloc.c \
				ft_strdup.c \
				ft_substr.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_split.c \
				ft_itoa.c \
				ft_strmapi.c \
				ft_striteri.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c

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
