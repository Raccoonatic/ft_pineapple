# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/16 14:49:35 by lde-san-          #+#    #+#              #
#    Updated: 2025/10/19 15:28:15 by lde-san-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex
LIB = pipex.a
LIBFT = libft/libft.a

MINT	= \033[38;2;55;250;133;48;2;0;0;0m
NEOR	= \033[3m\033[38;2;255;153;51m
PURP	= \033[1;38;2;174;5;252m
BABY    = \033[38;2;0;255;247m
BLOD	= \033[1;38;2;255;0;0m
LIME    = \033[38;2;0;255;0m
B_WI    = \033[1;37m
BLACK	= \033[38;2;0;0;0m
RESET   = \033[0m

FILE = pipex.c
FILE += pipex_utils.c
FILE += px_fail.c

OBJ = $(FILE:%.c=%.o)

COMPILE = cc -g -O0 -Wall -Werror -Wextra -I.

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT) pipex.h
	@printf "$(BABY)"
	$(COMPILE) $(OBJ) $(LIBFT) -o $(NAME)
	@printf "$(MINT)"
	@ls -la
	@printf "$(RSET)"

%.o: %.c pipex.h
	@printf "$(PURP)"
	$(COMPILE) -c $< -o $@
	@printf "$(RSET)"

$(LIBFT): libft/libft.h
	@printf "$(NEOR)"
	@make -C ./libft
	@printf "$(RESET)"

clean:
	@printf "$(LIME)"
	@make -C ./libft clean
	@sleep 1
	@printf "$(BLOD)"
	rm -rf $(OBJ)
	@printf "$(RESET)"

fclean: clean
	@printf "$(B_WI)"
	@make -C ./libft fclean
	@sleep 1
	@printf "$(PURP)"
	rm -f $(NAME)
	@printf "$(MINT)"
	@ls -la
	@printf "$(RESET)"

re: fclean all

.PHONY: all clean fclean re
