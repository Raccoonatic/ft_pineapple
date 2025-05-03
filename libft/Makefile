# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/12 21:11:45 by lde-san-          #+#    #+#              #
#    Updated: 2025/05/02 15:22:28 by lde-san-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

COMPILE = cc -Wall -Werror -Wextra -I.
OBJ = $(FILE:%.c=%.o)
OBJ_BONUS = $(FILE_BONUS:%.c=%.o)

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
FILE += ft_memchr.c
FILE += ft_memcmp.c
FILE += ft_strnstr.c
FILE += ft_atoi.c
FILE += ft_calloc.c
FILE += ft_strdup.c
FILE += ft_substr.c
FILE += ft_strjoin.c
FILE += ft_strtrim.c
FILE += ft_split.c
FILE += ft_itoa.c
FILE += ft_strmapi.c
FILE += ft_striteri.c
FILE += ft_putchar_fd.c
FILE += ft_putstr_fd.c
FILE += ft_putendl_fd.c
FILE += ft_putnbr_fd.c

FILE_BONUS = ft_lstnew.c
FILE_BONUS += ft_lstadd_front.c
FILE_BONUS += ft_lstsize.c
FILE_BONUS += ft_lstlast.c
FILE_BONUS += ft_lstadd_back.c
FILE_BONUS += ft_lstdelone.c
FILE_BONUS += ft_lstclear.c
FILE_BONUS += ft_lstiter.c
FILE_BONUS += ft_lstmap.c

$(NAME): $(OBJ)
	@ar -rcs $@ $^

%.o: %.c libft.h
	@$(COMPILE) -c $< -o $@

all: $(NAME)

bonus: $(OBJ) $(OBJ_BONUS)
	@ar -rcs $(NAME) $(OBJ) $(OBJ_BONUS)

open: $(FILE)
	for file in $(FILE); do open $$file; done

print:
	@echo $(OBJ)

leak: tests
	valgrind --leak-check=full ./tests
	@echo -e "\033[1;35;40m\t\t16 Errors are expected. No Leaks? No sweat homie!\033[0m"

leak_trace:
	valgrind --leak-check=full --track-origins=yes -s ./tests

tests: bonus
	cc -Wall -Werror -Wextra -g -I. tests.c -L. -lft -o tests

tester: re tests
	@./tests

clean:
	@rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	@rm -f $(NAME) tests

re: fclean all
