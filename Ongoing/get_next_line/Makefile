# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/07 15:21:54 by lde-san-          #+#    #+#              #
#    Updated: 2025/06/07 15:22:28 by lde-san-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MINT	= \033[38;2;55;250;133;48;2;0;0;0m
NEOR	= \033[3m\033[38;2;255;153;51m
BABY	= \033[38;2;0;255;247m
LIME	= \033[38;2;0;255;0m
BLACK	= \033[38;2;0;0;0m
B_WI    = \033[1;37m
RESET	= \033[0m

FILES = cora
FILES += corb
FILES += corc
FILES += parrot.txt
FILES += p_racc.txt
FILES += test_01.txt
FILES += test_02.txt
FILES += test_gnl.c

all: $(FILES)

cor%:
	@$(MAKE) build_cora
	@$(MAKE) build_corb
	@$(MAKE) build_corc
%.txt:
	@$(MAKE) build_parrot.txt
	@$(MAKE) build_p_racc.txt
	@$(MAKE) build_test_01.txt
	@$(MAKE) build_test_02.txt

%.c:
	@$(MAKE) build_test_gnl.c
	@printf "$(B_WI)🦝 \tOptions:\n\t$(NEOR)-->\t$(BABY)'make $(MINT)test_mandatory'\n\t$(NEOR)-->\t$(BABY)'make $(MINT)test_bonus'"
	@printf "$(RESET)🦝"


test_mandatory: $(FILES) get_next_line.h
	@rm -rf tester
	@printf "$(MINT)🦝"
	cc -g -o0 test_gnl.c get_next_line.c get_next_line_utils.c -o tester
	@printf "$(RESET)🦝"

test_bonus: $(FILES) get_next_line_bonus.h
	@rm -rf tester
	@printf "$(MINT)🦝"
	cc -g -o0 test_gnl.c get_next_line_bonus.c get_next_line_utils_bonus.c -o tester
	@printf "$(RESET)🦝"


.PHONY: all ($FILES) build_test_gnl.c test_bonus test_mandatory



build_test_gnl.c:
	@printf "$(NEOR) Building test_gnl.c... $(RESET)"
	@printf "$(MINT)🦝\n\n"
	@> test_gnl.c
	printf '/* ************************************************************************** */\n'>> test_gnl.c
	printf '/*                                                                            */\n'>> test_gnl.c
	printf '/*                                                        :::      ::::::::   */\n'>> test_gnl.c
	printf '/*   test_gnl.c                                         :+:      :+:    :+:   */\n'>> test_gnl.c
	printf '/*                                                    +:+ +:+         +:+     */\n'>> test_gnl.c
	printf '/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */\n'>> test_gnl.c
	printf '/*                                                +#+#+#+#+#+   +#+           */\n'>> test_gnl.c
	printf '/*   Created: 2025/05/31 14:21:21 by lde-san-          #+#    #+#             */\n'>> test_gnl.c
	printf '/*   Updated: 2025/06/07 09:18:52 by lde-san-         ###   ########.fr       */\n'>> test_gnl.c
	printf '/*                                                                            */\n'>> test_gnl.c
	printf '/* ************************************************************************** */\n'>> test_gnl.c
	@printf '\n'>> test_gnl.c
	@printf '#include <stdio.h>\n'>> test_gnl.c
	@printf '#include "get_next_line_bonus.h"\n'>> test_gnl.c
	@printf '\n'>> test_gnl.c
	@printf '#define RSET	"'\\\\'033[0m"\n'>> test_gnl.c
	@printf '#define B_WI    "'\\\\'033[1;37m"\n'>> test_gnl.c
	@printf '#define MINT	"'\\\\'033[38;2;55;250;133;48;2;0;0;0m"\n'>> test_gnl.c
	@printf '#define LIME	"'\\\\'033[38;2;0;255;0m"\n'>> test_gnl.c
	@printf '#define NEOR	"'\\\\'033[3m'\\\\'033[38;2;255;153;51m"\n'>> test_gnl.c
	@printf '\n'>> test_gnl.c
	@printf 'int main(int arc, char *wordy[])\n'>> test_gnl.c
	@printf '{\n'>> test_gnl.c
	@printf '	char *line;\n'>> test_gnl.c
	@printf '	int	frames;\n'>> test_gnl.c
	@printf '	int	loops;\n'>> test_gnl.c
	@printf '	int     guide;\n'>> test_gnl.c
	@printf '	int fd;\n'>> test_gnl.c
	@printf '	int *fdeez;\n'>> test_gnl.c
	@printf '	int total_fds;\n'>> test_gnl.c
	@printf '	int lines_from_each;\n'>> test_gnl.c
	@printf '	int nulos;\n'>> test_gnl.c
	@printf '\n'>> test_gnl.c
	@printf '	if (arc == 1)\n'>> test_gnl.c
	@printf '	{\n'>> test_gnl.c
	@printf '		printf("'\\\\'n" B_WI "Wordy options:'\\\\'n'\\\\'n" RSET);\n'>> test_gnl.c
	@printf '		printf("'\\\\'t" MINT "for stdin_mandatory'\\\\'t" RSET LIME "--> " RSET NEOR "0'\\\\'n" RSET);\n'>> test_gnl.c
	@printf '		printf("'\\\\'t" MINT "for chosenfd_mandatory'\\\\'t" RSET LIME "--> " RSET NEOR "chosenfd'\\\\'n" RSET);\n'>> test_gnl.c
	@printf '		printf("'\\\\'t" MINT "for chosenfd_bonus'\\\\'t" RSET LIME "--> " RSET NEOR "B chosenfd_1 chosenfd_2 chosenfd_... lines_from_each'\\\\'n'\\\\'n" RSET);\n'>> test_gnl.c
	@printf '		printf(NEOR "note: file names can'\''t start with '\''B'\'' or '\''0'\'''\\\\'n" RSET);\n'>> test_gnl.c
	@printf '		return (1);\n'>> test_gnl.c
	@printf '	}\n'>> test_gnl.c
	@printf '	\n'>> test_gnl.c
	@printf '	if (wordy[1][0] == '\''B'\'' && arc != 2)\n'>> test_gnl.c
	@printf '	{\n'>> test_gnl.c
	@printf '	        if (arc < 4)\n'>> test_gnl.c
	@printf '	        {\n'>> test_gnl.c
	@printf '	                  printf("'\\\\'n" B_WI "Wordy options:'\\\\'n'\\\\'n" RSET);\n'>> test_gnl.c
	@printf '	                  printf("'\\\\'t" MINT "for chosenfd_bonus'\\\\'t" RSET LIME "--> " RSET NEOR "B chosenfd_1 chosenfd_2 chosenfd_... lines_from_each'\\\\'n'\\\\'n" RSET);\n'>> test_gnl.c
	@printf '		          return(printf("'\\\\'t" MINT "Bonus requires multiple fds, '\\\\'n'\\\\'tand last argument must be an '\\\\'n'\\\\'tunsigned int. Not" B_WI " '\''%%s'\'''\\\\'n" RSET, wordy[arc - 1]), 1);\n'>> test_gnl.c
	@printf '	        }\n'>> test_gnl.c
	@printf '	        lines_from_each = atoi(wordy[arc - 1]);\n'>> test_gnl.c
	@printf '	        total_fds = arc - 3;\n'>> test_gnl.c
	@printf '	        if (lines_from_each < 1)\n'>> test_gnl.c
	@printf '	                  return(printf("'\\\\'t" MINT "For Bonus, last argument must be an unsigned int. Not" B_WI " '\''%%s'\'''\\\\'n" RSET, wordy[arc - 1]), 1);\n'>> test_gnl.c
	@printf '	        \n'>> test_gnl.c
	@printf '////////////////// BONUS ///////////////////			\n'>> test_gnl.c
	@printf '			fdeez = malloc(total_fds * sizeof(int));\n'>> test_gnl.c
	@printf '			if(!fdeez)\n'>> test_gnl.c
	@printf '				return (printf(MINT "Algo no esta piolando papa'\\\\'n" RSET), 1);\n'>> test_gnl.c
	@printf '			guide = 0;\n'>> test_gnl.c
	@printf '			while (guide < total_fds)\n'>> test_gnl.c
	@printf '			{\n'>> test_gnl.c
	@printf '				if (wordy[guide + 2][0] == '\''0'\'')\n'>> test_gnl.c
	@printf '					fd = 0;\n'>> test_gnl.c
	@printf '				else\n'>> test_gnl.c
	@printf '					fd = open(wordy[guide + 2], O_RDONLY);\n'>> test_gnl.c
	@printf '				if(fd < 0)\n'>> test_gnl.c
	@printf '					return (printf(MINT "Algo no esta piolando papa'\\\\'n" RSET), 1);\n'>> test_gnl.c
	@printf '				fdeez[guide] = fd;\n'>> test_gnl.c
	@printf '				guide++;\n'>> test_gnl.c
	@printf '			}\n'>> test_gnl.c
	@printf '			nulos = 0;\n'>> test_gnl.c
	@printf '			while (nulos < total_fds)\n'>> test_gnl.c
	@printf '			{\n'>> test_gnl.c
	@printf '				fd = 0;\n'>> test_gnl.c
	@printf '				guide = 0;\n'>> test_gnl.c
	@printf '				while (fd < total_fds)\n'>> test_gnl.c
	@printf '				{\n'>> test_gnl.c
	@printf '					while (guide < lines_from_each && ((line = get_next_line(fdeez[fd])) != NULL))\n'>> test_gnl.c
	@printf '					{\n'>> test_gnl.c
	@printf '						printf("%%s", line);\n'>> test_gnl.c
	@printf '						free(line);\n'>> test_gnl.c
	@printf '						guide++;\n'>> test_gnl.c
	@printf '					}\n'>> test_gnl.c
	@printf '					guide = 0;\n'>> test_gnl.c
	@printf '					fd++;\n'>> test_gnl.c
	@printf '				}\n'>> test_gnl.c
	@printf '				if (!line)\n'>> test_gnl.c
	@printf '					nulos++;\n'>> test_gnl.c
	@printf '			}\n'>> test_gnl.c
	@printf '			fd = 0;\n'>> test_gnl.c
	@printf '			while (fd < total_fds)\n'>> test_gnl.c
	@printf '			{\n'>> test_gnl.c
	@printf '				if (fdeez[fd] == 0)\n'>> test_gnl.c
	@printf '				{\n'>> test_gnl.c
	@printf '					fd++;\n'>> test_gnl.c
	@printf '					continue;\n'>> test_gnl.c
	@printf '				}\n'>> test_gnl.c
	@printf '				close(fdeez[fd]);\n'>> test_gnl.c
	@printf '				fd++;\n'>> test_gnl.c
	@printf '			}\n'>> test_gnl.c
	@printf '			free(fdeez);\n'>> test_gnl.c
	@printf '	        return(0);\n'>> test_gnl.c
	@printf '	}\n'>> test_gnl.c
	@printf '///////////////// Mandatory ////////////////\n'>> test_gnl.c
	@printf '	if (wordy[1][0] == '\''0'\'')\n'>> test_gnl.c
	@printf '	{\n'>> test_gnl.c
	@printf '		fd = 0;\n'>> test_gnl.c
	@printf '	}\n'>> test_gnl.c
	@printf '	else\n'>> test_gnl.c
	@printf '		fd = open(wordy[1], O_RDONLY);\n'>> test_gnl.c
	@printf '	\n'>> test_gnl.c
	@printf '	if (fd < 0)\n'>> test_gnl.c
	@printf '	{\n'>> test_gnl.c
	@printf '		printf(MINT "Algo no esta piolando papa'\\\\'n" RSET);\n'>> test_gnl.c
	@printf '		printf(NEOR "note: file names can'\''t start with '\''B'\'' or '\''0'\''" RSET);\n'>> test_gnl.c
	@printf '		return (1);\n'>> test_gnl.c
	@printf '	}\n'>> test_gnl.c
	@printf '	while ((line = get_next_line(fd)) != NULL)\n'>> test_gnl.c
	@printf '	{\n'>> test_gnl.c
	@printf '		printf("%%s", line);\n'>> test_gnl.c
	@printf '		free(line);\n'>> test_gnl.c
	@printf '	}\n'>> test_gnl.c
	@printf '	close(fd);\n'>> test_gnl.c
	@printf '\n'>> test_gnl.c
	@printf '///// PARROT TIME BABY! //////\n'>> test_gnl.c
	@printf '\n'>> test_gnl.c
	@printf '	if (wordy[1][0] == '\''p'\'')\n'>> test_gnl.c
	@printf '	{\n'>> test_gnl.c
	@printf '	        if (wordy[1][1] == '\''a'\'')\n'>> test_gnl.c
	@printf '		        loops = 0;\n'>> test_gnl.c
	@printf '		else\n'>> test_gnl.c
	@printf '		        loops = 5;\n'>> test_gnl.c
	@printf '		system("clear");\n'>> test_gnl.c
	@printf '		while(loops < 10)\n'>> test_gnl.c
	@printf '		{\n'>> test_gnl.c
	@printf '			frames = 0;\n'>> test_gnl.c
	@printf '			if (wordy[1][1] == '\''a'\'')\n'>> test_gnl.c
	@printf '				frames += 16;\n'>> test_gnl.c
	@printf '			fd = open(wordy[1], O_RDONLY);\n'>> test_gnl.c
	@printf '			while (((line = get_next_line(fd)) != NULL) && frames < 26)\n'>> test_gnl.c
	@printf '			{\n'>> test_gnl.c
	@printf '				if (line[0] == '\''='\'')\n'>> test_gnl.c
	@printf '				{\n'>> test_gnl.c
	@printf '					frames++;\n'>> test_gnl.c
	@printf '					usleep(70000);\n'>> test_gnl.c
	@printf '					system("clear");\n'>> test_gnl.c
	@printf '					continue ;\n'>> test_gnl.c
	@printf '				}\n'>> test_gnl.c
	@printf '				if (wordy[1][1] == '\''a'\'')\n'>> test_gnl.c
	@printf '				        printf(MINT "%%s" RSET, line);\n'>> test_gnl.c
	@printf '				else\n'>> test_gnl.c
	@printf '				        printf(B_WI "%%s" RSET, line);\n'>> test_gnl.c
	@printf '				free(line);\n'>> test_gnl.c
	@printf '			}\n'>> test_gnl.c
	@printf '			close(fd);\n'>> test_gnl.c
	@printf '			loops++;\n'>> test_gnl.c
	@printf '		}\n'>> test_gnl.c
	@printf '	}\n'>> test_gnl.c
	@printf '	if (wordy[1][0] == '\''p'\'' && wordy[1][1] == '\''_'\'')\n'>> test_gnl.c
	@printf '	{\n'>> test_gnl.c
	@printf '		loops = 0;\n'>> test_gnl.c
	@printf '		system("clear");\n'>> test_gnl.c
	@printf '		while(loops < 3)\n'>> test_gnl.c
	@printf '		{\n'>> test_gnl.c
	@printf '			frames = 0;\n'>> test_gnl.c
	@printf '			fd = open(wordy[1], O_RDONLY);\n'>> test_gnl.c
	@printf '			while (((line = get_next_line(fd)) != NULL) && frames < 26)\n'>> test_gnl.c
	@printf '			{\n'>> test_gnl.c
	@printf '			        guide = 0;\n'>> test_gnl.c
	@printf '				if (line[0] == '\''='\'')\n'>> test_gnl.c
	@printf '				{\n'>> test_gnl.c
	@printf '					frames++;\n'>> test_gnl.c
	@printf '					usleep(70000);\n'>> test_gnl.c
	@printf '					system("clear");\n'>> test_gnl.c
	@printf '					continue ;\n'>> test_gnl.c
	@printf '				}\n'>> test_gnl.c
	@printf '                                while (line[guide])\n'>> test_gnl.c
	@printf '                                {\n'>> test_gnl.c
	@printf '	                                if (line[guide] == '\''@'\'')\n'>> test_gnl.c
	@printf '		                                write(1, " ", 1);\n'>> test_gnl.c
	@printf '	                                else if (line[guide] == '\''#'\'')\n'>> test_gnl.c
	@printf '		                                write(1, ",", 1);\n'>> test_gnl.c
	@printf '	                                else if (line[guide] == '\''+'\'')\n'>> test_gnl.c
	@printf '		                                write(1, "'\''", 1);\n'>> test_gnl.c
	@printf '	                                else if (line[guide] == '\''/'\'')\n'>> test_gnl.c
	@printf '		                                write(1, "-", 1);\n'>> test_gnl.c
	@printf '	                                else if (line[guide] == '\'':'\'')\n'>> test_gnl.c
	@printf '		                                write(1, ":", 1);\n'>> test_gnl.c
	@printf '	                                else if (line[guide] == '\''-'\'')\n'>> test_gnl.c
	@printf '		                                write(1, "/", 1);\n'>> test_gnl.c
	@printf '	                                else if (line[guide] == '\'''\\\\''\'''\'')\n'>> test_gnl.c
	@printf '		                                write(1, "+", 1);\n'>> test_gnl.c
	@printf '	                                else if (line[guide] == '\'','\'')\n'>> test_gnl.c
	@printf '		                                write(1, "#", 1);\n'>> test_gnl.c
	@printf '	                                else if (line[guide] == '\'' '\'')\n'>> test_gnl.c
	@printf '		                                write(1, "@", 1);\n'>> test_gnl.c
	@printf '	                                else\n'>> test_gnl.c
	@printf '		                                write(1, &line[guide], 1); // Keep unchanged chars\n'>> test_gnl.c
	@printf '	                                guide++;\n'>> test_gnl.c
	@printf '                                }\n'>> test_gnl.c
	@printf '				free(line);\n'>> test_gnl.c
	@printf '			}\n'>> test_gnl.c
	@printf '			close(fd);\n'>> test_gnl.c
	@printf '			loops++;\n'>> test_gnl.c
	@printf '		}\n'>> test_gnl.c
	@printf '	}\n'>> test_gnl.c
	@printf '	return (0);\n'>> test_gnl.c
	@printf '}\n'>> test_gnl.c
	@open test_gnl.c
	@printf "$(BLACK)🦝"



build_test_01.txt:
	@printf "$(NEOR) Building test_01.txt... $(RESET)"
	@printf "$(MINT)🦝\n\n"
	@> test_01.txt
	@printf 'uoggwdg\n'>> test_01.txt
	@printf 'qwduiowdio\n'>> test_01.txt
	@printf 'gqduowdhqwdhhod\n'>> test_01.txt
	@printf 'qdhwhl"whhhkldhl"wdlwdhkl\n'>> test_01.txt
	@printf ''\\\\'n'\\\\'0'\\\\'0'\\\\'0'\\\\'0'\\\\'ip2edhopdp\n'>> test_01.txt
	@printf 'iodyyidyip\n'>> test_01.txt
	@printf '			1hicfhiwcfi\n'>> test_01.txt
	@printf '			      qiphdihc;ich/////'\\\\''\\\\''\\\\''\\\\''\\\\'&&&(&^!£&%%&£"(\n'>> test_01.txt
	@printf '@bash echo -e tufrutaesbonita > 3\n'>> test_01.txt
	@printf 'echo -e tufrutaesbonita > 3\n'>> test_01.txt
	@printf '\n'>> test_01.txt
	@printf 'k\n'>> test_01.txt
	@chmod 777 test_01.txt
	@open test_01.txt
	@printf "$(BLACK)🦝"



build_test_02.txt:
	@printf "$(NEOR) Building test_02.txt... $(RESET)"
	@printf "$(MINT)🦝\n\n"
	@> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@printf '\n'>> test_02.txt
	@chmod 777 test_02.txt
	@open test_02.txt
	@printf "$(BLACK)🦝"



build_parrot.txt:
	@printf "$(NEOR) Building parrot.txt... $(RESET)"
	@printf "$(MINT)🦝\n\n"
	@> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '              .;:;,.,;:,.\n'>> parrot.txt
	@printf '            .cc;.  ...  .;c.\n'>> parrot.txt
	@printf '         .,,cc:cc:lxxxl:ccc:;,.\n'>> parrot.txt
	@printf '        .lo;...lKKklllookl..cO;\n'>> parrot.txt
	@printf '      .cl;.,;'\''.okl;...'\''.;,..'\'';:.\n'>> parrot.txt
	@printf '     .:o;;dkx,.ll..,cc::,..,'\''.;:,.\n'>> parrot.txt
	@printf '     co..lKKKkokl.'\'':lllo;'\'''\''ol..;dl.\n'>> parrot.txt
	@printf '   .,c;.,xKKKKKKo.'\'':llll;.'\''oOxo,.cl,.\n'>> parrot.txt
	@printf '   cNo..lKKKKKKKo'\'''\'';llll;;okKKKl..oNc\n'>> parrot.txt
	@printf '   cNo..lKKKKKKKko;'\'':c:,'\''lKKKKKo'\''.oNc\n'>> parrot.txt
	@printf '   cNo..lKKKKKKKKKl.....'\''dKKKKKxc,l0:\n'>> parrot.txt
	@printf '   .c:'\''.lKKKKKKKKKk;....oKKKKKKo'\''.oNc\n'>> parrot.txt
	@printf '     ,:.,oxOKKKKKKKOxxxxOKKKKKKxc,;ol:.\n'>> parrot.txt
	@printf '     ;c..'\'''\'':oookKKKKKKKKKKKKKKKKKk:.'\''clc.\n'>> parrot.txt
	@printf '   ,dl'\''.,oxo;'\'''\'';oxOKKKKKKKKKKKKKKKOxxl::;,,.\n'>> parrot.txt
	@printf '  .dOc..lKKKkoooookKKKKKKKKKKKKKKKKKKKxl,;ol.\n'>> parrot.txt
	@printf '  cx,'\'';okKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKl..;lc.\n'>> parrot.txt
	@printf '  co..:dddddddddddddddddddddddddddddddddl:;'\'''\''::.\n'>> parrot.txt
	@printf '  co..........................................."\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '=\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '           .ccccccc.\n'>> parrot.txt
	@printf '      .,,,;cooolccol;;,,.\n'>> parrot.txt
	@printf '     .dOx;..;lllll;..;xOd.\n'>> parrot.txt
	@printf '   .cdo,'\'',loOXXXXXkll;'\'';odc.\n'>> parrot.txt
	@printf '  ,oo:;c,'\'':oko:cccccc,...ckl.\n'>> parrot.txt
	@printf '  ;c.;kXo..::..;c::'\''.......oc\n'>> parrot.txt
	@printf ',dc..oXX0kk0o.'\'':lll;..cxxc.,ld,\n'>> parrot.txt
	@printf 'kNo.'\''oXXXXXXo'\'''\'':lll;..oXXOd;cOd.\n'>> parrot.txt
	@printf 'KOc;oOXXXXXXo.'\'':lol,..dXXXXl'\'';xc\n'>> parrot.txt
	@printf 'Ol,:k0XXXXXX0c.,clc'\''.:0XXXXx,.oc\n'>> parrot.txt
	@printf 'KOc;dOXXXXXXXl..'\'';'\''..lXXXXXd..oc\n'>> parrot.txt
	@printf 'dNo..oXXXXXXXOx:..'\''lxOXXXXXk,.:; ..\n'>> parrot.txt
	@printf 'cNo..lXXXXXXXXXOolkXXXXXXXXXkl;..;:.;.\n'>> parrot.txt
	@printf '.,;'\''.,dkkkkk0XXXXXXXXXXXXXXXXXOxxl;,;,;l:.\n'>> parrot.txt
	@printf '  ;c.;:'\'''\'''\'''\'''\'':doOXXXXXXXXXXXXXXXXXXOdo;'\'';clc.\n'>> parrot.txt
	@printf '  ;c.lOdood:'\'''\'''\''oXXXXXXXXXXXXXXXXXXXXXk,..;ol.\n'>> parrot.txt
	@printf '  '\'';.:xxxxxocccoxxxxxxxxxxxxxxxxxxxxxxl::'\''.'\'';;.\n'>> parrot.txt
	@printf '  '\'';........................................;l'\''\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '=\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '        .;:;;,.,;;::,.\n'>> parrot.txt
	@printf '     .;'\'':;........'\''co:.\n'>> parrot.txt
	@printf '   .clc;'\'''\'':cllllc::,.'\'':c.\n'>> parrot.txt
	@printf '  .lo;;o:coxdlooollc;'\'',::,,.\n'>> parrot.txt
	@printf '.c:'\''.,cl,.'\''lc'\'',,;;'\''......cO;\n'>> parrot.txt
	@printf 'do;'\'';oxoc::l;;llllc'\''.'\'';;'\''.'\'';.\n'>> parrot.txt
	@printf 'c..ckkkkkkkd,;llllc'\''.:kkd;.'\'':c.\n'>> parrot.txt
	@printf ''\''.,okkkkkkkkc;llllc,.:kkkdl,cO;\n'>> parrot.txt
	@printf '..;xkkkkkkkkc,ccll:,;okkkkk:,cl,\n'>> parrot.txt
	@printf '..,dkkkkkkkkc..,;,'\''ckkkkkkkc;ll.\n'>> parrot.txt
	@printf '..'\''okkkkkkkko,....'\''okkkkkkkc,:c.\n'>> parrot.txt
	@printf 'c..ckkkkkkkkkdl;,:okkkkkkkkd,.'\'','\'';.\n'>> parrot.txt
	@printf 'd..'\'':lxkkkkkkkkxxkkkkkkkkkkkdoc;,;'\''..'\''.,.\n'>> parrot.txt
	@printf 'o...'\'''\'';llllldkkkkkkkkkkkkkkkkkkdll;..'\''cdo.\n'>> parrot.txt
	@printf 'o..,l;'\'''\'''\'''\'''\'''\'';dkkkkkkkkkkkkkkkkkkkkdlc,..;lc.\n'>> parrot.txt
	@printf 'o..;lc;;;;;;,,;clllllllllllllllllllllc'\''..,:c.\n'>> parrot.txt
	@printf 'o..........................................;'\''\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '=\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '           .,,,,,,,,,.\n'>> parrot.txt
	@printf '         .ckKxodooxOOdcc.\n'>> parrot.txt
	@printf '      .cclooc'\''....'\'';;cool.\n'>> parrot.txt
	@printf '     .loc;;;;clllllc;;;;;:;,.\n'>> parrot.txt
	@printf '   .c:'\''.,okd;;cdo:::::cl,..oc\n'>> parrot.txt
	@printf '  .:o;'\'';okkx;'\'';;,'\'';::;'\''....,;,.\n'>> parrot.txt
	@printf '  co..ckkkkkddk:,cclll;.,c:,:o:.\n'>> parrot.txt
	@printf '  co..ckkkkkkkk:,cllll;.:kkd,.'\'':c.\n'>> parrot.txt
	@printf '.,:;.,okkkkkkkk:,cclll;.:kkkdl;;o:.\n'>> parrot.txt
	@printf 'cNo..ckkkkkkkkko,.;llc,.ckkkkkc..oc\n'>> parrot.txt
	@printf ',dd;.:kkkkkkkkkx;..;:,.'\''lkkkkko,.:,\n'>> parrot.txt
	@printf '  ;c.ckkkkkkkkkkc.....;ldkkkkkk:.,'\''\n'>> parrot.txt
	@printf ',dc..'\''okkkkkkkkkxoc;;cxkkkkkkkkc..,;,.\n'>> parrot.txt
	@printf 'kNo..'\'':lllllldkkkkkkkkkkkkkkkkkdcc,.;l.\n'>> parrot.txt
	@printf 'KOc,l;'\'''\'''\'''\'''\'''\'''\'';lldkkkkkkkkkkkkkkkkkc..;lc.\n'>> parrot.txt
	@printf 'xx:'\'':;;;;,.,,...,;;cllllllllllllllc;'\''.;oo,\n'>> parrot.txt
	@printf 'cNo.....................................oc\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '=\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '                   .ccccccc.\n'>> parrot.txt
	@printf '               .ccckNKOOOOkdcc.\n'>> parrot.txt
	@printf '            .;;cc:ccccccc:,::::,,.\n'>> parrot.txt
	@printf '         .c;:;.,cccllxOOOxlllc,;ol.\n'>> parrot.txt
	@printf '        .lkc,coxo:;oOOxooooooo;..:,\n'>> parrot.txt
	@printf '      .cdc.,dOOOc..cOd,.'\'',,;'\''....'\'':c.\n'>> parrot.txt
	@printf '      cNx'\''.lOOOOxlldOl..;lll;.....cO;\n'>> parrot.txt
	@printf '     ,do;,:dOOOOOOOOOl'\'''\'':lll;..:d:.'\''c,\n'>> parrot.txt
	@printf '     co..lOOOOOOOOOOOl'\'''\'':lll;.'\''lOd,.cd.\n'>> parrot.txt
	@printf '     co.,dOOOOOOOOOOOo,.;llc,.,dOOc..dc\n'>> parrot.txt
	@printf '     co..lOOOOOOOOOOOOc.'\'';:,..cOOOl..oc\n'>> parrot.txt
	@printf '   .,:;.'\''::lxOOOOOOOOOo:'\''...,:oOOOc..dc\n'>> parrot.txt
	@printf '   ;Oc..cl'\'''\'':llxOOOOOOOOdcclxOOOOx,.cd.\n'>> parrot.txt
	@printf '  .:;'\'';lxl'\'''\'''\'''\'''\'':lldOOOOOOOOOOOOOOc..oc\n'>> parrot.txt
	@printf ',dl,.'\''cooc:::,....,::coooooooooooc'\''.c:\n'>> parrot.txt
	@printf 'cNo.................................oc\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '=\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '                        .cccccccc.\n'>> parrot.txt
	@printf '                  .,,,;;cc:cccccc:;;,.\n'>> parrot.txt
	@printf '                .cdxo;..,::cccc::,..;l.\n'>> parrot.txt
	@printf '               ,oo:,,:c:cdxxdllll:;,'\'';:,.\n'>> parrot.txt
	@printf '             .cl;.,oxxc'\''.,cc,.'\'',;;'\''...oNc\n'>> parrot.txt
	@printf '             ;Oc..cxxxc'\''.,c;..;lll;...cO;\n'>> parrot.txt
	@printf '           .;;'\'',:ldxxxdoldxc..;lll:'\''...'\''c,\n'>> parrot.txt
	@printf '           ;c..cxxxxkxxkxxxc'\''.;lll:'\'''\'','\''.cdc.\n'>> parrot.txt
	@printf '         .c;.;odxxxxxxxxxxxd;.,cll;.,l:.'\''dNc\n'>> parrot.txt
	@printf '        .:,'\'''\''ccoxkxxkxxxxxxx:..,:;'\''.:xc..oNc\n'>> parrot.txt
	@printf '      .lc,.'\''lc'\'':dxxxkxxxxxxxdl,...'\'',lx:..dNc\n'>> parrot.txt
	@printf '     .:,'\'',coxoc;;ccccoxxxxxxxxo:::oxxo,.cdc.\n'>> parrot.txt
	@printf '  .;'\'':;.'\''oxxxxxc'\'''\'''\'''\'''\'';cccoxxxxxxxxxkxc..oc\n'>> parrot.txt
	@printf ',do:'\''..,:llllll:;;;;;;,..,;:lllllllll;..oc\n'>> parrot.txt
	@printf 'cNo.....................................oc\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '=\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '                              .ccccc.\n'>> parrot.txt
	@printf '                         .cc;'\''coooxkl;.\n'>> parrot.txt
	@printf '                     .:c:::c:,;,,,;c;;,.'\''.\n'>> parrot.txt
	@printf '                   .clc,'\'',:,..:xxocc;...c;\n'>> parrot.txt
	@printf '                  .c:,'\'';:ox:..:c,,,,,,...cd,\n'>> parrot.txt
	@printf '                .c:'\''.,oxxxxl::l:.;loll;..;ol.\n'>> parrot.txt
	@printf '                ;Oc..:xxxxxxxxx:.,llll,....oc\n'>> parrot.txt
	@printf '             .,;,'\'',:loxxxxxxxxx:.,llll;.,;.'\''ld,\n'>> parrot.txt
	@printf '            .lo;..:xxxxxxxxxxxx:.'\''cllc,.:l:'\''cO;\n'>> parrot.txt
	@printf '           .:;...'\''cxxxxxxxxxxxxol;,::,..cdl;;l'\''\n'>> parrot.txt
	@printf '         .cl;'\'':;'\'''\'';oxxxxxxxxxxxxx:....,cooc,cO;\n'>> parrot.txt
	@printf '     .,,,::;,lxoc:,,:lxxxxxxxxxxxo:,,;lxxl;'\''oNc\n'>> parrot.txt
	@printf '   .cdxo;'\'':lxxxxxxc'\'''\'';cccccoxxxxxxxxxxxxo,.;lc.\n'>> parrot.txt
	@printf '  .loc'\''.'\''lxxxxxxxxocc;'\'''\'''\'''\'''\'';ccoxxxxxxxxx:..oc\n'>> parrot.txt
	@printf 'occ'\''..'\'',:cccccccccccc:;;;;;;;;:ccccccccc,.'\''c,\n'>> parrot.txt
	@printf 'Ol;......................................;l'\''\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '=\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '                              ,ddoodd,\n'>> parrot.txt
	@printf '                         .cc'\'' ,ooccoo,'\''cc.\n'>> parrot.txt
	@printf '                      .ccldo;....,,...;oxdc.\n'>> parrot.txt
	@printf '                   .,,:cc;.'\'''\''..;lol;;,'\''..lkl.\n'>> parrot.txt
	@printf '                  .dkc'\'';:ccl;..;dl,.'\'''\''.....oc\n'>> parrot.txt
	@printf '                .,lc'\'',cdddddlccld;.,;c::'\''..,cc:.\n'>> parrot.txt
	@printf '                cNo..:ddddddddddd;'\'':clll;,c,'\'';xc\n'>> parrot.txt
	@printf '               .lo;,clddddddddddd;'\'':clll;:kc..;'\''\n'>> parrot.txt
	@printf '             .,:;..:ddddddddddddd:'\'';clll;;ll,..\n'>> parrot.txt
	@printf '             ;Oc..'\'';:ldddddddddddl,.,c:;'\'';dd;..\n'>> parrot.txt
	@printf '           .'\'''\'''\'',:lc,'\''cdddddddddddo:,'\''...'\''cdd;..\n'>> parrot.txt
	@printf '         .cdc'\'';lddd:'\'';lddddddddddddd;.'\'';lddl,..\n'>> parrot.txt
	@printf '      .,;::;,cdddddol;;lllllodddddddlcodddd:.'\''l,\n'>> parrot.txt
	@printf '     .dOc..,lddddddddlccc;'\'''\'';cclddddddddddd;,ll.\n'>> parrot.txt
	@printf '   .coc,;::ldddddddddddddl:ccc:ldddddddddlc,ck;\n'>> parrot.txt
	@printf ',dl::,..,cccccccccccccccccccccccccccccccc:;'\'':xx,\n'>> parrot.txt
	@printf 'cNd.........................................;lOc\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '=\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '                        .cccc;;cc;'\'';c.\n'>> parrot.txt
	@printf '                      .,:dkdc:;;:c:,:d:.\n'>> parrot.txt
	@printf '                     .loc'\''.,cc::::::,..,:.\n'>> parrot.txt
	@printf '                   .cl;....;dkdccc::,...c;\n'>> parrot.txt
	@printf '                  .c:,'\'';:'\''..ckc'\'',;::;....;c.\n'>> parrot.txt
	@printf '                .c:'\''.,dkkoc:ok:;llllc,,c,'\'';:.\n'>> parrot.txt
	@printf '               .;c,'\'';okkkkkkkk:,lllll,:kd;.;:,.\n'>> parrot.txt
	@printf '               co..:kkkkkkkkkk:;llllc'\'':kkc..oNc\n'>> parrot.txt
	@printf '             .cl;.,okkkkkkkkkkc,:cll;,okkc'\''.cO;\n'>> parrot.txt
	@printf '             ;k:..ckkkkkkkkkkkl..,;,.;xkko:'\'',l'\''\n'>> parrot.txt
	@printf '            .,...'\'';dkkkkkkkkkkd;.....ckkkl'\''.cO;\n'>> parrot.txt
	@printf '         .,,:,.;oo:ckkkkkkkkkkkdoc;;cdkkkc..cd,\n'>> parrot.txt
	@printf '      .cclo;,ccdkkl;llccdkkkkkkkkkkkkkkkd,.c;\n'>> parrot.txt
	@printf '     .lol:;;okkkkkxooc::loodkkkkkkkkkkkko'\''.oc\n'>> parrot.txt
	@printf '   .c:'\''..lkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkd,.oc\n'>> parrot.txt
	@printf '  .lo;,ccdkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkd,.c;\n'>> parrot.txt
	@printf ',dx:..;lllllllllllllllllllllllllllllllloc'\''...\n'>> parrot.txt
	@printf 'cNO;........................................\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '=\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '                   .ccc;;cc;'\'';c.\n'>> parrot.txt
	@printf '                .ckx;'\''::;;;;:c'\'':c.\n'>> parrot.txt
	@printf '             .,:c:c:::oxxocoo::::,'\'',.\n'>> parrot.txt
	@printf '            .odc'\''..:lkkoolllllo;..;d,\n'>> parrot.txt
	@printf '            ;c..:o:..;:..'\'',;'\''.......;.\n'>> parrot.txt
	@printf '           ,c..:0Xx::o:.,cllc:,'\''::,.,c.\n'>> parrot.txt
	@printf '           ;c;lkXXXXXXl.;lllll;lXXOo;'\'':c.\n'>> parrot.txt
	@printf '         ,dc.oXXXXXXXXl.,lllll;lXXXXx,c0:\n'>> parrot.txt
	@printf '         ;Oc.oXXXXXXXXo.'\'':ll:;'\''oXXXXO;,l'\''\n'>> parrot.txt
	@printf '         '\''l;;OXXXXXXXXd'\''.'\''::'\''..dXXXXO;,l'\''\n'>> parrot.txt
	@printf '         '\''l;:0XXXXXXXX0x:...,:o0XXXXk,:x,\n'>> parrot.txt
	@printf '         '\''l;;kXXXXXXKXXXkol;oXXXXXXXO;oNc\n'>> parrot.txt
	@printf '        ,c'\''..ckk0XXXXXXXXXX00XXXXXXX0:;o:.\n'>> parrot.txt
	@printf '      .'\'':;..:dd::ooooOXXXXXXXXXXXXXXXo..c;\n'>> parrot.txt
	@printf '    .'\'','\'',:co0XX0kkkxx0XXXXXXXXXXXXXXX0c..;l.\n'>> parrot.txt
	@printf '  .:;'\''..oXXXXXXXXXXXXXXXXXXXXXXXXXXXXXko;'\'';:.\n'>> parrot.txt
	@printf '.cdc..:oOXXXXXXXXKXXXXXXXXXXXXXXXXXXXXXXo..oc\n'>> parrot.txt
	@printf ':0o...:dxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxo,.:,\n'>> parrot.txt
	@printf 'cNo........................................;'\''\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '\n'>> parrot.txt
	@printf '=\n'>> parrot.txt
	@chmod 777 parrot.txt
	@open parrot.txt
	@printf "$(RESET)🦝"



build_p_racc.txt:


build_cora:
	@printf "$(NEOR) Building cora... $(RESET)"
	@printf "$(MINT)🦝\n\n"
	@> cora
	@printf '\n'>> cora
	@printf '\n'>> cora
	@printf '\n'>> cora
	@printf '		       ##################\n'>> cora
	@printf '		        ###############\n'>> cora
	@printf '		         ############\n'>> cora
	@printf '		         \n'>> cora
	@printf '		         \n'>> cora
	@printf '		         \n'>> cora
	@chmod 777 cora
	@open cora
	@printf "$(BLACK)🦝"



build_corb:
	@printf "$(NEOR) Building corb... $(RESET)"
	@printf "$(MINT)🦝\n\n"
	@> corb
	@printf '			#####		####\n'>> corb
	@printf '		      ########        #######\n'>> corb
	@printf '		     ##########      ########\n'>> corb
	@printf '		          #########\n'>> corb
	@printf '		           ######\n'>> corb
	@printf '		            ###\n'>> corb
	@chmod 777 corb
	@open corb
	@printf "$(BLACK)🦝"



build_corc:
	@printf "$(NEOR) Building corc... $(RESET)"
	@printf "$(MINT)🦝\n\n"
	@> corc
	@printf '		     ###########   ##########\n'>> corc
	@printf '		     ############ ##########\n'>> corc
	@printf '		      #####################\n'>> corc
	@printf '		     #      #\n'>> corc
	@printf '		      ##   #\n'>> corc
	@printf '		        ### \n'>> corc
	@chmod 777 corc
	@open corc
	@printf "$(BLACK)🦝"

