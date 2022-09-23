# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sersanch <sersanch@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/16 10:05:08 by sersanch          #+#    #+#              #
#    Updated: 2022/09/22 12:43:36 by sersanch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

##### VARIABLES #####
NAME = libft.a
HEADER = libft.h
SRC_DIR = src
OBJ_DIR = obj
BONUS_DIR = bonus

CC = cc
FLAGS = -Wall -Wextra -Werror -MMD
NORMINETTE = norminette -R CheckForbiddenSourceHeader
RM = rm -f
AR = ar -rcs
MKDIR = mkdir -p
MV = mv -f

#### FORMAT #####
RESET := \e[0m
BOLD := \e[1m
GREEN := \e[32m
YELLOW := \e[33m
CYAN := \e[36m
LMAGENTA := \e[95m


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

BONUS_FILES :=	ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c


##### OBJECTS #####
SRC_OBJS = $(SRC_FILES:.c=.o)
BONUS_OBJS = $(BONUS_FILES:.c=.o)

##### DEPENDENCIES #####
SRC_DEPS = $(SRC_FILES:c=.d)

##### RULES #####
all: $(NAME)

#$(SRC_DIR)/$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
#	@$(CC) $(CFLAGS) -c $< -o $@
#	@echo "$(CYAN)$< $(GREEN)✓$(RESET)"
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(CYAN)$< $(GREEN)✓$(RESET)"

$(NAME): $(SRC_OBJS) Makefile $(HEADER)
	@$(AR) $(NAME) $(SRC_OBJS)
	@echo "$(BOLD)$(LMAGENTA)SRC $(GREEN)compilated succesfully!$(RESET)"

bonus: $(BONUS_OBJS) Makefile $(HEADER)
	$(AR) $(NAME) $(BONUS_OBJS)
	@echo "$(BOLD)$(LMAGENTA)BONUS $(GREEN)compilated succesfully!$(RESET)"

clean:
	@$(RM) $(SRC_OBJS)
	@echo "$(YELLOW)Objects deleted.$(RESET)"

fclean: clean
	@$(RM) $(NAME) bonus.a
	@echo "$(CYAN)$(NAME) $(YELLOW)deleted.$(RESET)"

re: fclean all

norm:
	$(NORMINETTE)
push:
	git add ft_*.c && git commit -m "Functions updated" && git push

folders:
	@$(MKDIR) ./$(SRC_DIR)/$(OBJ_DIR)
	@$(MV) *.c ./$(SRC_DIR)
	@$(MV) *.o ./$(SRC_DIR)/$(OBJ_DIR)

.PHONY: all, clean, fclean, re, norm, bonus, folders
