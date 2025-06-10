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

RESET:= \033[0m

all: files

files: create_test_gnl.c

create_test_gnl.c:
	@printf "$(NEOR) Creating test_gnl.c... $(RESET)"
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
	@printf '		          return(printf("'\\\\'t" MINT "Bonus requires multiple fds, '\\\\'n'\\\\'tand last argument must be an '\\\\'n'\\\\'tunsigned int. Not" B_WI " '\'''\%'s'\'''\\\\'n" RSET, wordy[arc - 1]), 1);\n'>> test_gnl.c
	@printf '	        }\n'>> test_gnl.c
	@printf '	        lines_from_each = atoi(wordy[arc - 1]);\n'>> test_gnl.c
	@printf '	        total_fds = arc - 3;\n'>> test_gnl.c
	@printf '	        if (lines_from_each < 1)\n'>> test_gnl.c
	@printf '	                  return(printf("'\\\\'t" MINT "For Bonus, last argument must be an unsigned int. Not" B_WI " '\'''\%'s'\'''\\\\'n" RSET, wordy[arc - 1]), 1);\n'>> test_gnl.c
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
	@printf '						printf("'\%'s", line);\n'>> test_gnl.c
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
	@printf '		printf("'\%'s", line);\n'>> test_gnl.c
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
	@printf '				        printf(MINT "'\%'s" RSET, line);\n'>> test_gnl.c
	@printf '				else\n'>> test_gnl.c
	@printf '				        printf(B_WI "'\%'s" RSET, line);\n'>> test_gnl.c
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
	@printf "$(RESET)🦝"
