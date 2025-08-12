# Library name
NAME = push_swap

# Header
HEADER = push_swap.h
# Sources
SRCS = checkers.c errors.c get_arguments.c moves.c push_swap.c

# Objects directory
OBJ_DIR = obj

# Object files
OBJS = $(SRCS:%.c=$(OBJ_DIR)/%.o)

# Libft linked
LIBFT_DIR = my_lib
LIBFT_LIB = $(LIBFT_DIR)/libft.a
LIBFT_INC = -I$(LIBFT_DIR)

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror $(LIBFT_INC)

# Utils
AR = @ar rcs
RM = @rm -rf

# Colors
RED=\033[0;31m
GREEN=\033[0;32m
YELLOW=\033[1;33m
BLUE=\033[0;34m
PINK = \033[0;35m
NC=\033[0m  # (reset)

# Rules
all: $(LIBFT_LIB) $(NAME)

$(NAME): $(OBJS)
	@echo "$(PINK)🔗👅 Linking 👅🔗$...$(NC)"
	@$(CC) $(CFLAGS) $(OBJS) $(LIBFT_LIB) -o $(NAME)
	@echo "$(GREEN)🫦 sucsexfully! 🫦$(NC)"

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)
	@echo "$(GREEN)📚Created obj directory📚$(NC)"

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	@echo "$(PINK)🫦 Cumpiling $< ⌛⌛⌛$(NC)"
	@$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT_LIB):
	@echo "$(PINK)Cumpilating $(NAME)...🫦$(NC)"
	@$(MAKE) -s -C $(LIBFT_DIR)
	@echo "    $(GREEN)🫦   Sucsex 🫦$(NC)"

clean:
	@echo "$(RED)🧽🫧 Cleaning push_swap objects... 🫧🧽$(NC)"
	@$(MAKE) -C $(LIBFT_DIR) clean
	@$(RM) $(OBJ_DIR)

fclean: clean
	@echo "$(RED) 🧽🫧🧼🫧 Full clean push_swap and libft... 🫧🧼🫧🧽$(NC)"
	@$(MAKE) -C $(LIBFT_DIR) fclean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
