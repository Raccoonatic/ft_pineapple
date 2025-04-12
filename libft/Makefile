# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/12 21:11:45 by lde-san-          #+#    #+#              #
#    Updated: 2025/04/12 23:40:17 by lde-san-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

COMPILE = cc -Wall -Werror -Wextra -I.
OBJ = $(FILE:%.c=%.o)
SRC = ./

FILE = ft_isalpha.c
FILE += ft_isdigit.c
FILE += ft_isalnum.c
FILE += ft_isascii.c
FILE += ft_isprint.c
FILE += ft_strlen.c
FILE += ft_memset.c
FILE += ft_bzero.c
FILE += ft_memcpy.c
FILE += ft_memmove.c
FILE += ft_strlcpy.c
FILE += ft_strlcat.c
FILE += ft_toupper.c
FILE += ft_tolower.c
FILE += ft_strchr.c
FILE += ft_strrchr.c
FILE += ft_strncmp.c
# FILE += ft_memchr.c
# FILE += ft_memcmp.c
# FILE += ft_strnstr.c
FILE += ft_atoi.c
# FILE += ft_calloc.c
# FILE += ft_strdup.c

$(NAME): $(OBJ)
	ar -rcs $@ $^

%.o: %.c
	$(COMPILE) -c $< -o $@

all: $(NAME)

open: $(FILE)
	for file in $(FILE); do open $$file; done

print:
	@echo $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
