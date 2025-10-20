# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/16 14:49:35 by lde-san-          #+#    #+#              #
#    Updated: 2025/10/20 19:50:54 by lde-san-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex
LIB = pipex.a
LIBFT = libft/libft.a

cmd1  ?= ls -la
cmd2  ?= wc -l

NEOR	= \033[3m\033[38;2;255;153;51m
MINT    = \033[1;38;2;55;250;133m
PURP	= \033[1;38;2;174;5;252m
BABY    = \033[38;2;0;255;247m
BLOD	= \033[1;38;2;255;0;0m
LIME    = \033[38;2;0;255;0m
BLAK	= \033[38;2;0;0;0m
B_WI    = \033[1;37m
RSET	= \033[0m

FILE = pipex.c
FILE += pipex_utils.c
FILE += px_fail.c

SRC_DIR = src/
OBJ_DIR = obj/

SRC = $(addprefix $(SRC_DIR),$(FILE))
OBJ = $(SRC:$(SRC_DIR)%.c=$(OBJ_DIR)%.o)

.PRECIOUS: $(SRC)

COMPILE = cc -g -O0 -Wall -Werror -Wextra -I.

all: $(NAME)

$(NAME): $(OBJ) $(LIB) $(LIBFT) pipex.h
	@printf "$(BABY)"
	$(COMPILE) $(OBJ) $(LIB) $(LIBFT) -o $(NAME)
	@printf "$(MINT)"
	@ls -la
	@printf "$(RSET)"

$(LIB): $(OBJ) 
	ar -rcs $(LIB) $(OBJ)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c pipex.h | $(OBJ_DIR)
	@printf "$(PURP)"
	$(COMPILE) -c $< -o $@
	@printf "$(RSET)\n"

$(SRC_DIR)%.c: $(SRC_DIR)
	@printf "$(MINT)"
	mv $(@:$(SRC_DIR)%=%) $(SRC_DIR)
	@printf "$(RSET)"

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(SRC_DIR):
	mkdir -p $(SRC_DIR)
	cp pipex.h $(SRC_DIR)

$(LIBFT): libft/libft.h
	@printf "$(NEOR)"
	@make -C ./libft
	@printf "$(RSET)"

./$(FILE):
	@printf "$(NEOR)"
	mv -f $(SRC_DIR)$(@:./%=%) .
	@sleep 1
	@printf "$(RSET)\n"

clean: ./$(FILE)
	@printf "$(LIME)"
	make -C ./libft clean
	@sleep 1
	@printf "$(BLOD)"
	rm -rf $(OBJ_DIR)
	rm -rf $(SRC_DIR)
	rm -rf $(LIB)
	@printf "$(RSET)"

fclean: clean
	@printf "$(B_WI)"
	make -C ./libft fclean
	@sleep 1
	@printf "$(PURP)"
	rm -f $(NAME)
	@printf "$(MINT)"
	@ls -la
	@printf "$(RSET)"

re: fclean all

#///////////////////////////////////////////////////////////////
#/////                                                       //
#////                      🦝 Tests 🦝                      //
#///                                                       //
#///////////////////////////////////////////////////////////

test:
	@printf "$(MINT)\n\t\t  🦝 Running Test! 🦝 \n\n"
	@touch infile
	@printf "$(PURP)\t"
	@touch out1
	@touch out2
	./pipex infile "$(cmd1)" "$(cmd2)" out1
	@sleep 1
	@printf "$(LIME)\t./bash "
	<infile  $(cmd1) | $(cmd2)> out2
	@printf "$(NEOR)\nOpening outputs...$(RSET)"
	@sleep 1
	@open out1 && open out2
	@sleep 4
	@rm -rf out1 out2 infile

fail_tests:
	@printf "$(MINT)\n\t\t  🦝 [TEST] No infile 🦝 \n\n"
	@rm -f infile_missing
	@printf "$(PURP)\t"
	@touch out1
	@touch out2
	./pipex infile_missing "$(cmd1)" "$(cmd2)" out1 || true
	@printf "$(LIME)\n\t./bash "
	<infile_missing  $(cmd1) | $(cmd2)> out2 || true
	@printf "$(NEOR)\nOpening outputs...\n\n"
	@sleep 1
	@open out1 && open out2
	@read dummy
	@rm -rf out1 out2
	@printf "$(RSET)"
	@printf "$(MINT)\n\t 🦝 [TEST] Infile without read permissions 🦝 \n\n"
	@touch infile_noread
	@chmod 000 infile_noread
	@printf "$(PURP)\t"
	@touch out1
	@touch out2
	./pipex infile_noread "$(cmd1)" "$(cmd2)" out1 || true
	@printf "$(LIME)\n\t./bash "
	<infile_noread  $(cmd1) | $(cmd2)> out2 || true
	@printf "$(NEOR)\nOpening outputs...$(RSET)\n\n"
	@sleep 1
	@open out1 && open out2
	@read dummy
	@chmod 644 infile_noread
	@rm -rf out1 out2 infile_noread
	@printf "$(RSET)"
	@printf "$(MINT)\n\t 🦝 [TEST] Outfile without write permissions 🦝 \n\n"
	@touch outfile_nowrite
	@chmod 000 outfile_nowrite
	@touch infile
	@printf "$(PURP)\t"
	./pipex infile "$(cmd1)" "$(cmd2)" outfile_nowrite || true
	@printf "$(LIME)\n\t./bash "
	<infile  $(cmd1) | $(cmd2)> outfile_nowrite || true
	@printf "$(NEOR)\n\t\tHit Enter to continue...$(RSET)\n\n"
	@read dummy
	@chmod 644 outfile_nowrite
	@rm -rf infile outfile_nowrite
	@printf "$(RSET)"
	@printf "$(MINT)\n\t\t  🦝 [TEST] Invalid commands 🦝 \n\n"
	@touch infile
	@printf "$(PURP)\t"
	@touch out1
	@touch out2
	./pipex infile "alvunpowerranger" "nopenope" out1 || true
	@printf "$(LIME)\n\t./bash "
	<infile  alvunpowerranger | nopenope> out2 || true
	@printf "$(NEOR)\nOpening outputs...$(RSET)\n\n"
	@sleep 1
	@open out1 && open out2
	@read dummy
	@rm -rf out1 out2 infile
	@printf "$(RSET)"
	@printf "$(MINT)\n\t\t  🦝 [TEST] Invalid cmd1 🦝 \n\n"
	@touch infile
	@printf "$(PURP)\t"
	@touch out1
	@touch out2
	./pipex infile "alvunpowerranger" "wc" out1 || true
	@printf "$(LIME)\n\t./bash "
	<infile  alvunpowerranger | wc> out2 || true
	@printf "$(NEOR)\nOpening outputs...$(RSET)\n\n"
	@sleep 1
	@open out1 && open out2
	@read dummy
	@rm -rf out1 out2 infile
	@printf "$(RSET)"
	@printf "$(MINT)\n\t\t  🦝 [TEST] Invalid cmd2 🦝 \n\n"
	@touch infile
	@printf "$(PURP)\t"
	@touch out1
	@touch out2
	./pipex infile "ls -l" "nopenope" out1 || true
	@printf "$(LIME)\n\t./bash "
	<infile  ls -l | nopenope> out2 || true
	@printf "$(NEOR)\nOpening outputs...$(RSET)\n\n"
	@sleep 1
	@open out1 && open out2
	@read dummy
	@rm -rf out1 out2 infile
	@printf "$(RSET)"
	@printf "$(MINT)\n\t\t  🦝 [TEST] No Arguments 🦝 \n\n"
	@touch infile
	@printf "$(PURP)\t"
	./pipex || true
	@printf "$(NEOR)\n\n\t\tHit Enter to continue...$(RSET)\n\n"
	@read dummy
	@printf "$(RSET)"
	@printf "$(PURP)\t"
	./pipex infile || true
	@printf "$(NEOR)\n\n\t\tHit Enter to continue...$(RSET)\n\n"
	@read dummy
	@printf "$(RSET)"
	@rm -rf infile
	@printf "$(RSET)"
	@printf "$(MINT)\n\t\t  🦝 [TEST] Empty Commands 🦝 \n\n"
	@touch infile
	@printf "$(PURP)\t"
	@touch out1
	@touch out2
	./pipex infile "" "" out1 || true
	@printf "$(LIME)\n\t./bash "
	<infile  | > out2 || true
	@printf "$(NEOR)\nOpening outputs...$(RSET)\n\n"
	@sleep 1
	@open out1 && open out2
	@read dummy
	@rm -rf out1 out2 infile
	@printf "$(MINT)\t\t\t 🦝 Done! 🦝\n$(RSET)"

.PHONY: all clean fclean re fail_tests test
