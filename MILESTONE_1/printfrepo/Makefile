# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lperalta <lperalta@student.42malaga.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/23 12:49:26 by lperalta          #+#    #+#              #
#    Updated: 2025/05/23 12:50:32 by lperalta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

HEADER = ft_printf.h

SRCS = ft_printf.c utils/nbrs.c utils/writers.c

OBJS = $(SRCS:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

AR = ar rcs

RM = rm -f

all: $(NAME)

$(OBJS) : $(HEADER)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)
clean: 
	$(RM) $(OBJS)
fclean:
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
