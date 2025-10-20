# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/16 14:49:35 by lde-san-          #+#    #+#              #
#    Updated: 2025/10/20 21:46:44 by lde-san-         ###   ########.fr        #
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

OBJ = $(FILE:%.c=%.o)

COMPILE = cc -g -O0 -Wall -Werror -Wextra -I.

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT) pipex.h
	@printf "$(BABY)"
	$(COMPILE) $(OBJ) $(LIBFT) -o $(NAME)
	@printf "$(MINT)"
	@ls -la
	@printf "$(RSET)"

%.o: %.c pipex.h
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
	@printf "$(NEOR)\nOpening outputs...$(RSET)\n"
	@sleep 1
	@open out1 && open out2
	@read dummy
	@rm -rf out1 out2 infile
	@printf "$(MINT)\t\t\t 🦝 Done! 🦝\n\n$(RSET)"

michmos:
	git clone https://github.com/michmos/42_pipex_tester.git && cd 42_pipex_tester
	@printf "$(PURP)\n\t\t michmos github:\n"
	@printf "$(MINT) 🦝 https://github.com/michmos/42_pipex_tester 🦝\n\n"
	@sleep 1

fun:
	@printf "$(NEOR)🦝 Rebuilding Makefile... $(RESET)"
	@printf "$(MINT)🦝\n"
	@sed -i '33s/.*//' Makefile
	@sed -i '34s/.*/''S''R''C''_''D''I''R'' = src\//' Makefile
	@sed -i '35s/.*/''O''B''J''_''D''I''R'' = obj\//' Makefile
	@sed -i '36s/.*//' Makefile
	@sed -i '37s/.*/''S''R''C'' = $$(addprefix $$(''S''R''C''_''D''I''R'')'',$$(''F''I''L''E''))/' Makefile
	@sed -i '38s/.*/''O''B''J'' = $$(''S''R''C'':$$(''S''R''C''_''D''I''R'')'\%'.c=$$(''O''B''J''_''D''I''R'')'\%'.o)/' Makefile
	@sed -i '39s/.*//' Makefile
	@sed -i '40s/.*/.''P''R''E''C''I''O''U''S'':'' $$(''S''R''C'')/' Makefile
	@sed -i '41s/.*//' Makefile
	@sed -i '42s/.*/''C''O''M''P''I''L''E'' = cc -g -O0 -Wall -Werror -Wextra -I./' Makefile
	@sed -i '43s/.*//' Makefile
	@sed -i '44s/.*/all: $$(''N''A''M''E'')/' Makefile
	@sed -i '45s/.*//' Makefile
	@sed -i '46s/.*/$$(''N''A''M''E''): $$(''O''B''J'') $$(''L''I''B'') $$(''L''I''B''F''T'') pipex.h/' Makefile
	@sed -i '47s/.*/	@printf '\"'$$(''B''A''B''Y'')'\"'/' Makefile
	@sed -i '48s/.*/	$$(''C''O''M''P''I''L''E'') $$(''O''B''J'') $$(''L''I''B'') $$(''L''I''B''F''T'') -o $$(''N''A''M''E'')/' Makefile
	@sed -i '49s/.*/	@printf '\"'$$(''M''I''N''T'')'\"'/' Makefile
	@sed -i '50s/.*/	@ls -la/' Makefile
	@sed -i '51s/.*/	@printf '\"'$$(''R''S''E''T'')'\"'/' Makefile
	@sed -i '52s/.*//' Makefile
	@sed -i '53s/.*/$$(''L''I''B''): $$(''O''B''J'') /' Makefile
	@sed -i '54s/.*/	ar -rcs $$(''L''I''B'') $$(''O''B''J'')/' Makefile
	@sed -i '55s/.*//' Makefile
	@sed -i '56s/.*/$$(''O''B''J''_''D''I''R'')'\%'.o: $$(''S''R''C''_''D''I''R'')'\%'.c pipex.h | $$(''O''B''J''_''D''I''R'')/' Makefile
	@sed -i '57s/.*/	@printf '\"'$$(''P''U''R''P'')'\"'/' Makefile
	@sed -i '58s/.*/	$$(''C''O''M''P''I''L''E'') -c $$< -o $$@/' Makefile
	@sed -i '59s/.*/	@printf '\"'$$(''R''S''E''T'')\\n'\"'/' Makefile
	@sed -i '60s/.*//' Makefile
	@sed -i '61s/.*/$$(''S''R''C''_''D''I''R'')'\%'.c: $$(''S''R''C''_''D''I''R'')/' Makefile
	@sed -i '62s/.*/	@printf '\"'$$(''M''I''N''T'')'\"'/' Makefile
	@sed -i '63s/.*/	mv $$(@:$$(''S''R''C''_''D''I''R'')'\%'='\%') $$(''S''R''C''_''D''I''R'')/' Makefile
	@sed -i '64s/.*/	@printf '\"'$$(''R''S''E''T'')'\"'/' Makefile
	@sed -i '65s/.*//' Makefile
	@sed -i '66s/.*/$$(''O''B''J''_''D''I''R''):/' Makefile
	@sed -i '67s/.*/	mkdir -p $$(''O''B''J''_''D''I''R'')/' Makefile
	@sed -i '68s/.*//' Makefile
	@sed -i '69s/.*/$$(''S''R''C''_''D''I''R''):/' Makefile
	@sed -i '70s/.*/	mkdir -p $$(''S''R''C''_''D''I''R'')/' Makefile
	@sed -i '71s/.*/	cp pipex.h $$(''S''R''C''_''D''I''R'')/' Makefile
	@sed -i '72s/.*//' Makefile
	@sed -i '73s/.*/$$(''L''I''B''F''T''): libft\/libft.h/' Makefile
	@sed -i '74s/.*/	@printf '\"'$$(''N''E''O''R'')'\"'/' Makefile
	@sed -i '75s/.*/	@make -C .\/libft/' Makefile
	@sed -i '76s/.*/	@printf '\"'$$(''R''S''E''T'')'\"'/' Makefile
	@sed -i '77s/.*//' Makefile
	@sed -i '78s/.*/.\/$$(''F''I''L''E''):/' Makefile
	@sed -i '79s/.*/	@printf '\"'$$(''N''E''O''R'')'\"'/' Makefile
	@sed -i '80s/.*/	mv -f $$(''S''R''C''_''D''I''R'')$$(@:.\/'\%'='\%') ./' Makefile
	@sed -i '81s/.*/	@sleep 1/' Makefile
	@sed -i '82s/.*/	@printf '\"'$$(''R''S''E''T'')\\n'\"'/' Makefile
	@sed -i '83s/.*//' Makefile
	@sed -i '84s/.*/clean: .\/$$(''F''I''L''E'')/' Makefile
	@sed -i '85s/.*/	@printf '\"'$$(''L''I''M''E'')'\"'/' Makefile
	@sed -i '86s/.*/	make -C .\/libft clean/' Makefile
	@sed -i '87s/.*/	@sleep 1/' Makefile
	@sed -i '88s/.*/	@printf '\"'$$(''B''L''O''D'')'\"'/' Makefile
	@sed -i '89s/.*/	rm -rf $$(''O''B''J''_''D''I''R'')/' Makefile
	@sed -i '90s/.*/	rm -rf $$(''S''R''C''_''D''I''R'')/' Makefile
	@sed -i '91s/.*/	rm -rf $$(''L''I''B'')/' Makefile
	@sed -i '92s/.*/	@printf '\"'$$(''R''S''E''T'')'\"'/' Makefile
	@sed -i '93s/.*//' Makefile
	@sed -i '94s/.*/fclean: clean/' Makefile
	@sed -i '95s/.*/	@printf '\"'$$(''B''_''W''I'')'\"'/' Makefile
	@sed -i '96s/.*/	make -C .\/libft fclean/' Makefile
	@sed -i '97s/.*/	@sleep 1/' Makefile
	@sed -i '98s/.*/	@printf '\"'$$(''P''U''R''P'')'\"'/' Makefile
	@sed -i '99s/.*/	rm -f $$(''N''A''M''E'')/' Makefile
	@sed -i '100s/.*/	@printf '\"'$$(''M''I''N''T'')'\"'/' Makefile
	@sed -i '101s/.*/	@ls -la/' Makefile
	@sed -i '102s/.*/	@printf '\"'$$(''R''S''E''T'')'\"'/' Makefile
	@sed -i '103s/.*//' Makefile
	@sed -i '104s/.*/re: fclean all/' Makefile
	@sed -i '105s/.*//' Makefile

