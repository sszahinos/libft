# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sersanch <sersanch@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/16 10:05:08 by sersanch          #+#    #+#              #
#    Updated: 2022/09/30 12:03:15 by sersanch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

##### VARIABLES #####
NAME	= libft.a
BNUS	= .bonus

HEADER	= libft.h
INCLUDE	= -I 
#SRC_DIR	= src/
#OBJ_DIR	= obj/

CFLAGS	= -Wall -Wextra -Werror
NORM	= norminette -R CheckForbiddenSourceHeader
RM		= rm -f
AR		= ar -rcs
MKDIR	= mkdir -p
MV		= mv -f

#### FORMAT #####
RESET		:= \033[0m
BOLD		:= \033[1m
GREEN		:= \033[32m
YELLOW		:= \033[33m
CYAN		:= \033[36m
LMAGENTA	:= \033[95m


##### FILES #####
SRC_FILES =	ft_isalpha.c \
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

BONUS_FILES =	ft_lstnew_bonus.c \
				ft_lstadd_front_bonus.c \
				ft_lstsize_bonus.c \
				ft_lstlast_bonus.c \
				ft_lstadd_back_bonus.c \
				ft_lstdelone_bonus.c \
				ft_lstclear_bonus.c \
				ft_lstiter_bonus.c \
				ft_lstmap_bonus.c


##### OBJECTS #####
SRC_OBJS = $(SRC_FILES:.c=.o)
BONUS_OBJS = $(BONUS_FILES:.c=.o)

##### DEPENDENCIES #####
SRC_DEPS = $(SRC_FILES:.c=.d)
BONUS_DEPS = $(BONUS_FILES:.c=.d)

##### RULES #####
all: $(NAME)

%.o: %.c Makefile
	@$(CC) $(CFLAGS) -MMD $(INCLUDE) $(HEADER) -c $< -o $@
	@echo "$(CYAN)$< $(GREEN)✓$(RESET)"

$(NAME): $(SRC_OBJS)
	@$(AR) $(NAME) $(SRC_OBJS)
	@echo "$(BOLD)$(LMAGENTA)SRC $(GREEN)compilated succesfully!$(RESET)"

bonus: $(BNUS)
	
$(BNUS): $(SRC_OBJS) $(BONUS_OBJS)
	@touch $@
	@$(AR) $(NAME) $(SRC_OBJS) $(BONUS_OBJS)
	@echo "$(BOLD)$(LMAGENTA)BONUS $(GREEN)compilated succesfully!$(RESET)"

clean:
	@$(RM) $(SRC_OBJS) $(BONUS_OBJS) $(SRC_DEPS) $(BONUS_DEPS)
	@echo "$(YELLOW)Objects and dependencies deleted.$(RESET)"

fclean: clean
	@$(RM) $(NAME) $(BNUS)
	@echo "$(CYAN)$(NAME) $(YELLOW)and $(CYAN)$(BNUS) $(YELLOW)deleted.$(RESET)"

re: fclean all

norm:
	$(NORM)
push:
	git add ft_*.c && git commit -m "Functions updated" && git push

folders:
	@$(MKDIR) ./$(OBJ_DIR)
	@$(MV) *.o ./$(SRC_DIR)/$(OBJ_DIR)

-include $(SRC_DEPS)
-include $(BONUS_DEPS)

.PHONY: all clean fclean re norm bonus folders
