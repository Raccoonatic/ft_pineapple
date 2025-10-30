# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/30 15:46:25 by lde-san-          #+#    #+#              #
#    Updated: 2025/10/30 16:02:39 by lde-san-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
LIB = racc_long.a
LIBFT = libft/libft.a

NEOR	= \033[3m\033[38;2;255;153;51m
MINT    = \033[1;38;2;55;250;133m
PURP	= \033[1;38;2;174;5;252m
BABY    = \033[38;2;0;255;247m
BLOD	= \033[1;38;2;255;0;0m
LIME    = \033[38;2;0;255;0m
BLAK	= \033[38;2;0;0;0m
B_WI    = \033[1;37m
RSET	= \033[0m

OBJ = $(FILE:%.c=%.o)

COMPILE = cc -g -O0 -Wall -Werror -Wextra -I.

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT) solong.h
	@printf "$(BABY)"
	$(COMPILE) $(OBJ) $(LIBFT) -o $(NAME)
	@printf "$(MINT)"
	@ls -la
	@printf "$(RSET)"

%.o: %.c solong.h
	@printf "$(PURP)"
	$(COMPILE) -c $< -o $@
	@printf "$(RSET)"

$(LIBFT): libft/libft.h
	@printf "$(NEOR)"
	@make -C ./libft
	@printf "$(RSET)"

clean:
	@printf "$(LIME)"
	@make -C ./libft clean
	@sleep 1
	@printf "$(BLOD)"
	rm -rf $(OBJ)
	@printf "$(RSET)"

fclean: clean
	@printf "$(B_WI)"
	@make -C ./libft fclean
	@sleep 1
	@printf "$(PURP)"
	rm -f $(NAME)
	@printf "$(MINT)"
	@ls -la
	@printf "$(RSET)"

re: fclean all


mlx_dependencies:
	@printf "$(MINT)\n\t\t🦝 Loading up the goodies! 🦝\n\n"
	@sleep 0.5
	@printf "$(NEOR)Upgrading current packages... \n\n"
	@sleep 1
	@printf "$(LIME)"
	@sudo apt-get update || true
	@sudo apt-get upgrade || true
	@printf "$(RSET)\n\n"
	@sleep 0.5
	@printf "$(NEOR)Installing requirements... \n\n"
	@sleep 1
	@printf "$(PURP)"
	sudo apt-get install xorg || true
	sudo apt-get install libxext-dev || true
	sudo apt-get install zlib1g-dev || true
	sudo apt-get install libbsd-dev || true
	@printf "$(RSET)\n"
	@sleep 1
	@printf "$(MINT)\t\t🦝 All requirements installed! 🦝\n\n"
	@printf "$(RSET)"

.PHONY: all clean fclean re
