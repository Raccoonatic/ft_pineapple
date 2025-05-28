# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/09 20:20:13 by lde-san-          #+#    #+#              #
#    Updated: 2025/05/12 18:25:58 by lde-san-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

COMPILE = cc -Wall -Werror -Wextra -Iinc

FILE = ft_printf.c
FILE += racc_print_str.c
FILE += racc_print_char.c
FILE += racc_print_address.c
FILE += racc_print_num_base.c
FILE += racc_format_checker.c

OBJ = $(FILE:%.c=%.o)

%.o: %.c ft_printf.h
	$(COMPILE) -c $< -o $@

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
