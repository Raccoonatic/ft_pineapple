# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/07 15:13:10 by lde-san-          #+#    #+#              #
#    Updated: 2025/04/07 18:37:57 by lde-san-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILE = ft_putchar.c
FILE += ft_putstr.c
FILE += ft_strcmp.c
FILE += ft_strlen.c
FILE += ft_swap.c

SRC_PATH = ./srcs/
SRC = $(addprefix $(SRC_PATH), $(FILE))
OBJ = $(FILE:%.c=%.o)

COMPILE = cc -Wall -Werror -Wextra -I ./includes/

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: $(SRC_PATH)%.c
	$(COMPILE) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
