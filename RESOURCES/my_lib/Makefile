# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lperalta <lperalta@student.42malaga.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/28 12:22:06 by lperalta          #+#    #+#              #
#    Updated: 2025/08/04 11:07:41 by lperalta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Library name
NAME = libft.a

# Header
HEADER = libft.h

# Objects directory
OBJ_DIR = obj

# Sources
PRINTF_SRCS = ft_printf/ft_printf.c ft_printf/nbrs.c ft_printf/writers.c

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_atoi.c ft_toupper.c ft_tolower.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_memchr.c ft_memcmp.c ft_strncmp.c ft_calloc.c ft_strdup.c ft_strjoin.c ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c ft_putnbr_fd.c ft_itoa.c ft_strmapi.c ft_strrchr.c ft_striteri.c ft_strnstr.c ft_substr.c ft_strtrim.c ft_split.c $(PRINTF_SRCS)

# Bonus sources
BONUS_SRC = ft_lstnew.c ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstlast.c ft_lstmap.c ft_lstsize.c 

# Object files
OBJS = $(SRCS:%.c=$(OBJ_DIR)/%.o)
BONUS_OBJ = $(BONUS_SRC:%.c=$(OBJ_DIR)/%.o)

# Compiler and flags
CC = cc 
CFLAGS = -Wall -Wextra -Werror

# Utils
AR = ar rcs
RM = rm -rf

# Colors
RED=\033[0;31m
GREEN=\033[0;32m
YELLOW=\033[1;33m
BLUE=\033[0;34m
NC=\033[0m  # (reset)

# Rules
all: $(NAME)

# Compilating library
$(NAME) : $(OBJS)
	@echo "$(RED)Cumpilating $(NAME)...🫦$(NC)"
	@ $(AR) $(NAME) $(OBJS)
	@echo "    $(GREEN)🫦 Success 🫦$(NC)"

  ## Obj creating into objects directory
$(OBJ_DIR)/%.o: %.c $(HEADER)
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

  ## Bonus compilating
bonus: $(OBJS) $(BONUS_OBJS)
	@$(AR) $(NAME) $(BONUS_OBJ)
	@echo "🫦Bonus check🫦"

  ## cleaning
clean:
	@$(RM) $(OBJS) $(BONUS_OBJ)
clean_dir:
	@$(RM) $(OBJ_DIR)
fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY: all bonus clean fclean re
