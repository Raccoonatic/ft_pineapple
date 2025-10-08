# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/09 20:20:13 by lde-san-          #+#    #+#              #
#    Updated: 2025/10/08 21:54:26 by lde-san-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
LIB = libpushswap.a

MINT	= \033[38;2;55;250;133;48;2;0;0;0m
NEOR	= \033[3m\033[38;2;255;153;51m
B_WI    = \033[1;37m
RESET	= \033[0m
BABY	= \033[38;2;0;255;247m
BLACK	= \033[38;2;0;0;0m

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
	@printf "$(NEOR)"
	$(COMPILE) -c $< -o $@
	@printf "$(RESET)\n"

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(SRC_DIR)%.c: $(SRC_DIR)
	@printf "$(MINT)"
	mv $(@:$(SRC_DIR)%=%) $(SRC_DIR)
	@printf "$(RESET)"

$(SRC_DIR):
	mkdir -p $(SRC_DIR)
	cp pushswap.h $(SRC_DIR)

./$(FILE):
	@printf "$(NEOR)"
	if [ -f $(@:./%=$(SRC_DIR)%) ]; then mv -f $(@:./%=$(SRC_DIR)%) .; fi
	@printf "$(RESET)\n"

clean: ./$(FILE)
	@printf "$(BABY)"
	rm -rf $(OBJ_DIR)
	rm -rf $(SRC_DIR)
	rm -rf $(LIB)
	@printf "$(RESET)"

fclean: clean
	@printf "$(B_WI)"
	rm -f $(NAME)
	@printf "$(RESET)"

restore:
	git restore ps_input_manager.c
	git restore ps_algorithm_utils_alpha.c
	git restore ps_init_utils.c
	git restore ps_algorithm_utils_beta.c
	git restore ps_list_gen.c
	git restore ps_moves.c
	git restore ps_sort_five_utils.c
	git restore ps_sort_them_all.c
	git restore ps_tiny_sorts.c
	git restore racc_print.c
	git restore racc_print_utils.c
	git restore pushswap.h
	git restore push_swap.c

re: fclean all

.PHONY: all clean fclean re restore
