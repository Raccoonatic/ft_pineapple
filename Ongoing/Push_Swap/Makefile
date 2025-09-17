# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/09 20:20:13 by lde-san-          #+#    #+#              #
#    Updated: 2025/09/17 13:04:31 by lde-san-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap 
LIB = libpushswap.a

COMPILE = cc -Wall -Werror -Wextra -I.

FILE = racc_print.c
FILE += racc_printchars.c
FILE += racc_printnbs.c
FILE += racc_format_check.c
FILE += racc_moves

SRC_DIR = src/
OBJ_DIR = obj/

SRC = $(addprefix $(SRC_DIR),$(FILE))
OBJ = $(SRC:$(SRC_DIR)%.c=$(OBJ_DIR)%.o)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c $(OBJ_DIR) pushswap.h
	$(COMPILE) -c $< -o $@

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

$(LIB): $(OBJ)
	ar -rcs $(LIB) $(OBJ)

$(NAME): $(LIB) pushswap.h
	$(COMPILE) $(NAME).c $(LIB) -o $(NAME)

test: $(LIB) pushswap.h
	$(COMPILE) test.c $(LIB) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJ_DIR)
	rm -f test
	clear

fclean: clean
	rm -f $(NAME)
	clear

re: fclean all

.PHONY: all clean fclean re test
