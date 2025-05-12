# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/09 20:20:13 by lde-san-          #+#    #+#              #
#    Updated: 2025/05/10 20:03:49 by lde-san-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFT = libft/libft.a

SRC_DIR = src/
OBJ_DIR = obj/

COMPILE = cc -Wall -Werror -Wextra -Iinc

FILE = ft_printf.c
FILE += racc_print_str.c
FILE += racc_print_char.c
FILE += racc_print_address.c
FILE += racc_print_num_base.c
FILE += racc_format_checker.c

SRC = $(addprefix $(SRC_DIR),$(FILE))
OBJ = $(SRC:$(SRC_DIR)%.c=$(OBJ_DIR)%.o)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJ_DIR)
	$(COMPILE) -c $< -o $@

$(NAME): $(LIBFT) $(OBJ)
	ar -rcs $(NAME) $(OBJ)

$(LIBFT): libft/libft.h
	make -C ./libft

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

print:
	@echo -e $(SRC)

all: $(NAME)

tests: re
	cc -Iinc -g tests.c -L. -lftprintf -o test
	clear
	./test

clean:
	make -C ./libft clean
	rm -rf $(OBJ_DIR)
	rm -f test
	clear

fclean: clean
	make -C ./libft fclean
	rm -f $(NAME)
	clear

re: fclean all

.PHONY: all clean fclean re
