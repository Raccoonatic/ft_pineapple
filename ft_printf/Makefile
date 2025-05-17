# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/09 20:20:13 by lde-san-          #+#    #+#              #
#    Updated: 2025/05/16 20:43:55 by jtorcate         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

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

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

all: $(NAME)

clean:
	rm -rf $(OBJ)
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
