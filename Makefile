# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfranc <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/10 11:20:45 by mfranc            #+#    #+#              #
#    Updated: 2017/06/08 16:10:25 by mfranc           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = mfranc.filler
FLAGS = -Wall -Wextra -Werror -fsanitize=address
CC = clang $(FLAGS)
INC = includes
P_LIBFT = libft/
LIBFT = $(P_LIBFT)libftprintf.a
INC_LIB = libft/includes
ALL_INC = -I $(INC) -I $(INC_LIB)
P_SRCS = srcs
SRCS = $(P_SRCS)/filler.c

OBJS = $(SRCS:%.c=%.o)

.PHONY: all clean flcean re

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $^ -o $@ $(ALL_INC) -L $(P_LIBFT) -lftprintf

$(LIBFT):
	@make -C $(P_LIBFT)

%.o: %.c
	$(CC) -o $@ -c $< $(ALL_INC)

clean:
	make clean -C $(P_LIBFT)
	rm -f $(OBJS)

fclean: clean
	make fclean -C $(P_LIBFT)
	rm -f $(NAME)

re: fclean all