boring:
	@printf "$(NEOR)🦝 Rebuilding Makefile... $(RESET)"
	@printf "$(MINT)🦝\n"
	@sed -i '33s/.*//' Makefile
	@sed -i '34s/.*/O''B''J'' = $$(''F''I''L''E'':'\%'.c='\%'.o)/' Makefile
	@sed -i '35s/.*//' Makefile
	@sed -i '36s/.*/C''O''M''P''I''L''E'' = cc -g -O0 -Wall -Werror -Wextra -I./' Makefile
	@sed -i '37s/.*//' Makefile
	@sed -i '38s/.*/all: $$(''N''A''M''E'')/' Makefile
	@sed -i '39s/.*//' Makefile
	@sed -i '40s/.*/$$(''N''A''M''E''): $$(''O''B''J'') $$(''L''I''B''F''T'') pipex.h/' Makefile
	@sed -i '41s/.*/	@printf '\"'$$(''B''A''B''Y'')'\"'/' Makefile
	@sed -i '42s/.*/	$$(''C''O''M''P''I''L''E'') $$(''O''B''J'') $$(''L''I''B''F''T'') -o $$(''N''A''M''E'')/' Makefile
	@sed -i '43s/.*/	@printf '\"'$$(''M''I''N''T'')'\"'/' Makefile
	@sed -i '44s/.*/	@ls -la/' Makefile
	@sed -i '45s/.*/	@printf '\"'$$(''R''S''E''T'')'\"'/' Makefile
	@sed -i '46s/.*//' Makefile
	@sed -i '47s/.*/'\%'.o: '\%'.c pipex.h/' Makefile
	@sed -i '48s/.*/	@printf '\"'$$(''P''U''R''P'')'\"'/' Makefile
	@sed -i '49s/.*/	$$(''C''O''M''P''I''L''E'') -c $$< -o $$@/' Makefile
	@sed -i '50s/.*/	@printf '\"'$$(''R''S''E''T'')'\"'/' Makefile
	@sed -i '51s/.*//' Makefile
	@sed -i '52s/.*/$$(''L''I''B''F''T''): libft\/libft.h/' Makefile
	@sed -i '53s/.*/	@printf '\"'$$(''N''E''O''R'')'\"'/' Makefile
	@sed -i '54s/.*/	@make -C .\/libft/' Makefile
	@sed -i '55s/.*/	@printf '\"'$$(''R''S''E''T'')'\"'/' Makefile
	@sed -i '56s/.*//' Makefile
	@sed -i '57s/.*/clean:/' Makefile
	@sed -i '58s/.*/	@printf '\"'$$(''L''I''M''E'')'\"'/' Makefile
	@sed -i '59s/.*/	@make -C .\/libft clean/' Makefile
	@sed -i '60s/.*/	@sleep 1/' Makefile
	@sed -i '61s/.*/	@printf '\"'$$(''B''L''O''D'')'\"'/' Makefile
	@sed -i '62s/.*/	rm -rf $$(''O''B''J'')/' Makefile
	@sed -i '63s/.*/	@printf '\"'$$(''R''S''E''T'')'\"'/' Makefile
	@sed -i '64s/.*//' Makefile
	@sed -i '65s/.*/fclean: clean/' Makefile
	@sed -i '66s/.*/	@printf '\"'$$(''B''_''W''I'')'\"'/' Makefile
	@sed -i '67s/.*/	@make -C .\/libft fclean/' Makefile
	@sed -i '68s/.*/	@sleep 1/' Makefile
	@sed -i '69s/.*/	@printf '\"'$$(''P''U''R''P'')'\"'/' Makefile
	@sed -i '70s/.*/	rm -f $$(''N''A''M''E'')/' Makefile
	@sed -i '71s/.*/	@printf '\"'$$(''M''I''N''T'')'\"'/' Makefile
	@sed -i '72s/.*/	@ls -la/' Makefile
	@sed -i '73s/.*/	@printf '\"'$$(''R''S''E''T'')'\"'/' Makefile
	@sed -i '74s/.*//' Makefile
	@sed -i '75s/.*/re: fclean all/' Makefile
	@sed -i '76s/.*//' Makefile
	@sed -i '77s/.*//' Makefile
	@sed -i '78s/.*//' Makefile
	@sed -i '79s/.*//' Makefile
	@sed -i '80s/.*//' Makefile
	@sed -i '81s/.*//' Makefile
	@sed -i '82s/.*//' Makefile
	@sed -i '83s/.*//' Makefile
	@sed -i '84s/.*//' Makefile
	@sed -i '85s/.*//' Makefile
	@sed -i '86s/.*//' Makefile
	@sed -i '87s/.*//' Makefile
	@sed -i '88s/.*//' Makefile
	@sed -i '89s/.*//' Makefile
	@sed -i '90s/.*//' Makefile
	@sed -i '91s/.*//' Makefile
	@sed -i '92s/.*//' Makefile
	@sed -i '93s/.*//' Makefile
	@sed -i '94s/.*//' Makefile
	@sed -i '95s/.*//' Makefile
	@sed -i '96s/.*//' Makefile
	@sed -i '97s/.*//' Makefile
	@sed -i '98s/.*//' Makefile
	@sed -i '99s/.*//' Makefile
	@sed -i '100s/.*//' Makefile
	@sed -i '101s/.*//' Makefile
	@sed -i '102s/.*//' Makefile
	@sed -i '103s/.*//' Makefile
	@sed -i '104s/.*//' Makefile
	@sed -i '105s/.*//' Makefile

.PHONY: all clean fclean re fail_tests test michmos
