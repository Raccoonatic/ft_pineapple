# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/09 20:20:13 by lde-san-          #+#    #+#              #
#    Updated: 2025/10/08 19:32:37 by lde-san-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
LIB = libpushswap.a

COMPILE = cc -Wall -Werror -Wextra -I.

FILE = ps_algorithm_utils_alpha.c
FILE += ps_algorithm_utils_beta.c
FILE += ps_init_utils.c
FILE += ps_input_manager.c
FILE += ps_list_gen.c
FILE += ps_moves.c
FILE += ps_sort_five_utils.c
FILE += ps_sort_them_all.c
FILE += ps_tiny_sorts.c
FILE += racc_print.c
FILE += racc_print_utils.c

SRC_DIR = src/
OBJ_DIR = obj/

SRC = $(addprefix $(SRC_DIR),$(FILE))
OBJ = $(SRC:$(SRC_DIR)%.c=$(OBJ_DIR)%.o)

all: $(NAME)

$(NAME): $(LIB) pushswap.h
	$(COMPILE) $(NAME).c $(LIB) -o $(NAME)

$(LIB): $(OBJ) 
	ar -rcs $(LIB) $(OBJ)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJ_DIR)
	$(COMPILE) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(SRC_DIR)%.c: $(SRC_DIR)
	mv $(@:$(SRC_DIR)%=%) $(SRC_DIR)

$(SRC_DIR):
	mkdir -p $(SRC_DIR)
	cp pushswap.h $(SRC_DIR)

clean:
	rm -rf $(OBJ_DIR)
	if [ -d $(SRC_DIR) ]; then mv $(SRC) .; fi
	rm -rf $(SRC_DIR)
	rm -rf $(LIB)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
