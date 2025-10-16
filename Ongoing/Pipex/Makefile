# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/16 14:49:35 by lde-san-          #+#    #+#              #
#    Updated: 2025/10/16 14:49:37 by lde-san-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex
LIB = pipex.a
LIBFT = libft/libft.a

MINT	= \033[38;2;55;250;133;48;2;0;0;0m
NEOR	= \033[3m\033[38;2;255;153;51m
B_WI    = \033[1;37m
RESET	= \033[0m
BABY	= \033[38;2;0;255;247m
BLACK	= \033[38;2;0;0;0m

COMPILE = cc -g -O0 -Wall -Werror -Wextra -I.

SRC_DIR = src/
OBJ_DIR = obj/

SRC = $(addprefix $(SRC_DIR),$(FILE))
OBJ = $(SRC:$(SRC_DIR)%.c=$(OBJ_DIR)%.o)

.PRECIOUS: $(SRC)

all: $(NAME)

$(NAME): $(LIB) pipex.h
	$(COMPILE) $(NAME).c $(LIB) -o $(NAME)

$(LIB): $(OBJ) 
	ar -rcs $(LIB) $(OBJ)

g: libft/libft.h
	make -C ./libft

$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJ_DIR)
	@printf "$(NEOR)"
	$(COMPILE) -c $< -o $@
	@printf "$(RESET)\n"

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(SRC_DIR):
	mkdir -p $(SRC_DIR)
	cp pushswap.h $(SRC_DIR)

./$(FILE):
	@printf "$(NEOR)"
	mv -f $(SRC_DIR)$(@:./%=%) .
	@sleep 1
	@printf "$(RESET)\n"

clean: ./$(FILE)
	@printf "$(BABY)"
	make -C ./libft clean
	@sleep 1
	@clear
	rm -rf $(OBJ_DIR)
	rm -rf $(SRC_DIR)
	rm -rf $(LIB)
	@printf "$(RESET)"

fclean: clean
	@printf "$(B_WI)"
	make -C ./libft fclean
	@sleep 1
	@clear
	rm -f $(NAME)
	@printf "$(RESET)"

re: fclean all

.PHONY: all clean fclean re
