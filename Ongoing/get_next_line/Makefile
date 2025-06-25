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

BUFF_SIZE = 42

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
	@printf "$(B_WI)🦝 Options 🦝:\n$(NEOR)-->\t$(BABY)'make $(MINT)test_mandatory'\n$(NEOR)-->\t$(BABY)'make $(MINT)test_bonus'\n"
	@printf "$(RESET)"

test_mandatory: $(FILES) get_next_line.h
	@rm -rf tester
	@rm -rf test_gnl_B.c
	@rm -rf test_gnl_M.c
	@$(MAKE) build_test_gnl_M.c
	@printf "\n$(MINT)🦝 cc -D BUFFER_SIZE=$(BUFF_SIZE) -Wall -Werror -Wextra test_gnl.c get_next_line.c get_next_line_utils.c -o tester 🦝 \n\n$(RESET)"
	@cc -g -o0 -D BUFFER_SIZE=$(BUFF_SIZE) -Wall -Werror -Wextra test_gnl_M.c get_next_line.c get_next_line_utils.c -o tester
	@printf "$(B_WI)for more info, run$(BABY) './tester' \n\n$(BLACK)"

test_bonus: $(FILES) get_next_line_bonus.h
	@rm -rf tester
	@rm -rf test_gnl_M.c
	@rm -rf test_gnl_B.c
	@$(MAKE) build_test_gnl_B.c
	@printf "\n$(MINT)🦝 cc -D BUFFER_SIZE=$(BUFF_SIZE) -Wall -Werror -Wextra test_gnl.c get_next_line_bonus.c get_next_line_utils_bonus.c -o tester 🦝 \n\n$(RESET)"
	@cc -g -o0 -D BUFFER_SIZE=$(BUFF_SIZE) -Wall -Werror -Wextra test_gnl_B.c get_next_line_bonus.c get_next_line_utils_bonus.c -o tester
	@printf "$(B_WI)for more info, run$(BABY) './tester' \n\n$(BLACK)"

clean: 
	@rm -rf test_gnl_B.c
	@rm -rf test_gnl_M.c
	@rm -rf $(FILES)

fclean: clean
	@rm -rf tester
	
re: fclean all


.PHONY: all ($FILES) build_test_gnl.c test_bonus test_mandatory re fclean clean build_cora build_corb build_corc build_test_02.txt build_test_01.txt build_p_racc.txt build_parrot.txt



build_test_gnl_B.c:
	@printf "$(NEOR) Building test_gnl_B.c... $(RESET)"
	@printf "$(MINT)🦝\n\n"
	@> test_gnl_B.c
	printf "%s\n" '/* ************************************************************************** */'>> test_gnl_B.c
	printf "%s\n" '/*                                                                            */'>> test_gnl_B.c
	printf "%s\n" '/*                                                        :::      ::::::::   */'>> test_gnl_B.c
	printf "%s\n" '/*   test_gnl.c                                         :+:      :+:    :+:   */'>> test_gnl_B.c
	printf "%s\n" '/*                                                    +:+ +:+         +:+     */'>> test_gnl_B.c
	printf "%s\n" '/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */'>> test_gnl_B.c
	printf "%s\n" '/*                                                +#+#+#+#+#+   +#+           */'>> test_gnl_B.c
	printf "%s\n" '/*   Created: 2025/05/31 14:21:21 by lde-san-          #+#    #+#             */'>> test_gnl_B.c
	printf "%s\n" '/*   Updated: 2025/06/07 09:18:52 by lde-san-         ###   ########.fr       */'>> test_gnl_B.c
	printf "%s\n" '/*                                                                            */'>> test_gnl_B.c
	printf "%s\n" '/* ************************************************************************** */'>> test_gnl_B.c
	@printf "%s\n" ''>> test_gnl_B.c
	@printf "%s\n" '#include <stdio.h>'>> test_gnl_B.c
	@printf "%s\n" '#include '\"'get_next_line_bonus.h'\"''>> test_gnl_B.c
	@printf "%s\n" ''>> test_gnl_B.c
	@printf "%s\n" '#define RSET	'\"''\\'033[0m'\"''>> test_gnl_B.c
	@printf "%s\n" '#define B_WI    '\"''\\'033[1;37m'\"''>> test_gnl_B.c
	@printf "%s\n" '#define MINT	'\"''\\'033[38;2;55;250;133;48;2;0;0;0m'\"''>> test_gnl_B.c
	@printf "%s\n" '#define LIME	'\"''\\'033[38;2;0;255;0m'\"''>> test_gnl_B.c
	@printf "%s\n" '#define NEOR	'\"''\\'033[3m'\\'033[38;2;255;153;51m'\"''>> test_gnl_B.c
	@printf "%s\n" ''>> test_gnl_B.c
	@printf "%s\n" 'int main(int arc, char *wordy[])'>> test_gnl_B.c
	@printf "%s\n" '{'>> test_gnl_B.c
	@printf "%s\n" '	char *line;'>> test_gnl_B.c
	@printf "%s\n" '	int	frames;'>> test_gnl_B.c
	@printf "%s\n" '	int	loops;'>> test_gnl_B.c
	@printf "%s\n" '	int     guide;'>> test_gnl_B.c
	@printf "%s\n" '	int fd;'>> test_gnl_B.c
	@printf "%s\n" '	int *fdeez;'>> test_gnl_B.c
	@printf "%s\n" '	int total_fds;'>> test_gnl_B.c
	@printf "%s\n" '	int lines_from_each;'>> test_gnl_B.c
	@printf "%s\n" '	int nulos;'>> test_gnl_B.c
	@printf "%s\n" ''>> test_gnl_B.c
	@printf "%s\n" '	if (arc == 1)'>> test_gnl_B.c
	@printf "%s\n" '	{'>> test_gnl_B.c
	@printf "%s\n" '		printf('\"''\\'n'\"' B_WI '\"'Wordy options:'\\'n'\\'n'\"' RSET);'>> test_gnl_B.c
	@printf "%s\n" '		printf('\"''\\'t'\"' MINT '\"'for stdin_mandatory'\\'t'\"' RSET LIME '\"'--> '\"' RSET NEOR '\"'0'\\'n'\"' RSET);'>> test_gnl_B.c
	@printf "%s\n" '		printf('\"''\\'t'\"' MINT '\"'for chosenfd_mandatory'\\'t'\"' RSET LIME '\"'--> '\"' RSET NEOR '\"'chosenfd'\\'n'\"' RSET);'>> test_gnl_B.c
	@printf "%s\n" '		printf('\"''\\'t'\"' MINT '\"'for chosenfd_bonus'\\'t'\"' RSET LIME '\"'--> '\"' RSET NEOR '\"'B chosenfd_1 chosenfd_2 chosenfd_... lines_from_each'\\'n'\\'n'\"' RSET);'>> test_gnl_B.c
	@printf "%s\n" '		printf(NEOR '\"'note: file names can'\''t start with '\''B'\'' or '\''0'\'''\\'n'\"' RSET);'>> test_gnl_B.c
	@printf "%s\n" '		return (1);'>> test_gnl_B.c
	@printf "%s\n" '	}'>> test_gnl_B.c
	@printf "%s\n" '	'>> test_gnl_B.c
	@printf "%s\n" '	if (wordy[1][0] == '\''B'\'' && arc != 2)'>> test_gnl_B.c
	@printf "%s\n" '	{'>> test_gnl_B.c
	@printf "%s\n" '	        if (arc < 4)'>> test_gnl_B.c
	@printf "%s\n" '	        {'>> test_gnl_B.c
	@printf "%s\n" '	                  printf('\"''\\'n'\"' B_WI '\"'Wordy options:'\\'n'\\'n'\"' RSET);'>> test_gnl_B.c
	@printf "%s\n" '	                  printf('\"''\\'t'\"' MINT '\"'for chosenfd_bonus'\\'t'\"' RSET LIME '\"'--> '\"' RSET NEOR '\"'B chosenfd_1 chosenfd_2 chosenfd_... lines_from_each'\\'n'\\'n'\"' RSET);'>> test_gnl_B.c
	@printf "%s\n" '		          return(printf('\"''\\'t'\"' MINT '\"'Bonus requires multiple fds, '\\'n'\\'tand last argument must be an '\\'n'\\'tunsigned int. Not'\"' B_WI '\"' '\'''\%'s'\'''\\'n'\"' RSET, wordy[arc - 1]), 1);'>> test_gnl_B.c
	@printf "%s\n" '	        }'>> test_gnl_B.c
	@printf "%s\n" '	        lines_from_each = atoi(wordy[arc - 1]);'>> test_gnl_B.c
	@printf "%s\n" '	        total_fds = arc - 3;'>> test_gnl_B.c
	@printf "%s\n" '	        if (lines_from_each < 1)'>> test_gnl_B.c
	@printf "%s\n" '	                  return(printf('\"''\\'t'\"' MINT '\"'For Bonus, last argument must be an unsigned int. Not'\"' B_WI '\"' '\'''\%'s'\'''\\'n'\"' RSET, wordy[arc - 1]), 1);'>> test_gnl_B.c
	@printf "%s\n" '	        '>> test_gnl_B.c
	@printf "%s\n" '////////////////// BONUS ///////////////////			'>> test_gnl_B.c
	@printf "%s\n" '			fdeez = malloc(total_fds * sizeof(int));'>> test_gnl_B.c
	@printf "%s\n" '			if(!fdeez)'>> test_gnl_B.c
	@printf "%s\n" '				return (printf(MINT '\"'Algo no esta piolando papa'\\'n'\"' RSET), 1);'>> test_gnl_B.c
	@printf "%s\n" '			guide = 0;'>> test_gnl_B.c
	@printf "%s\n" '			while (guide < total_fds)'>> test_gnl_B.c
	@printf "%s\n" '			{'>> test_gnl_B.c
	@printf "%s\n" '				if (wordy[guide + 2][0] == '\''0'\'')'>> test_gnl_B.c
	@printf "%s\n" '					fd = 0;'>> test_gnl_B.c
	@printf "%s\n" '				else'>> test_gnl_B.c
	@printf "%s\n" '					fd = open(wordy[guide + 2], O_RDONLY);'>> test_gnl_B.c
	@printf "%s\n" '				if(fd < 0)'>> test_gnl_B.c
	@printf "%s\n" '					return (printf(MINT '\"'Algo no esta piolando papa'\\'n'\"' RSET), 1);'>> test_gnl_B.c
	@printf "%s\n" '				fdeez[guide] = fd;'>> test_gnl_B.c
	@printf "%s\n" '				guide++;'>> test_gnl_B.c
	@printf "%s\n" '			}'>> test_gnl_B.c
	@printf "%s\n" '			nulos = 0;'>> test_gnl_B.c
	@printf "%s\n" '			while (nulos < total_fds)'>> test_gnl_B.c
	@printf "%s\n" '			{'>> test_gnl_B.c
	@printf "%s\n" '				fd = 0;'>> test_gnl_B.c
	@printf "%s\n" '				guide = 0;'>> test_gnl_B.c
	@printf "%s\n" '				while (fd < total_fds)'>> test_gnl_B.c
	@printf "%s\n" '				{'>> test_gnl_B.c
	@printf "%s\n" '					while (guide < lines_from_each && ((line = get_next_line(fdeez[fd])) != NULL))'>> test_gnl_B.c
	@printf "%s\n" '					{'>> test_gnl_B.c
	@printf "%s\n" '						printf('\"''\%'s'\"', line);'>> test_gnl_B.c
	@printf "%s\n" '						free(line);'>> test_gnl_B.c
	@printf "%s\n" '						guide++;'>> test_gnl_B.c
	@printf "%s\n" '					}'>> test_gnl_B.c
	@printf "%s\n" '					guide = 0;'>> test_gnl_B.c
	@printf "%s\n" '					fd++;'>> test_gnl_B.c
	@printf "%s\n" '				}'>> test_gnl_B.c
	@printf "%s\n" '				if (!line)'>> test_gnl_B.c
	@printf "%s\n" '					nulos++;'>> test_gnl_B.c
	@printf "%s\n" '			}'>> test_gnl_B.c
	@printf "%s\n" '			fd = 0;'>> test_gnl_B.c
	@printf "%s\n" '			while (fd < total_fds)'>> test_gnl_B.c
	@printf "%s\n" '			{'>> test_gnl_B.c
	@printf "%s\n" '				if (fdeez[fd] == 0)'>> test_gnl_B.c
	@printf "%s\n" '				{'>> test_gnl_B.c
	@printf "%s\n" '					fd++;'>> test_gnl_B.c
	@printf "%s\n" '					continue;'>> test_gnl_B.c
	@printf "%s\n" '				}'>> test_gnl_B.c
	@printf "%s\n" '				close(fdeez[fd]);'>> test_gnl_B.c
	@printf "%s\n" '				fd++;'>> test_gnl_B.c
	@printf "%s\n" '			}'>> test_gnl_B.c
	@printf "%s\n" '			free(fdeez);'>> test_gnl_B.c
	@printf "%s\n" '	        return(0);'>> test_gnl_B.c
	@printf "%s\n" '	}'>> test_gnl_B.c
	@printf "%s\n" '///////////////// Mandatory ////////////////'>> test_gnl_B.c
	@printf "%s\n" '	if (wordy[1][0] == '\''0'\'')'>> test_gnl_B.c
	@printf "%s\n" '	{'>> test_gnl_B.c
	@printf "%s\n" '		fd = 0;'>> test_gnl_B.c
	@printf "%s\n" '	}'>> test_gnl_B.c
	@printf "%s\n" '	else'>> test_gnl_B.c
	@printf "%s\n" '		fd = open(wordy[1], O_RDONLY);'>> test_gnl_B.c
	@printf "%s\n" '	'>> test_gnl_B.c
	@printf "%s\n" '	if (fd < 0)'>> test_gnl_B.c
	@printf "%s\n" '	{'>> test_gnl_B.c
	@printf "%s\n" '		printf(MINT '\"'Algo no esta piolando papa'\\'n'\"' RSET);'>> test_gnl_B.c
	@printf "%s\n" '		printf(NEOR '\"'note: file names can'\''t start with '\''B'\'' or '\''0'\'''\"' RSET);'>> test_gnl_B.c
	@printf "%s\n" '		return (1);'>> test_gnl_B.c
	@printf "%s\n" '	}'>> test_gnl_B.c
	@printf "%s\n" '	while ((line = get_next_line(fd)) != NULL)'>> test_gnl_B.c
	@printf "%s\n" '	{'>> test_gnl_B.c
	@printf "%s\n" '		printf('\"''\%'s'\"', line);'>> test_gnl_B.c
	@printf "%s\n" '		free(line);'>> test_gnl_B.c
	@printf "%s\n" '	}'>> test_gnl_B.c
	@printf "%s\n" '	close(fd);'>> test_gnl_B.c
	@printf "%s\n" ''>> test_gnl_B.c
	@printf "%s\n" '///// PARROT TIME BABY! //////'>> test_gnl_B.c
	@printf "%s\n" ''>> test_gnl_B.c
	@printf "%s\n" '	if (wordy[1][0] == '\''p'\'')'>> test_gnl_B.c
	@printf "%s\n" '	{'>> test_gnl_B.c
	@printf "%s\n" '	        if (wordy[1][1] == '\''a'\'')'>> test_gnl_B.c
	@printf "%s\n" '		        loops = 0;'>> test_gnl_B.c
	@printf "%s\n" '		else'>> test_gnl_B.c
	@printf "%s\n" '		        loops = 5;'>> test_gnl_B.c
	@printf "%s\n" '		system('\"'clear'\"');'>> test_gnl_B.c
	@printf "%s\n" '		while(loops < 10)'>> test_gnl_B.c
	@printf "%s\n" '		{'>> test_gnl_B.c
	@printf "%s\n" '			frames = 0;'>> test_gnl_B.c
	@printf "%s\n" '			if (wordy[1][1] == '\''a'\'')'>> test_gnl_B.c
	@printf "%s\n" '				frames += 16;'>> test_gnl_B.c
	@printf "%s\n" '			fd = open(wordy[1], O_RDONLY);'>> test_gnl_B.c
	@printf "%s\n" '			while (((line = get_next_line(fd)) != NULL) && frames < 26)'>> test_gnl_B.c
	@printf "%s\n" '			{'>> test_gnl_B.c
	@printf "%s\n" '				if (line[0] == '\''='\'')'>> test_gnl_B.c
	@printf "%s\n" '				{'>> test_gnl_B.c
	@printf "%s\n" '					frames++;'>> test_gnl_B.c
	@printf "%s\n" '					usleep(70000);'>> test_gnl_B.c
	@printf "%s\n" '					system('\"'clear'\"');'>> test_gnl_B.c
	@printf "%s\n" '					continue ;'>> test_gnl_B.c
	@printf "%s\n" '				}'>> test_gnl_B.c
	@printf "%s\n" '				if (wordy[1][1] == '\''a'\'')'>> test_gnl_B.c
	@printf "%s\n" '				        printf(MINT '\"''\%'s'\"' RSET, line);'>> test_gnl_B.c
	@printf "%s\n" '				else'>> test_gnl_B.c
	@printf "%s\n" '				        printf(B_WI '\"''\%'s'\"' RSET, line);'>> test_gnl_B.c
	@printf "%s\n" '				free(line);'>> test_gnl_B.c
	@printf "%s\n" '			}'>> test_gnl_B.c
	@printf "%s\n" '			close(fd);'>> test_gnl_B.c
	@printf "%s\n" '			loops++;'>> test_gnl_B.c
	@printf "%s\n" '		}'>> test_gnl_B.c
	@printf "%s\n" '	}'>> test_gnl_B.c
	@printf "%s\n" '	if (wordy[1][0] == '\''p'\'' && wordy[1][1] == '\''_'\'')'>> test_gnl_B.c
	@printf "%s\n" '	{'>> test_gnl_B.c
	@printf "%s\n" '		loops = 0;'>> test_gnl_B.c
	@printf "%s\n" '		system('\"'clear'\"');'>> test_gnl_B.c
	@printf "%s\n" '		while(loops < 3)'>> test_gnl_B.c
	@printf "%s\n" '		{'>> test_gnl_B.c
	@printf "%s\n" '			frames = 0;'>> test_gnl_B.c
	@printf "%s\n" '			fd = open(wordy[1], O_RDONLY);'>> test_gnl_B.c
	@printf "%s\n" '			while (((line = get_next_line(fd)) != NULL) && frames < 26)'>> test_gnl_B.c
	@printf "%s\n" '			{'>> test_gnl_B.c
	@printf "%s\n" '			        guide = 0;'>> test_gnl_B.c
	@printf "%s\n" '				if (line[0] == '\''='\'')'>> test_gnl_B.c
	@printf "%s\n" '				{'>> test_gnl_B.c
	@printf "%s\n" '					frames++;'>> test_gnl_B.c
	@printf "%s\n" '					usleep(70000);'>> test_gnl_B.c
	@printf "%s\n" '					system('\"'clear'\"');'>> test_gnl_B.c
	@printf "%s\n" '					continue ;'>> test_gnl_B.c
	@printf "%s\n" '				}'>> test_gnl_B.c
	@printf "%s\n" '                                while (line[guide])'>> test_gnl_B.c
	@printf "%s\n" '                                {'>> test_gnl_B.c
	@printf "%s\n" '	                                if (line[guide] == '\''@'\'')'>> test_gnl_B.c
	@printf "%s\n" '		                                write(1, '\"' '\"', 1);'>> test_gnl_B.c
	@printf "%s\n" '	                                else if (line[guide] == '\''#'\'')'>> test_gnl_B.c
	@printf "%s\n" '		                                write(1, '\"','\"', 1);'>> test_gnl_B.c
	@printf "%s\n" '	                                else if (line[guide] == '\''+'\'')'>> test_gnl_B.c
	@printf "%s\n" '		                                write(1, '\"''\'''\"', 1);'>> test_gnl_B.c
	@printf "%s\n" '	                                else if (line[guide] == '\''/'\'')'>> test_gnl_B.c
	@printf "%s\n" '		                                write(1, '\"'-'\"', 1);'>> test_gnl_B.c
	@printf "%s\n" '	                                else if (line[guide] == '\'':'\'')'>> test_gnl_B.c
	@printf "%s\n" '		                                write(1, '\"':'\"', 1);'>> test_gnl_B.c
	@printf "%s\n" '	                                else if (line[guide] == '\''-'\'')'>> test_gnl_B.c
	@printf "%s\n" '		                                write(1, '\"'/'\"', 1);'>> test_gnl_B.c
	@printf "%s\n" '	                                else if (line[guide] == '\'''\\''\'''\'')'>> test_gnl_B.c
	@printf "%s\n" '		                                write(1, '\"'+'\"', 1);'>> test_gnl_B.c
	@printf "%s\n" '	                                else if (line[guide] == '\'','\'')'>> test_gnl_B.c
	@printf "%s\n" '		                                write(1, '\"'#'\"', 1);'>> test_gnl_B.c
	@printf "%s\n" '	                                else if (line[guide] == '\'' '\'')'>> test_gnl_B.c
	@printf "%s\n" '		                                write(1, '\"'@'\"', 1);'>> test_gnl_B.c
	@printf "%s\n" '	                                else'>> test_gnl_B.c
	@printf "%s\n" '		                                write(1, &line[guide], 1); // Keep unchanged chars'>> test_gnl_B.c
	@printf "%s\n" '	                                guide++;'>> test_gnl_B.c
	@printf "%s\n" '                                }'>> test_gnl_B.c
	@printf "%s\n" '				free(line);'>> test_gnl_B.c
	@printf "%s\n" '			}'>> test_gnl_B.c
	@printf "%s\n" '			close(fd);'>> test_gnl_B.c
	@printf "%s\n" '			loops++;'>> test_gnl_B.c
	@printf "%s\n" '		}'>> test_gnl_B.c
	@printf "%s\n" '	}'>> test_gnl_B.c
	@printf "%s\n" '	return (0);'>> test_gnl_B.c
	@printf "%s\n" '}'>> test_gnl_B.c
	@sleep 0.5
	@printf "$(BLACK)"



build_test_gnl_M.c:
	@printf "$(NEOR) Building test_gnl_M.c... $(RESET)"
	@printf "$(MINT)🦝\n\n"
	@> test_gnl_M.c
	printf "%s\n" '/* ************************************************************************** */'>> test_gnl_M.c
	printf "%s\n" '/*                                                                            */'>> test_gnl_M.c
	printf "%s\n" '/*                                                        :::      ::::::::   */'>> test_gnl_M.c
	printf "%s\n" '/*   test_gnl.c                                         :+:      :+:    :+:   */'>> test_gnl_M.c
	printf "%s\n" '/*                                                    +:+ +:+         +:+     */'>> test_gnl_M.c
	printf "%s\n" '/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */'>> test_gnl_M.c
	printf "%s\n" '/*                                                +#+#+#+#+#+   +#+           */'>> test_gnl_M.c
	printf "%s\n" '/*   Created: 2025/05/31 14:21:21 by lde-san-          #+#    #+#             */'>> test_gnl_M.c
	printf "%s\n" '/*   Updated: 2025/06/07 09:18:52 by lde-san-         ###   ########.fr       */'>> test_gnl_M.c
	printf "%s\n" '/*                                                                            */'>> test_gnl_M.c
	printf "%s\n" '/* ************************************************************************** */'>> test_gnl_M.c
	@printf "%s\n" ''>> test_gnl_M.c
	@printf "%s\n" '#include <stdio.h>'>> test_gnl_M.c
	@printf "%s\n" '#include '\"'get_next_line.h'\"''>> test_gnl_M.c
	@printf "%s\n" ''>> test_gnl_M.c
	@printf "%s\n" '#define RSET	'\"''\\'033[0m'\"''>> test_gnl_M.c
	@printf "%s\n" '#define B_WI    '\"''\\'033[1;37m'\"''>> test_gnl_M.c
	@printf "%s\n" '#define MINT	'\"''\\'033[38;2;55;250;133;48;2;0;0;0m'\"''>> test_gnl_M.c
	@printf "%s\n" '#define LIME	'\"''\\'033[38;2;0;255;0m'\"''>> test_gnl_M.c
	@printf "%s\n" '#define NEOR	'\"''\\'033[3m'\\'033[38;2;255;153;51m'\"''>> test_gnl_M.c
	@printf "%s\n" ''>> test_gnl_M.c
	@printf "%s\n" 'int main(int arc, char *wordy[])'>> test_gnl_M.c
	@printf "%s\n" '{'>> test_gnl_M.c
	@printf "%s\n" '	char *line;'>> test_gnl_M.c
	@printf "%s\n" '	int	frames;'>> test_gnl_M.c
	@printf "%s\n" '	int	loops;'>> test_gnl_M.c
	@printf "%s\n" '	int     guide;'>> test_gnl_M.c
	@printf "%s\n" '	int fd;'>> test_gnl_M.c
	@printf "%s\n" ''>> test_gnl_M.c
	@printf "%s\n" '	if (arc == 1)'>> test_gnl_M.c
	@printf "%s\n" '	{'>> test_gnl_M.c
	@printf "%s\n" '		printf('\"''\\'n'\"' B_WI '\"'Wordy options:'\\'n'\\'n'\"' RSET);'>> test_gnl_M.c
	@printf "%s\n" '		printf('\"''\\'t'\"' MINT '\"'for stdin_mandatory'\\'t'\"' RSET LIME '\"'--> '\"' RSET NEOR '\"'0'\\'n'\"' RSET);'>> test_gnl_M.c
	@printf "%s\n" '		printf('\"''\\'t'\"' MINT '\"'for chosenfd_mandatory'\\'t'\"' RSET LIME '\"'--> '\"' RSET NEOR '\"'chosenfd'\\'n'\"' RSET);'>> test_gnl_M.c
	@printf "%s\n" '		printf(NEOR '\"'note: file names can'\''t start with '\''0'\'''\\'n'\"' RSET);'>> test_gnl_M.c
	@printf "%s\n" '		return (1);'>> test_gnl_M.c
	@printf "%s\n" '	}'>> test_gnl_M.c
	@printf "%s\n" '///////////////// Mandatory ////////////////'>> test_gnl_M.c
	@printf "%s\n" '	if (wordy[1][0] == '\''0'\'')'>> test_gnl_M.c
	@printf "%s\n" '	{'>> test_gnl_M.c
	@printf "%s\n" '		fd = 0;'>> test_gnl_M.c
	@printf "%s\n" '	}'>> test_gnl_M.c
	@printf "%s\n" '	else'>> test_gnl_M.c
	@printf "%s\n" '		fd = open(wordy[1], O_RDONLY);'>> test_gnl_M.c
	@printf "%s\n" '	'>> test_gnl_M.c
	@printf "%s\n" '	if (fd < 0)'>> test_gnl_M.c
	@printf "%s\n" '	{'>> test_gnl_M.c
	@printf "%s\n" '		printf(MINT '\"'Algo no esta piolando papa'\\'n'\"' RSET);'>> test_gnl_M.c
	@printf "%s\n" '		printf(NEOR '\"'note: file names can'\''t start with '\''B'\'' or '\''0'\'''\"' RSET);'>> test_gnl_M.c
	@printf "%s\n" '		return (1);'>> test_gnl_M.c
	@printf "%s\n" '	}'>> test_gnl_M.c
	@printf "%s\n" '	while ((line = get_next_line(fd)) != NULL)'>> test_gnl_M.c
	@printf "%s\n" '	{'>> test_gnl_M.c
	@printf "%s\n" '		printf('\"''\%'s'\"', line);'>> test_gnl_M.c
	@printf "%s\n" '		free(line);'>> test_gnl_M.c
	@printf "%s\n" '	}'>> test_gnl_M.c
	@printf "%s\n" '	close(fd);'>> test_gnl_M.c
	@printf "%s\n" ''>> test_gnl_M.c
	@printf "%s\n" '///// PARROT TIME BABY! //////'>> test_gnl_M.c
	@printf "%s\n" ''>> test_gnl_M.c
	@printf "%s\n" '	if (wordy[1][0] == '\''p'\'')'>> test_gnl_M.c
	@printf "%s\n" '	{'>> test_gnl_M.c
	@printf "%s\n" '	        if (wordy[1][1] == '\''a'\'')'>> test_gnl_M.c
	@printf "%s\n" '		        loops = 0;'>> test_gnl_M.c
	@printf "%s\n" '		else'>> test_gnl_M.c
	@printf "%s\n" '		        loops = 5;'>> test_gnl_M.c
	@printf "%s\n" '		system('\"'clear'\"');'>> test_gnl_M.c
	@printf "%s\n" '		while(loops < 10)'>> test_gnl_M.c
	@printf "%s\n" '		{'>> test_gnl_M.c
	@printf "%s\n" '			frames = 0;'>> test_gnl_M.c
	@printf "%s\n" '			if (wordy[1][1] == '\''a'\'')'>> test_gnl_M.c
	@printf "%s\n" '				frames += 16;'>> test_gnl_M.c
	@printf "%s\n" '			fd = open(wordy[1], O_RDONLY);'>> test_gnl_M.c
	@printf "%s\n" '			while (((line = get_next_line(fd)) != NULL) && frames < 26)'>> test_gnl_M.c
	@printf "%s\n" '			{'>> test_gnl_M.c
	@printf "%s\n" '				if (line[0] == '\''='\'')'>> test_gnl_M.c
	@printf "%s\n" '				{'>> test_gnl_M.c
	@printf "%s\n" '					frames++;'>> test_gnl_M.c
	@printf "%s\n" '					usleep(70000);'>> test_gnl_M.c
	@printf "%s\n" '					system('\"'clear'\"');'>> test_gnl_M.c
	@printf "%s\n" '					continue ;'>> test_gnl_M.c
	@printf "%s\n" '				}'>> test_gnl_M.c
	@printf "%s\n" '				if (wordy[1][1] == '\''a'\'')'>> test_gnl_M.c
	@printf "%s\n" '				        printf(MINT '\"''\%'s'\"' RSET, line);'>> test_gnl_M.c
	@printf "%s\n" '				else'>> test_gnl_M.c
	@printf "%s\n" '				        printf(B_WI '\"''\%'s'\"' RSET, line);'>> test_gnl_M.c
	@printf "%s\n" '				free(line);'>> test_gnl_M.c
	@printf "%s\n" '			}'>> test_gnl_M.c
	@printf "%s\n" '			close(fd);'>> test_gnl_M.c
	@printf "%s\n" '			loops++;'>> test_gnl_M.c
	@printf "%s\n" '		}'>> test_gnl_M.c
	@printf "%s\n" '	}'>> test_gnl_M.c
	@printf "%s\n" '	if (wordy[1][0] == '\''p'\'' && wordy[1][1] == '\''_'\'')'>> test_gnl_M.c
	@printf "%s\n" '	{'>> test_gnl_M.c
	@printf "%s\n" '		loops = 0;'>> test_gnl_M.c
	@printf "%s\n" '		system('\"'clear'\"');'>> test_gnl_M.c
	@printf "%s\n" '		while(loops < 3)'>> test_gnl_M.c
	@printf "%s\n" '		{'>> test_gnl_M.c
	@printf "%s\n" '			frames = 0;'>> test_gnl_M.c
	@printf "%s\n" '			fd = open(wordy[1], O_RDONLY);'>> test_gnl_M.c
	@printf "%s\n" '			while (((line = get_next_line(fd)) != NULL) && frames < 26)'>> test_gnl_M.c
	@printf "%s\n" '			{'>> test_gnl_M.c
	@printf "%s\n" '			        guide = 0;'>> test_gnl_M.c
	@printf "%s\n" '				if (line[0] == '\''='\'')'>> test_gnl_M.c
	@printf "%s\n" '				{'>> test_gnl_M.c
	@printf "%s\n" '					frames++;'>> test_gnl_M.c
	@printf "%s\n" '					usleep(70000);'>> test_gnl_M.c
	@printf "%s\n" '					system('\"'clear'\"');'>> test_gnl_M.c
	@printf "%s\n" '					continue ;'>> test_gnl_M.c
	@printf "%s\n" '				}'>> test_gnl_M.c
	@printf "%s\n" '                                while (line[guide])'>> test_gnl_M.c
	@printf "%s\n" '                                {'>> test_gnl_M.c
	@printf "%s\n" '	                                if (line[guide] == '\''@'\'')'>> test_gnl_M.c
	@printf "%s\n" '		                                write(1, '\"' '\"', 1);'>> test_gnl_M.c
	@printf "%s\n" '	                                else if (line[guide] == '\''#'\'')'>> test_gnl_M.c
	@printf "%s\n" '		                                write(1, '\"','\"', 1);'>> test_gnl_M.c
	@printf "%s\n" '	                                else if (line[guide] == '\''+'\'')'>> test_gnl_M.c
	@printf "%s\n" '		                                write(1, '\"''\'''\"', 1);'>> test_gnl_M.c
	@printf "%s\n" '	                                else if (line[guide] == '\''/'\'')'>> test_gnl_M.c
	@printf "%s\n" '		                                write(1, '\"'-'\"', 1);'>> test_gnl_M.c
	@printf "%s\n" '	                                else if (line[guide] == '\'':'\'')'>> test_gnl_M.c
	@printf "%s\n" '		                                write(1, '\"':'\"', 1);'>> test_gnl_M.c
	@printf "%s\n" '	                                else if (line[guide] == '\''-'\'')'>> test_gnl_M.c
	@printf "%s\n" '		                                write(1, '\"'/'\"', 1);'>> test_gnl_M.c
	@printf "%s\n" '	                                else if (line[guide] == '\'''\\''\'''\'')'>> test_gnl_M.c
	@printf "%s\n" '		                                write(1, '\"'+'\"', 1);'>> test_gnl_M.c
	@printf "%s\n" '	                                else if (line[guide] == '\'','\'')'>> test_gnl_M.c
	@printf "%s\n" '		                                write(1, '\"'#'\"', 1);'>> test_gnl_M.c
	@printf "%s\n" '	                                else if (line[guide] == '\'' '\'')'>> test_gnl_M.c
	@printf "%s\n" '		                                write(1, '\"'@'\"', 1);'>> test_gnl_M.c
	@printf "%s\n" '	                                else'>> test_gnl_M.c
	@printf "%s\n" '		                                write(1, &line[guide], 1); // Keep unchanged chars'>> test_gnl_M.c
	@printf "%s\n" '	                                guide++;'>> test_gnl_M.c
	@printf "%s\n" '                                }'>> test_gnl_M.c
	@printf "%s\n" '				free(line);'>> test_gnl_M.c
	@printf "%s\n" '			}'>> test_gnl_M.c
	@printf "%s\n" '			close(fd);'>> test_gnl_M.c
	@printf "%s\n" '			loops++;'>> test_gnl_M.c
	@printf "%s\n" '		}'>> test_gnl_M.c
	@printf "%s\n" '	}'>> test_gnl_M.c
	@printf "%s\n" '	return (0);'>> test_gnl_M.c
	@printf "%s\n" '}'>> test_gnl_M.c
	@sleep 0.5
	@printf "$(BLACK)"



build_test_01.txt:
	@printf "$(NEOR) Building test_01.txt... $(RESET)"
	@printf "$(MINT)🦝\n\n"
	@> test_01.txt
	@printf "%s\n" 'uoggwdg'>> test_01.txt
	@printf "%s\n" 'qwduiowdio'>> test_01.txt
	@printf "%s\n" 'gqduowdhqwdhhod'>> test_01.txt
	@printf "%s\n" 'qdhwhl'\"'whhhkldhl'\"'wdlwdhkl'>> test_01.txt
	@printf "%s\n" ''\\'n'\\'0'\\'0'\\'0'\\'0'\\'ip2edhopdp'>> test_01.txt
	@printf "%s\n" 'iodyyidyip'>> test_01.txt
	@printf "%s\n" '			1hicfhiwcfi'>> test_01.txt
	@printf "%s\n" '			      qiphdihc;ich/////'\\''\\''\\''\\''\\'&&&(&^!£&'\%'&£'\"'('>> test_01.txt
	@printf "%s\n" '@bash echo -e tufrutaesbonita > 3'>> test_01.txt
	@printf "%s\n" 'echo -e tufrutaesbonita > 3'>> test_01.txt
	@printf "%s\n" ''>> test_01.txt
	@printf "%s\n" 'k'>> test_01.txt
	@chmod 777 test_01.txt
	@sleep 0.25
	@printf "$(BLACK)"



build_test_02.txt:
	@printf "$(NEOR) Building test_02.txt... $(RESET)"
	@printf "$(MINT)🦝\n\n"
	@> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@printf "%s\n" ''>> test_02.txt
	@chmod 777 test_02.txt
	@sleep 0.25
	@printf "$(BLACK)"



build_parrot.txt:
	@printf "$(NEOR) Building parrot.txt... $(RESET)"
	@printf "$(MINT)🦝\n\n"
	@> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" '              .;:;,.,;:,.'>> parrot.txt
	@printf "%s\n" '            .cc;.  ...  .;c.'>> parrot.txt
	@printf "%s\n" '         .,,cc:cc:lxxxl:ccc:;,.'>> parrot.txt
	@printf "%s\n" '        .lo;...lKKklllookl..cO;'>> parrot.txt
	@printf "%s\n" '      .cl;.,;'\''.okl;...'\''.;,..'\'';:.'>> parrot.txt
	@printf "%s\n" '     .:o;;dkx,.ll..,cc::,..,'\''.;:,.'>> parrot.txt
	@printf "%s\n" '     co..lKKKkokl.'\'':lllo;'\'''\''ol..;dl.'>> parrot.txt
	@printf "%s\n" '   .,c;.,xKKKKKKo.'\'':llll;.'\''oOxo,.cl,.'>> parrot.txt
	@printf "%s\n" '   cNo..lKKKKKKKo'\'''\'';llll;;okKKKl..oNc'>> parrot.txt
	@printf "%s\n" '   cNo..lKKKKKKKko;'\'':c:,'\''lKKKKKo'\''.oNc'>> parrot.txt
	@printf "%s\n" '   cNo..lKKKKKKKKKl.....'\''dKKKKKxc,l0:'>> parrot.txt
	@printf "%s\n" '   .c:'\''.lKKKKKKKKKk;....oKKKKKKo'\''.oNc'>> parrot.txt
	@printf "%s\n" '     ,:.,oxOKKKKKKKOxxxxOKKKKKKxc,;ol:.'>> parrot.txt
	@printf "%s\n" '     ;c..'\'''\'':oookKKKKKKKKKKKKKKKKKk:.'\''clc.'>> parrot.txt
	@printf "%s\n" '   ,dl'\''.,oxo;'\'''\'';oxOKKKKKKKKKKKKKKKOxxl::;,,.'>> parrot.txt
	@printf "%s\n" '  .dOc..lKKKkoooookKKKKKKKKKKKKKKKKKKKxl,;ol.'>> parrot.txt
	@printf "%s\n" '  cx,'\'';okKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKl..;lc.'>> parrot.txt
	@printf "%s\n" '  co..:dddddddddddddddddddddddddddddddddl:;'\'''\''::.'>> parrot.txt
	@printf "%s\n" '  co...........................................'\"''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" '='>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" '           .ccccccc.'>> parrot.txt
	@printf "%s\n" '      .,,,;cooolccol;;,,.'>> parrot.txt
	@printf "%s\n" '     .dOx;..;lllll;..;xOd.'>> parrot.txt
	@printf "%s\n" '   .cdo,'\'',loOXXXXXkll;'\'';odc.'>> parrot.txt
	@printf "%s\n" '  ,oo:;c,'\'':oko:cccccc,...ckl.'>> parrot.txt
	@printf "%s\n" '  ;c.;kXo..::..;c::'\''.......oc'>> parrot.txt
	@printf "%s\n" ',dc..oXX0kk0o.'\'':lll;..cxxc.,ld,'>> parrot.txt
	@printf "%s\n" 'kNo.'\''oXXXXXXo'\'''\'':lll;..oXXOd;cOd.'>> parrot.txt
	@printf "%s\n" 'KOc;oOXXXXXXo.'\'':lol,..dXXXXl'\'';xc'>> parrot.txt
	@printf "%s\n" 'Ol,:k0XXXXXX0c.,clc'\''.:0XXXXx,.oc'>> parrot.txt
	@printf "%s\n" 'KOc;dOXXXXXXXl..'\'';'\''..lXXXXXd..oc'>> parrot.txt
	@printf "%s\n" 'dNo..oXXXXXXXOx:..'\''lxOXXXXXk,.:; ..'>> parrot.txt
	@printf "%s\n" 'cNo..lXXXXXXXXXOolkXXXXXXXXXkl;..;:.;.'>> parrot.txt
	@printf "%s\n" '.,;'\''.,dkkkkk0XXXXXXXXXXXXXXXXXOxxl;,;,;l:.'>> parrot.txt
	@printf "%s\n" '  ;c.;:'\'''\'''\'''\'''\'':doOXXXXXXXXXXXXXXXXXXOdo;'\'';clc.'>> parrot.txt
	@printf "%s\n" '  ;c.lOdood:'\'''\'''\''oXXXXXXXXXXXXXXXXXXXXXk,..;ol.'>> parrot.txt
	@printf "%s\n" '  '\'';.:xxxxxocccoxxxxxxxxxxxxxxxxxxxxxxl::'\''.'\'';;.'>> parrot.txt
	@printf "%s\n" '  '\'';........................................;l'\'''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" '='>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" '        .;:;;,.,;;::,.'>> parrot.txt
	@printf "%s\n" '     .;'\'':;........'\''co:.'>> parrot.txt
	@printf "%s\n" '   .clc;'\'''\'':cllllc::,.'\'':c.'>> parrot.txt
	@printf "%s\n" '  .lo;;o:coxdlooollc;'\'',::,,.'>> parrot.txt
	@printf "%s\n" '.c:'\''.,cl,.'\''lc'\'',,;;'\''......cO;'>> parrot.txt
	@printf "%s\n" 'do;'\'';oxoc::l;;llllc'\''.'\'';;'\''.'\'';.'>> parrot.txt
	@printf "%s\n" 'c..ckkkkkkkd,;llllc'\''.:kkd;.'\'':c.'>> parrot.txt
	@printf "%s\n" ''\''.,okkkkkkkkc;llllc,.:kkkdl,cO;'>> parrot.txt
	@printf "%s\n" '..;xkkkkkkkkc,ccll:,;okkkkk:,cl,'>> parrot.txt
	@printf "%s\n" '..,dkkkkkkkkc..,;,'\''ckkkkkkkc;ll.'>> parrot.txt
	@printf "%s\n" '..'\''okkkkkkkko,....'\''okkkkkkkc,:c.'>> parrot.txt
	@printf "%s\n" 'c..ckkkkkkkkkdl;,:okkkkkkkkd,.'\'','\'';.'>> parrot.txt
	@printf "%s\n" 'd..'\'':lxkkkkkkkkxxkkkkkkkkkkkdoc;,;'\''..'\''.,.'>> parrot.txt
	@printf "%s\n" 'o...'\'''\'';llllldkkkkkkkkkkkkkkkkkkdll;..'\''cdo.'>> parrot.txt
	@printf "%s\n" 'o..,l;'\'''\'''\'''\'''\'''\'';dkkkkkkkkkkkkkkkkkkkkdlc,..;lc.'>> parrot.txt
	@printf "%s\n" 'o..;lc;;;;;;,,;clllllllllllllllllllllc'\''..,:c.'>> parrot.txt
	@printf "%s\n" 'o..........................................;'\'''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" '='>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" '           .,,,,,,,,,.'>> parrot.txt
	@printf "%s\n" '         .ckKxodooxOOdcc.'>> parrot.txt
	@printf "%s\n" '      .cclooc'\''....'\'';;cool.'>> parrot.txt
	@printf "%s\n" '     .loc;;;;clllllc;;;;;:;,.'>> parrot.txt
	@printf "%s\n" '   .c:'\''.,okd;;cdo:::::cl,..oc'>> parrot.txt
	@printf "%s\n" '  .:o;'\'';okkx;'\'';;,'\'';::;'\''....,;,.'>> parrot.txt
	@printf "%s\n" '  co..ckkkkkddk:,cclll;.,c:,:o:.'>> parrot.txt
	@printf "%s\n" '  co..ckkkkkkkk:,cllll;.:kkd,.'\'':c.'>> parrot.txt
	@printf "%s\n" '.,:;.,okkkkkkkk:,cclll;.:kkkdl;;o:.'>> parrot.txt
	@printf "%s\n" 'cNo..ckkkkkkkkko,.;llc,.ckkkkkc..oc'>> parrot.txt
	@printf "%s\n" ',dd;.:kkkkkkkkkx;..;:,.'\''lkkkkko,.:,'>> parrot.txt
	@printf "%s\n" '  ;c.ckkkkkkkkkkc.....;ldkkkkkk:.,'\'''>> parrot.txt
	@printf "%s\n" ',dc..'\''okkkkkkkkkxoc;;cxkkkkkkkkc..,;,.'>> parrot.txt
	@printf "%s\n" 'kNo..'\'':lllllldkkkkkkkkkkkkkkkkkdcc,.;l.'>> parrot.txt
	@printf "%s\n" 'KOc,l;'\'''\'''\'''\'''\'''\'''\'';lldkkkkkkkkkkkkkkkkkc..;lc.'>> parrot.txt
	@printf "%s\n" 'xx:'\'':;;;;,.,,...,;;cllllllllllllllc;'\''.;oo,'>> parrot.txt
	@printf "%s\n" 'cNo.....................................oc'>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" '='>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" '                   .ccccccc.'>> parrot.txt
	@printf "%s\n" '               .ccckNKOOOOkdcc.'>> parrot.txt
	@printf "%s\n" '            .;;cc:ccccccc:,::::,,.'>> parrot.txt
	@printf "%s\n" '         .c;:;.,cccllxOOOxlllc,;ol.'>> parrot.txt
	@printf "%s\n" '        .lkc,coxo:;oOOxooooooo;..:,'>> parrot.txt
	@printf "%s\n" '      .cdc.,dOOOc..cOd,.'\'',,;'\''....'\'':c.'>> parrot.txt
	@printf "%s\n" '      cNx'\''.lOOOOxlldOl..;lll;.....cO;'>> parrot.txt
	@printf "%s\n" '     ,do;,:dOOOOOOOOOl'\'''\'':lll;..:d:.'\''c,'>> parrot.txt
	@printf "%s\n" '     co..lOOOOOOOOOOOl'\'''\'':lll;.'\''lOd,.cd.'>> parrot.txt
	@printf "%s\n" '     co.,dOOOOOOOOOOOo,.;llc,.,dOOc..dc'>> parrot.txt
	@printf "%s\n" '     co..lOOOOOOOOOOOOc.'\'';:,..cOOOl..oc'>> parrot.txt
	@printf "%s\n" '   .,:;.'\''::lxOOOOOOOOOo:'\''...,:oOOOc..dc'>> parrot.txt
	@printf "%s\n" '   ;Oc..cl'\'''\'':llxOOOOOOOOdcclxOOOOx,.cd.'>> parrot.txt
	@printf "%s\n" '  .:;'\'';lxl'\'''\'''\'''\'''\'':lldOOOOOOOOOOOOOOc..oc'>> parrot.txt
	@printf "%s\n" ',dl,.'\''cooc:::,....,::coooooooooooc'\''.c:'>> parrot.txt
	@printf "%s\n" 'cNo.................................oc'>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" '='>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" '                        .cccccccc.'>> parrot.txt
	@printf "%s\n" '                  .,,,;;cc:cccccc:;;,.'>> parrot.txt
	@printf "%s\n" '                .cdxo;..,::cccc::,..;l.'>> parrot.txt
	@printf "%s\n" '               ,oo:,,:c:cdxxdllll:;,'\'';:,.'>> parrot.txt
	@printf "%s\n" '             .cl;.,oxxc'\''.,cc,.'\'',;;'\''...oNc'>> parrot.txt
	@printf "%s\n" '             ;Oc..cxxxc'\''.,c;..;lll;...cO;'>> parrot.txt
	@printf "%s\n" '           .;;'\'',:ldxxxdoldxc..;lll:'\''...'\''c,'>> parrot.txt
	@printf "%s\n" '           ;c..cxxxxkxxkxxxc'\''.;lll:'\'''\'','\''.cdc.'>> parrot.txt
	@printf "%s\n" '         .c;.;odxxxxxxxxxxxd;.,cll;.,l:.'\''dNc'>> parrot.txt
	@printf "%s\n" '        .:,'\'''\''ccoxkxxkxxxxxxx:..,:;'\''.:xc..oNc'>> parrot.txt
	@printf "%s\n" '      .lc,.'\''lc'\'':dxxxkxxxxxxxdl,...'\'',lx:..dNc'>> parrot.txt
	@printf "%s\n" '     .:,'\'',coxoc;;ccccoxxxxxxxxo:::oxxo,.cdc.'>> parrot.txt
	@printf "%s\n" '  .;'\'':;.'\''oxxxxxc'\'''\'''\'''\'''\'';cccoxxxxxxxxxkxc..oc'>> parrot.txt
	@printf "%s\n" ',do:'\''..,:llllll:;;;;;;,..,;:lllllllll;..oc'>> parrot.txt
	@printf "%s\n" 'cNo.....................................oc'>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" '='>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" '                              .ccccc.'>> parrot.txt
	@printf "%s\n" '                         .cc;'\''coooxkl;.'>> parrot.txt
	@printf "%s\n" '                     .:c:::c:,;,,,;c;;,.'\''.'>> parrot.txt
	@printf "%s\n" '                   .clc,'\'',:,..:xxocc;...c;'>> parrot.txt
	@printf "%s\n" '                  .c:,'\'';:ox:..:c,,,,,,...cd,'>> parrot.txt
	@printf "%s\n" '                .c:'\''.,oxxxxl::l:.;loll;..;ol.'>> parrot.txt
	@printf "%s\n" '                ;Oc..:xxxxxxxxx:.,llll,....oc'>> parrot.txt
	@printf "%s\n" '             .,;,'\'',:loxxxxxxxxx:.,llll;.,;.'\''ld,'>> parrot.txt
	@printf "%s\n" '            .lo;..:xxxxxxxxxxxx:.'\''cllc,.:l:'\''cO;'>> parrot.txt
	@printf "%s\n" '           .:;...'\''cxxxxxxxxxxxxol;,::,..cdl;;l'\'''>> parrot.txt
	@printf "%s\n" '         .cl;'\'':;'\'''\'';oxxxxxxxxxxxxx:....,cooc,cO;'>> parrot.txt
	@printf "%s\n" '     .,,,::;,lxoc:,,:lxxxxxxxxxxxo:,,;lxxl;'\''oNc'>> parrot.txt
	@printf "%s\n" '   .cdxo;'\'':lxxxxxxc'\'''\'';cccccoxxxxxxxxxxxxo,.;lc.'>> parrot.txt
	@printf "%s\n" '  .loc'\''.'\''lxxxxxxxxocc;'\'''\'''\'''\'''\'';ccoxxxxxxxxx:..oc'>> parrot.txt
	@printf "%s\n" 'occ'\''..'\'',:cccccccccccc:;;;;;;;;:ccccccccc,.'\''c,'>> parrot.txt
	@printf "%s\n" 'Ol;......................................;l'\'''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" '='>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" '                              ,ddoodd,'>> parrot.txt
	@printf "%s\n" '                         .cc'\'' ,ooccoo,'\''cc.'>> parrot.txt
	@printf "%s\n" '                      .ccldo;....,,...;oxdc.'>> parrot.txt
	@printf "%s\n" '                   .,,:cc;.'\'''\''..;lol;;,'\''..lkl.'>> parrot.txt
	@printf "%s\n" '                  .dkc'\'';:ccl;..;dl,.'\'''\''.....oc'>> parrot.txt
	@printf "%s\n" '                .,lc'\'',cdddddlccld;.,;c::'\''..,cc:.'>> parrot.txt
	@printf "%s\n" '                cNo..:ddddddddddd;'\'':clll;,c,'\'';xc'>> parrot.txt
	@printf "%s\n" '               .lo;,clddddddddddd;'\'':clll;:kc..;'\'''>> parrot.txt
	@printf "%s\n" '             .,:;..:ddddddddddddd:'\'';clll;;ll,..'>> parrot.txt
	@printf "%s\n" '             ;Oc..'\'';:ldddddddddddl,.,c:;'\'';dd;..'>> parrot.txt
	@printf "%s\n" '           .'\'''\'''\'',:lc,'\''cdddddddddddo:,'\''...'\''cdd;..'>> parrot.txt
	@printf "%s\n" '         .cdc'\'';lddd:'\'';lddddddddddddd;.'\'';lddl,..'>> parrot.txt
	@printf "%s\n" '      .,;::;,cdddddol;;lllllodddddddlcodddd:.'\''l,'>> parrot.txt
	@printf "%s\n" '     .dOc..,lddddddddlccc;'\'''\'';cclddddddddddd;,ll.'>> parrot.txt
	@printf "%s\n" '   .coc,;::ldddddddddddddl:ccc:ldddddddddlc,ck;'>> parrot.txt
	@printf "%s\n" ',dl::,..,cccccccccccccccccccccccccccccccc:;'\'':xx,'>> parrot.txt
	@printf "%s\n" 'cNd.........................................;lOc'>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" '='>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" '                        .cccc;;cc;'\'';c.'>> parrot.txt
	@printf "%s\n" '                      .,:dkdc:;;:c:,:d:.'>> parrot.txt
	@printf "%s\n" '                     .loc'\''.,cc::::::,..,:.'>> parrot.txt
	@printf "%s\n" '                   .cl;....;dkdccc::,...c;'>> parrot.txt
	@printf "%s\n" '                  .c:,'\'';:'\''..ckc'\'',;::;....;c.'>> parrot.txt
	@printf "%s\n" '                .c:'\''.,dkkoc:ok:;llllc,,c,'\'';:.'>> parrot.txt
	@printf "%s\n" '               .;c,'\'';okkkkkkkk:,lllll,:kd;.;:,.'>> parrot.txt
	@printf "%s\n" '               co..:kkkkkkkkkk:;llllc'\'':kkc..oNc'>> parrot.txt
	@printf "%s\n" '             .cl;.,okkkkkkkkkkc,:cll;,okkc'\''.cO;'>> parrot.txt
	@printf "%s\n" '             ;k:..ckkkkkkkkkkkl..,;,.;xkko:'\'',l'\'''>> parrot.txt
	@printf "%s\n" '            .,...'\'';dkkkkkkkkkkd;.....ckkkl'\''.cO;'>> parrot.txt
	@printf "%s\n" '         .,,:,.;oo:ckkkkkkkkkkkdoc;;cdkkkc..cd,'>> parrot.txt
	@printf "%s\n" '      .cclo;,ccdkkl;llccdkkkkkkkkkkkkkkkd,.c;'>> parrot.txt
	@printf "%s\n" '     .lol:;;okkkkkxooc::loodkkkkkkkkkkkko'\''.oc'>> parrot.txt
	@printf "%s\n" '   .c:'\''..lkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkd,.oc'>> parrot.txt
	@printf "%s\n" '  .lo;,ccdkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkd,.c;'>> parrot.txt
	@printf "%s\n" ',dx:..;lllllllllllllllllllllllllllllllloc'\''...'>> parrot.txt
	@printf "%s\n" 'cNO;........................................'>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" '='>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" '                   .ccc;;cc;'\'';c.'>> parrot.txt
	@printf "%s\n" '                .ckx;'\''::;;;;:c'\'':c.'>> parrot.txt
	@printf "%s\n" '             .,:c:c:::oxxocoo::::,'\'',.'>> parrot.txt
	@printf "%s\n" '            .odc'\''..:lkkoolllllo;..;d,'>> parrot.txt
	@printf "%s\n" '            ;c..:o:..;:..'\'',;'\''.......;.'>> parrot.txt
	@printf "%s\n" '           ,c..:0Xx::o:.,cllc:,'\''::,.,c.'>> parrot.txt
	@printf "%s\n" '           ;c;lkXXXXXXl.;lllll;lXXOo;'\'':c.'>> parrot.txt
	@printf "%s\n" '         ,dc.oXXXXXXXXl.,lllll;lXXXXx,c0:'>> parrot.txt
	@printf "%s\n" '         ;Oc.oXXXXXXXXo.'\'':ll:;'\''oXXXXO;,l'\'''>> parrot.txt
	@printf "%s\n" '         '\''l;;OXXXXXXXXd'\''.'\''::'\''..dXXXXO;,l'\'''>> parrot.txt
	@printf "%s\n" '         '\''l;:0XXXXXXXX0x:...,:o0XXXXk,:x,'>> parrot.txt
	@printf "%s\n" '         '\''l;;kXXXXXXKXXXkol;oXXXXXXXO;oNc'>> parrot.txt
	@printf "%s\n" '        ,c'\''..ckk0XXXXXXXXXX00XXXXXXX0:;o:.'>> parrot.txt
	@printf "%s\n" '      .'\'':;..:dd::ooooOXXXXXXXXXXXXXXXo..c;'>> parrot.txt
	@printf "%s\n" '    .'\'','\'',:co0XX0kkkxx0XXXXXXXXXXXXXXX0c..;l.'>> parrot.txt
	@printf "%s\n" '  .:;'\''..oXXXXXXXXXXXXXXXXXXXXXXXXXXXXXko;'\'';:.'>> parrot.txt
	@printf "%s\n" '.cdc..:oOXXXXXXXXKXXXXXXXXXXXXXXXXXXXXXXo..oc'>> parrot.txt
	@printf "%s\n" ':0o...:dxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxo,.:,'>> parrot.txt
	@printf "%s\n" 'cNo........................................;'\'''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" ''>> parrot.txt
	@printf "%s\n" '='>> parrot.txt
	@chmod 777 parrot.txt
	@sleep 0.25
	@printf "$(BLACK)"



build_p_racc.txt:
	@printf "$(NEOR) Building p_racc.txt... $(RESET)"
	@printf "$(MINT)🦝\n\n"
	@> p_racc.txt
	@printf "%s\n" ''>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '='>> p_racc.txt
	@printf "%s\n" ''>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '='>> p_racc.txt
	@printf "%s\n" ''>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '='>> p_racc.txt
	@printf "%s\n" ''>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '='>> p_racc.txt
	@printf "%s\n" ''>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '    :::                                                          '>> p_racc.txt
	@printf "%s\n" ' -+@@@##-                                                        '>> p_racc.txt
	@printf "%s\n" '+#///--/+-'\''                                                      '>> p_racc.txt
	@printf "%s\n" '#++/-:/+###+/:                                                   '>> p_racc.txt
	@printf "%s\n" '/+/-/@@#/:--+#-                                                  '>> p_racc.txt
	@printf "%s\n" '--+##+-:-----++                                                  '>> p_racc.txt
	@printf "%s\n" ''\''+#+/ :-++++/#/                                                  '>> p_racc.txt
	@printf "%s\n" '/@@/ +##++##+#:                                                  '>> p_racc.txt
	@printf "%s\n" '@##:+####++/@@:                                                  '>> p_racc.txt
	@printf "%s\n" '##+-++##++##//#                                                  '>> p_racc.txt
	@printf "%s\n" '#@# @####@++@/@'\''                                                 '>> p_racc.txt
	@printf "%s\n" '#+-'\'' #++##  #-@                                                  '>> p_racc.txt
	@printf "%s\n" ''\''  :#+++#:  -//                                                  '>> p_racc.txt
	@printf "%s\n" '/+##+#+#/    :                                                   '>> p_racc.txt
	@printf "%s\n" '@++@@++:                                                         '>> p_racc.txt
	@printf "%s\n" '+/++#-                                                           '>> p_racc.txt
	@printf "%s\n" '@///#'\''                                                           '>> p_racc.txt
	@printf "%s\n" ':-//:                                                            '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '='>> p_racc.txt
	@printf "%s\n" ''>> p_racc.txt
	@printf "%s\n" '                                                        :/++-'\''   '>> p_racc.txt
	@printf "%s\n" '                                                       -++-+##/  '>> p_racc.txt
	@printf "%s\n" '                '\''-/-                                  /#+::  :+#:'>> p_racc.txt
	@printf "%s\n" '               /#-#+-                     :'\''       :/##///:'\''  '\''/-'>> p_racc.txt
	@printf "%s\n" '              +/  -/@+:    :--'\''        -+++-     /###+--+@#/  :#-'>> p_racc.txt
	@printf "%s\n" '             :+:'\''##-/+#+//-/++++-'\''  :+####++++#@##/--/+@##/-: :#:'>> p_racc.txt
	@printf "%s\n" '             /+ //@#--+#+#@######@#@@#######++/+#++//##::#++- :#-'>> p_racc.txt
	@printf "%s\n" '             +-:+@:+#++#++++###++##+++####++++++#++#@+   -@+-::#:'>> p_racc.txt
	@printf "%s\n" '             /#+@-'\''/@#++++++++#+/////###++++++++++#@+:    ##++@- '>> p_racc.txt
	@printf "%s\n" '              +@#+#+@++++++++####/++###+++++++++++@#+#-:  :#@#:  '>> p_racc.txt
	@printf "%s\n" '              ++#///@++++####+--####-:+####+++++++@/-@###+##+/   '>> p_racc.txt
	@printf "%s\n" '             /#/+++####+//+#+-  '\''::'\''  -+##++++#++++#+::-@#//#-   '>> p_racc.txt
	@printf "%s\n" '            /--++++++++++++++/:'\''     :++++++++####++++++++//#+'\''  '>> p_racc.txt
	@printf "%s\n" '           :#--++########++@####: /#++##++++++++++++++++++/--/+: '>> p_racc.txt
	@printf "%s\n" '          '\''#-//+#@#/@@+'\'':##+###++/#++#+################+++---/// '>> p_racc.txt
	@printf "%s\n" '          -/--/::'\''       '\'' @#++@#++++####/   -@######+#+++-::/#- '>> p_racc.txt
	@printf "%s\n" '          +/:'\''              @   @#@@@@+          :/##@#+++//-:/#-'>> p_racc.txt
	@printf "%s\n" '         //::::::'\'''\'''\'''\'':: '\''      /@                    :---///--:/#'>> p_racc.txt
	@printf "%s\n" '         /+/------:@#/-#+-'\'''\'''\''  :@    '\''   :               :/----/+'>> p_racc.txt
	@printf "%s\n" '         '\''++////--@#+@@@@@##/::@+//::'\''::::::::'\'''\'''\'''\'''\'':        :--#+'>> p_racc.txt
	@printf "%s\n" '          '\''@+@@@@@//++++#@@@##+#+/-#######+//+#@+:::::::::::::-/#'>> p_racc.txt
	@printf "%s\n" '          :#+@/:@@@+/+######@##-/##/#@@:@@+##+-#@//---------:::-+'>> p_racc.txt
	@printf "%s\n" '          '\''#+++:#/++#+/++#+++++:/##+##++#++#++'\''/@---------------/'>> p_racc.txt
	@printf "%s\n" '           '\''//- ++/+++#++@@@@++-###+++#####+++:++#@##+++//////++#'>> p_racc.txt
	@printf "%s\n" '                 /@+//+##:@@/@#+#@@@@#+///--:-#@@#+//+#@@+++##/::'>> p_racc.txt
	@printf "%s\n" '                  /@+/: '\''  # +##@ @@@+####@@##++++#-   +@++#+'\''   '>> p_racc.txt
	@printf "%s\n" '                  ///       -@+++'\''/-  +#+++++++///@:  /@+++#-    '>> p_racc.txt
	@printf "%s\n" '                  -/'\'''\''     -#+++#:       /+///+#@#:  :#++++#-    '>> p_racc.txt
	@printf "%s\n" '                   -@::: '\''/@+'\'' :++       --@@+/-'\''    :+####/     '>> p_racc.txt
	@printf "%s\n" '                     +@:::/@/   -@/'\''      +@@/                   '>> p_racc.txt
	@printf "%s\n" '                      /+-:-+#-'\''/@#/:'\'':-'\'''\'''\'''\'''\'':+                   '>> p_racc.txt
	@printf "%s\n" '                       /+---#@##+/:::::::/#@-                    '>> p_racc.txt
	@printf "%s\n" '                        :/@/----------@+-:'\''                      '>> p_racc.txt
	@printf "%s\n" '                          '\''-+@@@#++@@-                           '>> p_racc.txt
	@printf "%s\n" '                                '\'':'\''                              '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '='>> p_racc.txt
	@printf "%s\n" ''>> p_racc.txt
	@printf "%s\n" '                                                    ::-@@        '>> p_racc.txt
	@printf "%s\n" '                                                   '\''-:   @+      '>> p_racc.txt
	@printf "%s\n" '                                                 -@--:'\''   +      '>> p_racc.txt
	@printf "%s\n" '            +@-:                     :+#+:    :#@@::@@@:  @      '>> p_racc.txt
	@printf "%s\n" '           @  :-@/:     /+#+-'\''     -+###+/-/##@+::/@/#-:/ #-     '>> p_racc.txt
	@printf "%s\n" '             @-::#@#//--/+###@+/-+#@######@//@++--@- /#++  -     '>> p_racc.txt
	@printf "%s\n" '           : :@##::+@/@@######@+@+++####+++++@+/+@-   #/+:-      '>> p_racc.txt
	@printf "%s\n" '          ::/@#:+-/+++++++###+++@+++##++++++++++@/:   -@/@-      '>> p_racc.txt
	@printf "%s\n" '            /// '\''#@+++++++++##////#@#+++++++++++@@#:'\'''\'':/@/       '>> p_racc.txt
	@printf "%s\n" '           @+#: -#@+++++++++@##/#/#+##++++++++++@@@@@+@@//       '>> p_racc.txt
	@printf "%s\n" '           :@###@@@++++++###+--+#+-:/+######++++++-::@////       '>> p_racc.txt
	@printf "%s\n" '           ://@'\'':++++######+-       :+#@///+######++++++:/:'\''     '>> p_racc.txt
	@printf "%s\n" '           --+++++###+++++++-:'\''   ::-#++++++++++++++++++--::'\''    '>> p_racc.txt
	@printf "%s\n" '          ::-+++++++++++++#####- /@###@+++###########+++-::-     '>> p_racc.txt
	@printf "%s\n" '          -:-++###########++#++#-#++##+####+/####++/##++-::::    '>> p_racc.txt
	@printf "%s\n" '         :://++##-:#@+    @#+++#/##++#@  :      @#####///+--:-   '>> p_racc.txt
	@printf "%s\n" '         :--++-          : @@@@ # @@@@                 -+---:-'\''  '>> p_racc.txt
	@printf "%s\n" '        '\''//                     @'\''                  -      ///'\''  '>> p_racc.txt
	@printf "%s\n" '        --:::'\'''\'''\'''\'''\'''\'''\'''\'''\'''\''  '\''      @      ::  '\'''\'''\'''\'''\'''\'''\'''\'''\'''\'''\'''\'''\'''\'''\'':::++  '>> p_racc.txt
	@printf "%s\n" '        -------::::@@#-+###+::/@/@/:::####+::#@@:::::-:-::::---/ '>> p_racc.txt
	@printf "%s\n" '        :////-----@-+@+@@ #+##+@/@+##++#+#@@#+:/@@/--------///// '>> p_racc.txt
	@printf "%s\n" '         :+++@@@@+--++++#++####+-+###--/ +++#/--@---////////+-'\''  '>> p_racc.txt
	@printf "%s\n" '          -++@--#@@#+/+###++/#@/:/##+#+#####+#-/@@#++##@@+++:    '>> p_racc.txt
	@printf "%s\n" '          -/+@--//++@#++/+##+###-###+###++//--#@@@@+  '\''##++-     '>> p_racc.txt
	@printf "%s\n" '          :/++/:#//+++@##+##+##+++#####//++@@@+++//#  -@#+//'\''    '>> p_racc.txt
	@printf "%s\n" '             '\'''\'' :+@@/+++##  @- @/@/@#+ ####++++///@- '\''@++++/     '>> p_racc.txt
	@printf "%s\n" '                   /@///      #@+@# @   /+ +///@@+:  '\''+:::'\''      '>> p_racc.txt
	@printf "%s\n" '                   /@@        #+#+#        //@+:                 '>> p_racc.txt
	@printf "%s\n" '                    '\'''\'''\'''\''     @+::-++        @@#                  '>> p_racc.txt
	@printf "%s\n" '                     /:::'\'''\''-/@/   -@/      '\'''\'''\''#                  '>> p_racc.txt
	@printf "%s\n" '                       #@:::/++: :@@/'\''-:::::@:                   '>> p_racc.txt
	@printf "%s\n" '                         @--:-##++#+::::@@#                      '>> p_racc.txt
	@printf "%s\n" '                          #/----:------@:                        '>> p_racc.txt
	@printf "%s\n" '                             :@@-/#@@@'\''                          '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '='>> p_racc.txt
	@printf "%s\n" ''>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '          @-@:                                     :@:/          '>> p_racc.txt
	@printf "%s\n" '             :-@/  -+  #+/-'\''         '\''-/+#  #/  /@--             '>> p_racc.txt
	@printf "%s\n" '           @@@::@@#-/+#+++##/:     :/###++#+//#@@::@@@           '>> p_racc.txt
	@printf "%s\n" '          -:++@/::+@#@#++####@#/-/#@####++#@+@+::/@#/:-          '>> p_racc.txt
	@printf "%s\n" '        @ //#-:@--++#//+@####+@+@+#+####@+//@++--#:-#/- @        '>> p_racc.txt
	@printf "%s\n" '        # //+  :@+++@+++++###+++@+++###+++++@+++@:  #/-          '>> p_racc.txt
	@printf "%s\n" '         @/@:  :+@++++++++++##+///###++++++++++@+:  -@/@         '>> p_racc.txt
	@printf "%s\n" '         /@#---# @++++++++++@##/#/##@++++++++++@ #---#@-         '>> p_racc.txt
	@printf "%s\n" '          /+@ @++@+++++####+/:-+#+-:/+####+++++@#:@ @//          '>> p_racc.txt
	@printf "%s\n" '          /+++/@++##+////@#+:       :+#@////+##++@++++/          '>> p_racc.txt
	@printf "%s\n" '         :-++++++++++++++++#-::   ::-#++++++++++++++++-:         '>> p_racc.txt
	@printf "%s\n" '         --+++#####+++++++@####- -@###@++++++++####+++-: '\''       '>> p_racc.txt
	@printf "%s\n" '        ::-+#@#+##########++#++#-#++#++##########+###+-::        '>> p_racc.txt
	@printf "%s\n" '       :-+//+@###      '\''  @#++##/##++#@  '\''      ####+//+-:       '>> p_racc.txt
	@printf "%s\n" '       :--##             : @@@@ # @@@@ -             #+--:       '>> p_racc.txt
	@printf "%s\n" '       //              /        @'\''       -              //       '>> p_racc.txt
	@printf "%s\n" '      +:::'\'''\'''\'''\'''\'''\'''\'''\'''\'''\''-'\''  :       @       '\''  ::'\'''\'''\'''\'''\'''\'''\'''\'''\'''\'':::+      '>> p_racc.txt
	@printf "%s\n" '     ------:::/:::@@#::####-::/@/@/::/####::#@@:::--:::----+     '>> p_racc.txt
	@printf "%s\n" '      ////------@@--#@#@'\''/#+##+@/@+##+#/ @#@#--@@------////      '>> p_racc.txt
	@printf "%s\n" '       -++//////-/-++#+#+- ####+-+####  +#+#/+---//////++        '>> p_racc.txt
	@printf "%s\n" '        +++@/-/#@@+/++####+++##/:/##+++####+#/+@@+/-+@+++        '>> p_racc.txt
	@printf "%s\n" '         +#@- /+++##/+/+/+##+###-###+##+/+/+/@++++/ -@#+         '>> p_racc.txt
	@printf "%s\n" '        ++/+@:/+//#@####++@#+##+++##+##++####@#//@/:@+/++        '>> p_racc.txt
	@printf "%s\n" '           +@+-#@///++++##  @/+@/@ #@  ##++++///@#/#@+           '>> p_racc.txt
	@printf "%s\n" '              ++#+#@//+ -   + #@+@# @  :- +//@#####              '>> p_racc.txt
	@printf "%s\n" '                   +@         ###+#         @+                   '>> p_racc.txt
	@printf "%s\n" '                  -          ++-:-++          :                  '>> p_racc.txt
	@printf "%s\n" '                    ::'\'''\''/ -'\''/@-   /@/'\'': -'\'''\''::                    '>> p_racc.txt
	@printf "%s\n" '                      @-::::/#@: :@#/::::-#                      '>> p_racc.txt
	@printf "%s\n" '                        @-:::+##+##+:::-@                        '>> p_racc.txt
	@printf "%s\n" '                         +------:-----//                         '>> p_racc.txt
	@printf "%s\n" '                             #@+-+@+                             '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '='>> p_racc.txt
	@printf "%s\n" ''>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '           -@:                                     :@:           '>> p_racc.txt
	@printf "%s\n" '             /-@/  +:  #+/-           -/+#  -+  +@-#             '>> p_racc.txt
	@printf "%s\n" '           @@@::@@#/+##++++#/:     :/#++++#++/#@@::@@@           '>> p_racc.txt
	@printf "%s\n" '           '\''/#@/::+@@@#++####@+/-/+@####++#@@@+::/@#-'\''           '>> p_racc.txt
	@printf "%s\n" '        @  /-+-@--++@//+@####+@+@+@+####@+//@++--#-+-/ /#        '>> p_racc.txt
	@printf "%s\n" '           /#: :@+++@+++++###+++@+++###+++++@+++#: :@/           '>> p_racc.txt
	@printf "%s\n" '         @/@/  :+@++++++++++##/////##++++++++++@+:  /@/@         '>> p_racc.txt
	@printf "%s\n" '          @@---# @++++++++++@##/#/##@++++++++++@ #--/@@          '>> p_racc.txt
	@printf "%s\n" '          //@ @'\''@@+++++####+/-/+#+/-++####+++++@@-@ @//          '>> p_racc.txt
	@printf "%s\n" '          /+++/+++##+////@#+-  '\'':'\''  -+#@////###++//+++/          '>> p_racc.txt
	@printf "%s\n" '         ::++++++++++++++++#/::   ::/+++++++++++++++++::         '>> p_racc.txt
	@printf "%s\n" '       : :-+++####++++++++@####-'\''/@###@+++++++++###+++-'\'' :       '>> p_racc.txt
	@printf "%s\n" '         ::++##+##########++#++#/#++##+##########+#+#+::         '>> p_racc.txt
	@printf "%s\n" '       ::++/+####      '\''  @#+++#/@+++#@  '\''      ####+/++:'\''       '>> p_racc.txt
	@printf "%s\n" '       :--##:            : @@@@ # @#@@ -            -#+--'\''       '>> p_racc.txt
	@printf "%s\n" '       //              -        @'\''       '\''              //       '>> p_racc.txt
	@printf "%s\n" '      +::'\'''\'''\'''\'''\'''\'''\'''\'''\'''\'''\''::  '\''       @ '\''        -:'\'''\'''\'''\'''\'''\'''\'''\'''\'''\'':::+      '>> p_racc.txt
	@printf "%s\n" '     @-----::-::::@@@-:####/::/@+@/::/####:-@@@::::-:------@     '>> p_racc.txt
	@printf "%s\n" '      ////------@@/-#@+@::@+##+@/@+##+@- @/@#-/@@------////      '>> p_racc.txt
	@printf "%s\n" '        ++////+/--/+/#+##::####+-+####::##+#/+/-//+////++        '>> p_racc.txt
	@printf "%s\n" '         ++@+//#@@+/#+####+++#@+:+@#/++####+#/+@@#//+@++         '>> p_racc.txt
	@printf "%s\n" '         /#@/'\''/++++@++++++##+###/###+##++++++@++++-'\''/@#+         '>> p_racc.txt
	@printf "%s\n" '        ++++@-/@//@@#+##++@##@@#+#@####++##+#@@//@--@++++        '>> p_racc.txt
	@printf "%s\n" '           /@#/#@///++++##  @-:@/@ #@  ##++++///@#/#@-           '>> p_racc.txt
	@printf "%s\n" '               #+##@//+  :  - #@+@# +  /  +//@##/#               '>> p_racc.txt
	@printf "%s\n" '                   +@         ###+#         @+                   '>> p_racc.txt
	@printf "%s\n" '                             ##---#+                             '>> p_racc.txt
	@printf "%s\n" '                    #:'\'''\'''\'''\''  /@/   /@/  '\'''\'''\'''\'':@                    '>> p_racc.txt
	@printf "%s\n" '                       @::::/+#- -#+/::::@                       '>> p_racc.txt
	@printf "%s\n" '                        @--::+#####/::--@                        '>> p_racc.txt
	@printf "%s\n" '                          @-----------@                          '>> p_racc.txt
	@printf "%s\n" '                              @@-@@                              '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '='>> p_racc.txt
	@printf "%s\n" ''>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '           +-:                                     :/+           '>> p_racc.txt
	@printf "%s\n" '          -  @-@   +    '\''               '\''    +   @-@  +          '>> p_racc.txt
	@printf "%s\n" '         @ #:::-@@#+####++@#/::'\'''\'''\''::/#@++###++#@@-:::# @         '>> p_racc.txt
	@printf "%s\n" '         :  -@@/::/@@@#++####@+/-/+@####++#@@@/::/@@-'\'' -         '>> p_racc.txt
	@printf "%s\n" '         @ /-#/@--+#@//#@#####@#@+@#####@#//@#+--#-#-/ @         '>> p_racc.txt
	@printf "%s\n" '           /@/:-@+/+@+++++###+++@+++###+++++@+/+#-:/@/           '>> p_racc.txt
	@printf "%s\n" '         @:@#:'\'':/@++++++++++##/////##+++++++++#@/:'\'':##:@         '>> p_racc.txt
	@printf "%s\n" '          @@+--+ @++++++++++@##/#/##@++++++++++@ +--+@@          '>> p_racc.txt
	@printf "%s\n" '          //@ @@ @++++++####+//###//+####++++++# @@-@//          '>> p_racc.txt
	@printf "%s\n" '          /+/+--+++##++//##+-:::-:::-+##//+###+++-/+/+/          '>> p_racc.txt
	@printf "%s\n" '          :-++++++++++++++++/-:'\'''\''::-/++++++++++++++++-:          '>> p_racc.txt
	@printf "%s\n" '        '\'''\''--++##++++++++++@####/:/####@+++++++++###++--'\'':        '>> p_racc.txt
	@printf "%s\n" '         ::++#############++#++#/#++#++############+++::         '>> p_racc.txt
	@printf "%s\n" '        :++/++###  ::     @#++##+@+++#@     ::  ###++/++:        '>> p_racc.txt
	@printf "%s\n" '       '\''--+++            - @@@@ # @/@@ :            +#/--        '>> p_racc.txt
	@printf "%s\n" '       :/:                      @:                     :/        '>> p_racc.txt
	@printf "%s\n" '      /::::'\'''\'''\'''\'''\'''\'''\'''\'''\'''\'':          @ '\''        :'\'''\'''\'''\'''\'''\'''\'''\'''\'''\'':::--      '>> p_racc.txt
	@printf "%s\n" '      -------:::::@@@/:####+::/@+@/::+####:/@@@:::::-------      '>> p_racc.txt
	@printf "%s\n" '      -////------@+/#@+@@ ####+@+@+###@ #@+@#/#@------////-      '>> p_racc.txt
	@printf "%s\n" '        +++//+@#/-++/#++#/+#@##+/+##@#+/#++#//+-/#@+//+++        '>> p_racc.txt
	@printf "%s\n" '         ++@#//#@@#+#+####++/#@+-+@#/++####+#+#@@+//#@++         '>> p_racc.txt
	@printf "%s\n" '         +###:-/+++@##++++##+###/+##+##++++##@+++/--#+#+         '>> p_racc.txt
	@printf "%s\n" '         ++/@+-@//+@++##++#@#@@###@@#@#++##++@+//@-+@/++         '>> p_racc.txt
	@printf "%s\n" '            +@++@@//++++##  @- @/@ #@'\'' ##++++//@@##@+            '>> p_racc.txt
	@printf "%s\n" '               # @#@@/+  +    ##+@#    -  +/@@#@ +               '>> p_racc.txt
	@printf "%s\n" '                   +@         @####        :@+                   '>> p_racc.txt
	@printf "%s\n" '                   :'\''       '\''@#---#@        '\''-                   '>> p_racc.txt
	@printf "%s\n" '                    #:::'\''+'\'':/@+:'\'':+@/-'\''+'\'':::+                    '>> p_racc.txt
	@printf "%s\n" '                      #@::::/+#/:/#+/:::-@#                      '>> p_racc.txt
	@printf "%s\n" '                        :@--::#@@##::--@                         '>> p_racc.txt
	@printf "%s\n" '                          @----------/@                          '>> p_racc.txt
	@printf "%s\n" '                               @@#                               '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '='>> p_racc.txt
	@printf "%s\n" ''>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '           @                                         #           '>> p_racc.txt
	@printf "%s\n" '          @- +:                                   :: #@          '>> p_racc.txt
	@printf "%s\n" '             '\'':-@#++### ++#+--:: ::-/+#++'\''###++#@-:'\''             '>> p_racc.txt
	@printf "%s\n" '         @  '\''@@:/-/####++###@#/---/#@###++####/-/:@@'\''  +         '>> p_racc.txt
	@printf "%s\n" '         @ /@-+##--+@/#@######@@#@@######@+/@+--##+-#/ @         '>> p_racc.txt
	@printf "%s\n" '         @ +/#--#-/+#+++++###+++@+++###+++++++/-#--@/+ @         '>> p_racc.txt
	@printf "%s\n" '          -/@/::/@@+++++++++#///////#+++++++++@@/::+@//          '>> p_racc.txt
	@printf "%s\n" '          #@#/-/#@@+++++++++#@#/#/#@#+++++++++@@#/-/#@/          '>> p_racc.txt
	@printf "%s\n" '           /@@@@+ +++++++###+/+###+/+###++++++#:@@@@@/           '>> p_racc.txt
	@printf "%s\n" '          :////-@@++#######+/---/-:-/+#######++@+-+///           '>> p_racc.txt
	@printf "%s\n" '           :+++++++++++++++++--:::--++#++++++++++++++:           '>> p_racc.txt
	@printf "%s\n" '        ::--++++++++++++++#@###/-/###@#++++++++++++++--:'\''        '>> p_racc.txt
	@printf "%s\n" '         '\'':-+#@############+#++#/#++#++###########@++-:          '>> p_racc.txt
	@printf "%s\n" '        :-+/++@##  /+/    @#+++#+##++#@    /+/ '\''##@+//+-:        '>> p_racc.txt
	@printf "%s\n" '       '\'':--++'\''           '\'' @@/@ # @'\''@#             :+#--:'\''       '>> p_racc.txt
	@printf "%s\n" '        //    :                 @-  :             :    //        '>> p_racc.txt
	@printf "%s\n" '       +:::'\'''\'''\'''\'''\'''\'''\'''\'''\'''\'''\'''\''  :    '\'' @ '\''    :  '\'''\'''\'''\'''\'''\'''\'''\'''\'''\'''\'''\'':::+       '>> p_racc.txt
	@printf "%s\n" '      /-----:::-::@@@#-+####::/@#@/::####/-#@@+::/::------+      '>> p_racc.txt
	@printf "%s\n" '       ////------@@/#@+@@ /###+@+@+###+ @@+@#/@@------////       '>> p_racc.txt
	@printf "%s\n" '         +++/#@@+-@//+++#++#@@#+++@@@#++#+++//@-#@@#/+++         '>> p_racc.txt
	@printf "%s\n" '         /++@+/+@@@##+####++/+@#/##++++####+##@@@+/+@++-         '>> p_racc.txt
	@printf "%s\n" '         ++#@/-#/+++@#++++##+++++/+#+##++++#@+++/#-+@#++         '>> p_racc.txt
	@printf "%s\n" '         /+++@/#+//@++@####@#@@###@@#@####@++@//##/@+++/         '>> p_racc.txt
	@printf "%s\n" '             @##@@@//+++##- @  @/@ -@'\''/##+++//@@@##@             '>> p_racc.txt
	@printf "%s\n" '                # ##@///   :  #+++#  :   +//@#+ +                '>> p_racc.txt
	@printf "%s\n" '                    @@    :   @#@+@   :    @@                    '>> p_racc.txt
	@printf "%s\n" '                   #'\'''\'' '\''    /@+---+@/    '\'' '\'''\''+                   '>> p_racc.txt
	@printf "%s\n" '                     @:::'\''+'\''/@#-:-#@/'\''/'\'':::@                     '>> p_racc.txt
	@printf "%s\n" '                       @@::::+#+/+#+::::@@                       '>> p_racc.txt
	@printf "%s\n" '                         @----+@-@+----@                         '>> p_racc.txt
	@printf "%s\n" '                           @+-------#@                           '>> p_racc.txt
	@printf "%s\n" '                                /                                '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '='>> p_racc.txt
	@printf "%s\n" ''>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                  :              '>> p_racc.txt
	@printf "%s\n" '            '\''+:                                   :-'\''            '>> p_racc.txt
	@printf "%s\n" '          @   @-@#/ ##  +##+::-- -- -+##+  @# /#@-@  '\''@          '>> p_racc.txt
	@printf "%s\n" '          @  @@::+@@####+###@+//-//+@###+####@@+::@@  @          '>> p_racc.txt
	@printf "%s\n" '          # :-@@#::+@/@@######@@#@@######@@/@+::@@@-: @          '>> p_racc.txt
	@printf "%s\n" '            +@+/#-/+#/+++@###+++@+++###@+++/++//#/#@+            '>> p_racc.txt
	@printf "%s\n" '          @:@@/-/@@++++++++##++/#/++##++++++++@@/-/@@:@          '>> p_racc.txt
	@printf "%s\n" '           @@+//#@@++++++++++@#/#+#@++++++++++@@#//+@@           '>> p_racc.txt
	@printf "%s\n" '           /@@@@@@@+++++++###+##/#++###+++++++@@@@@@@/           '>> p_racc.txt
	@printf "%s\n" '            //@::++++#######+--///--+#######++++::@//            '>> p_racc.txt
	@printf "%s\n" '            ++++++###++++++++-------#+#+++++###+++++/            '>> p_racc.txt
	@printf "%s\n" '         ::-/+++++++++++++#@###/-/###@++++++++++++++--::         '>> p_racc.txt
	@printf "%s\n" '          ::++#############+#++#+#+++++############++::          '>> p_racc.txt
	@printf "%s\n" '         :++/####-:#@@    @#+++++++++#@    @@#'\''/###+/++:         '>> p_racc.txt
	@printf "%s\n" '       ::--++#             #@ @ @ @ @/             +++--:'\''       '>> p_racc.txt
	@printf "%s\n" '         /:                 -  :@/  -                 -/         '>> p_racc.txt
	@printf "%s\n" '       -::::'\'''\'''\'''\'''\'''\'''\'''\'''\'''\'':  '\''    '\'' @         ::'\'''\'''\'''\'''\'''\'''\'''\'''\'':::-        '>> p_racc.txt
	@printf "%s\n" '       --------::::@@@/-####::/@#@/::####:/@@@::::--------       '>> p_racc.txt
	@printf "%s\n" '        ////-----+@+#@+@@  @##+@#@+##@  @@+@#+@/-----////        '>> p_racc.txt
	@printf "%s\n" '         +++/@@@@/-+@+++#++#@@@++#@@##++#+++@+-/@@@@++++         '>> p_racc.txt
	@printf "%s\n" '          ++@#++@@@@######+++#+#/#/#+++######@@@@++#@++          '>> p_racc.txt
	@printf "%s\n" '          /##@/#//++@@#+++###@#/#/#@###+++#@@+++/+/@#+/          '>> p_racc.txt
	@printf "%s\n" '          /++@#+@///+++####@#@@@/@@@#@####+++///@+#@++/          '>> p_racc.txt
	@printf "%s\n" '              @@@@@@/+/++#  @  @+@  @  #+/++/@@@@@@              '>> p_racc.txt
	@printf "%s\n" '                  '\''#@#/       #+++#       /@@#                   '>> p_racc.txt
	@printf "%s\n" '                   +@@    '\''  /#+#+#:  '\''    @@+                   '>> p_racc.txt
	@printf "%s\n" '                    +'\'''\'''\'''\''   /@+---#@/ '\'' :'\'''\'''\''#                    '>> p_racc.txt
	@printf "%s\n" '                      @:::::/@#/-/@@/:::::@                      '>> p_racc.txt
	@printf "%s\n" '                        @+:::+##+##+:::/@                        '>> p_racc.txt
	@printf "%s\n" '                          @----::-----@                          '>> p_racc.txt
	@printf "%s\n" '                             @@/-/@@                             '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '='>> p_racc.txt
	@printf "%s\n" ''>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '            @@                                     @@            '>> p_racc.txt
	@printf "%s\n" '           @   -@/  #  :@#:           :#@   #  +@-   #           '>> p_racc.txt
	@printf "%s\n" '             @:::@@@##@####@#+/////+#@#######@@@:/:@             '>> p_racc.txt
	@printf "%s\n" '            ::@@+::/@@@@#####@@###@@#####@@@@/::#@@'\'':            '>> p_racc.txt
	@printf "%s\n" '          @ +@#+@/-++#//+@###+++@+++###@++/@++-##+#@+ @          '>> p_racc.txt
	@printf "%s\n" '          : +/#//@@++@+++++##+++@+++##+++++@++@#//#/+            '>> p_racc.txt
	@printf "%s\n" '           @+@+/+@@++++++++++@#/#/#@++++++++++@#+/+@#@           '>> p_racc.txt
	@printf "%s\n" '           /@@@@@ @++++++++####///####++++++++@ @@@@@'\''           '>> p_racc.txt
	@printf "%s\n" '            //@'\'':@@+++######+//+++//+######+++@#:'\''@//            '>> p_racc.txt
	@printf "%s\n" '            -+++++####++++#++///-///+##++++####+++++-            '>> p_racc.txt
	@printf "%s\n" '          ::-++++++++++++++@###+/+###@++++++++++++++-::          '>> p_racc.txt
	@printf "%s\n" '           :-++############++#+#+#+#+++###########++-:           '>> p_racc.txt
	@printf "%s\n" '          :+/#+@##-@@@    @##+++++++##@    @@@:##@+#/+:          '>> p_racc.txt
	@printf "%s\n" '        ::--++/            -@ @ @ @-@'\''            +++--::        '>> p_racc.txt
	@printf "%s\n" '         //                 :  -@/                    //         '>> p_racc.txt
	@printf "%s\n" '        +:::'\'''\'''\'''\'''\'''\'''\'''\'''\'':'\''         @     '\'''\''  ::'\'''\'''\'''\'''\'''\'''\'''\'''\'':::+        '>> p_racc.txt
	@printf "%s\n" '       @-------:-::@@@#/####::/@@@/::####/#@@@::-:-------@       '>> p_racc.txt
	@printf "%s\n" '        -////-----@##@++@  @###@#####@  @/+@##@-----////-        '>> p_racc.txt
	@printf "%s\n" '          +++@@@@@/##/++#++#+@@###@@+#++#+++##/@@@@@+++          '>> p_racc.txt
	@printf "%s\n" '           ++@++@@@@##+####++++@+@++++####+##@@@@++@++           '>> p_racc.txt
	@printf "%s\n" '         : /#@#+#/++#@@##+#@@@@/#/@@@@#+##@@+++/@+#@#/ -         '>> p_racc.txt
	@printf "%s\n" '           +++@#@@//+++####@@@@@/@@@@@###++++//@@#@+++           '>> p_racc.txt
	@printf "%s\n" '               @@@@@+/+ +#  @ -@+@+ /  ++ +/#@@@@#               '>> p_racc.txt
	@printf "%s\n" '                   #@@/       #+#+#       /@@#                   '>> p_racc.txt
	@printf "%s\n" '                   :::     '\'' +#####+ '\''     ::                    '>> p_racc.txt
	@printf "%s\n" '                     ::'\'''\''   /@#///#@/   '\'''\''::                     '>> p_racc.txt
	@printf "%s\n" '                       @::::/+@+/+@+/::::@                       '>> p_racc.txt
	@printf "%s\n" '                         @--::##@##::--@                         '>> p_racc.txt
	@printf "%s\n" '                          @/---------/@                          '>> p_racc.txt
	@printf "%s\n" '                               @@#                               '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '='>> p_racc.txt
	@printf "%s\n" ''>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '            :  :                                 :  +            '>> p_racc.txt
	@printf "%s\n" '           @  '\''@-@@@@@@#-#@@#+++/+++#@@#-#@@@@@@-@'\''  @           '>> p_racc.txt
	@printf "%s\n" '           - '\''@@+/:/@@@@#####@@###@@#####@@@@/:/#@@'\'' -           '>> p_racc.txt
	@printf "%s\n" '           @ /-@@@-/#@//@#####@+@+@#####@//@+/-@@@-/ @           '>> p_racc.txt
	@printf "%s\n" '             /@++@@++@+++++##+++@+++##+++++@++@@++@/             '>> p_racc.txt
	@printf "%s\n" '           @-@#++#@@++++++++#@#///#@#++++++++@@#++#@--           '>> p_racc.txt
	@printf "%s\n" '            #@@@@@#+++++++++##@/+/@##++++++++#/@@@@@+            '>> p_racc.txt
	@printf "%s\n" '            //@ '\'':@++++######++###++######++++@- '\''@//            '>> p_racc.txt
	@printf "%s\n" '            -+++++####+///@##+/////+##@//++####+++++:            '>> p_racc.txt
	@printf "%s\n" '           :-++++++++++++++####+++####++++++++++++++-:           '>> p_racc.txt
	@printf "%s\n" '           :-++############++#+###+#++############++-:           '>> p_racc.txt
	@printf "%s\n" '          :-+++@##/@@@-  '\''@##+++#+++##@   +@@@-###+++-:          '>> p_racc.txt
	@printf "%s\n" '         :--///            '\''@+@ @ @@@            '\''///--:         '>> p_racc.txt
	@printf "%s\n" '          /-   '\''               -@-               :   //          '>> p_racc.txt
	@printf "%s\n" '         /:::'\'''\'''\'''\'''\'''\'''\'''\'''\'':  :-     @   '\'' -:  :'\'''\'''\'''\'''\'''\'''\'''\'''\'':::/         '>> p_racc.txt
	@printf "%s\n" '        ---------::@@@@+####-:/@@@/:/####+@@@+:::--------        '>> p_racc.txt
	@printf "%s\n" '         /////----@@#@+#@@ @@##@@###@@ #@#+@#@@----/////         '>> p_racc.txt
	@printf "%s\n" '          /++@@@@@@@#+#+#++#+@@###@@+#++++#+#@@@@@@#++:          '>> p_racc.txt
	@printf "%s\n" '           ++@##@@@@@@+####++++@#@#+++####+@@@@@##@@++           '>> p_racc.txt
	@printf "%s\n" '          -/+#@#@//++@@####@@@@#@@@@@@####@@++//@#@#//-          '>> p_racc.txt
	@printf "%s\n" '            ++@@@@///+++###-@@:@/@ @@ ###+++///@@@@++            '>> p_racc.txt
	@printf "%s\n" '                @@@@@//+      #@+@#      +//@@@@@                '>> p_racc.txt
	@printf "%s\n" '                    @@        #####        @@                    '>> p_racc.txt
	@printf "%s\n" '                    :      '\'' +@###@+ '\''      -                    '>> p_racc.txt
	@printf "%s\n" '                     @::'\'''\'''\'':/@#+/+#@/'\'''\'''\'''\''::@                     '>> p_racc.txt
	@printf "%s\n" '                       @@::::+##+##+::::@@                       '>> p_racc.txt
	@printf "%s\n" '                         @---:+@@@+:---#                         '>> p_racc.txt
	@printf "%s\n" '                           @#-------#@                           '>> p_racc.txt
	@printf "%s\n" '                                -                                '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '='>> p_racc.txt
	@printf "%s\n" ''>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '               :                                 :               '>> p_racc.txt
	@printf "%s\n" '              -:                                 :--             '>> p_racc.txt
	@printf "%s\n" '               :-@@@ @@ :#@@# ## +# #@@#  @@ @@@-'\''               '>> p_racc.txt
	@printf "%s\n" '           @  @@#-:/@@@@####@@@###@@@####@@@@/:-@@@  @           '>> p_racc.txt
	@printf "%s\n" '           @ /-@@@--+@/@@#####@@@#@#####@@/@#--@@@-/ @           '>> p_racc.txt
	@printf "%s\n" '           @ +@@#@@++#++++###+++@+++###++++#++@@#@@+ @           '>> p_racc.txt
	@printf "%s\n" '            #/@###@@++++++++#@/////@#++++++++@@###@/@            '>> p_racc.txt
	@printf "%s\n" '            /@@@@@'\''@+++++++++#@/#/@++++++++++@ @@@@@/            '>> p_racc.txt
	@printf "%s\n" '             /@@'\'' ++++++#####++###++#####++++#+  @@/             '>> p_racc.txt
	@printf "%s\n" '             /+++++###+///@##+++++++##@///+###+++++/             '>> p_racc.txt
	@printf "%s\n" '           ::-+++++++++++++#####+#####+++++++++++++-::           '>> p_racc.txt
	@printf "%s\n" '            :-++###########+##+###+#++###########++-:            '>> p_racc.txt
	@printf "%s\n" '           ://++##/@@@@  :###+++#+++###   @@@@-###+//:           '>> p_racc.txt
	@printf "%s\n" '         ::--///            @@@ @ @@@            ///--::         '>> p_racc.txt
	@printf "%s\n" '          -/            -      /@:      /            /-          '>> p_racc.txt
	@printf "%s\n" '         +:::'\'''\'''\'''\'''\'''\'''\'''\'''\'''\''  '\'': :   @   -  '\''  '\'''\'''\'''\'''\'''\'''\'''\'''\''::::+         '>> p_racc.txt
	@printf "%s\n" '        #--------:::@@@#@###/:/@@@/:+#####@@@::---------@        '>> p_racc.txt
	@printf "%s\n" '          ////-----@@@##@@ @@@##@+#@@@ @@##@@@-----////          '>> p_racc.txt
	@printf "%s\n" '           ++#@@@@@/@+#++++##@@@@@@@##++++#+@/@@@@@+++           '>> p_racc.txt
	@printf "%s\n" '            #@@#@@@@@@@####+++#@#@#+++####@@@@@@@#@##            '>> p_racc.txt
	@printf "%s\n" '          ///+@@@//++@@####@@@@@@@@@@@####@@++//@@@+//-          '>> p_racc.txt
	@printf "%s\n" '             +#@@@@//+++##+ @@ @/@ @@ ###+++//@@@@++             '>> p_racc.txt
	@printf "%s\n" '                +@@@@#/+ :    #@+@/    - +/@@@@@/                '>> p_racc.txt
	@printf "%s\n" '                    @@#       #####       @@#                    '>> p_racc.txt
	@printf "%s\n" '                    @'\''       +@###@+       '\''@                    '>> p_racc.txt
	@printf "%s\n" '                      @::'\'':'\''/@@#+#@@/'\'':'\''::@                      '>> p_racc.txt
	@printf "%s\n" '                        @@:::+####++:::@@                        '>> p_racc.txt
	@printf "%s\n" '                          @----/:/:---@                          '>> p_racc.txt
	@printf "%s\n" '                            -@+---+@-                            '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '='>> p_racc.txt
	@printf "%s\n" ''>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '             @/'\''                                  /@             '>> p_racc.txt
	@printf "%s\n" '               '\''-@@# @/ #@@@+ @@ #@ #@@@# +@ #@@-'\''               '>> p_racc.txt
	@printf "%s\n" '           -  @@@:-@@@@@####@@@@@@@@@####@@@@@-:@@@              '>> p_racc.txt
	@printf "%s\n" '           / /:@@@:-+@/@@#####@@@@@#####@@/@+-:@@#-/ '\''           '>> p_racc.txt
	@printf "%s\n" '           : +#@@@@+++++++###+++@+++###+++++++@@@@++             '>> p_racc.txt
	@printf "%s\n" '            @/@@@@@@++++++++##/////##++++++++@@@@@@/@            '>> p_racc.txt
	@printf "%s\n" '            /@@@@@ @+++++++++#@/#/@#+++++++++@ @@@@@-            '>> p_racc.txt
	@printf "%s\n" '             /@@-@@@++++#################++++@@@:@@/             '>> p_racc.txt
	@printf "%s\n" '             /+++@+###////@###########@///+###+@+++/             '>> p_racc.txt
	@printf "%s\n" '           ::-++++++++++++++@#######@++++++++++++++-:            '>> p_racc.txt
	@printf "%s\n" '            :-++##############+#@@+##############++-:            '>> p_racc.txt
	@printf "%s\n" '           :-+#+@#/@@@@  :###+++#+++###:  @@@@/#@+#+-:           '>> p_racc.txt
	@printf "%s\n" '          :--///            @@@ @ @@@            ///--:          '>> p_racc.txt
	@printf "%s\n" '          -/            /      /@:      -            /-          '>> p_racc.txt
	@printf "%s\n" '         +::::'\'''\'''\'''\'''\'''\'''\'''\'''\'''\''    -   @   /    '\'''\'''\'''\'''\'''\'''\'''\'''\'''\''::::/         '>> p_racc.txt
	@printf "%s\n" '         ---------::@@@@####+:/@@@/:#####@@@@::---------         '>> p_racc.txt
	@printf "%s\n" '          /////----@@@##@@ @@@@#@##@@@ @@##@@@----/////          '>> p_racc.txt
	@printf "%s\n" '           +++@@@@@/@@##+++##@@@@@@@##+++##@@/@@@@@+++           '>> p_racc.txt
	@printf "%s\n" '            ++@@@@@@@@@####+++#@@@#+++####@@@@@@@@@++            '>> p_racc.txt
	@printf "%s\n" '           +++@@@@/++@@####@@@@@@@@@@@####@@++/@@@@+++           '>> p_racc.txt
	@printf "%s\n" '             :+@@@@//+++### @@ @/@ @@ ##++++//@@@@+:             '>> p_racc.txt
	@printf "%s\n" '                 @-@@@/+      #@+@-      //@@@'\''@                 '>> p_racc.txt
	@printf "%s\n" '                     @@       #####       @@                     '>> p_racc.txt
	@printf "%s\n" '                     '\'''\'' '\''    @@#@#@#    : '\'''\''                     '>> p_racc.txt
	@printf "%s\n" '                      +:::'\''/-@@@#@@@:/'\'':::/                      '>> p_racc.txt
	@printf "%s\n" '                        #-:::++@@@++:::-+                        '>> p_racc.txt
	@printf "%s\n" '                          @----::-----@                          '>> p_racc.txt
	@printf "%s\n" '                             '\''@@-@@                              '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '='>> p_racc.txt
	@printf "%s\n" ''>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '             @+                                   /-             '>> p_racc.txt
	@printf "%s\n" '               '\''-@@/ @  #@@@- @@ @@ /@@@# :@ +@@-'\''               '>> p_racc.txt
	@printf "%s\n" '              @@@:/@@@@@####@@@@@@@@@####@@@@@/:@@#              '>> p_racc.txt
	@printf "%s\n" '             /-#@@:-+@/@@#####@@@@@#####@@/@+-:@@+--             '>> p_racc.txt
	@printf "%s\n" '             /+@@@@+++++++###+++@+++###++++#++@@@@//             '>> p_racc.txt
	@printf "%s\n" '            @/@@@@@@++++++++##/////##++++++++@@@@@@/@            '>> p_racc.txt
	@printf "%s\n" '            -@@@@@ @+++++++++#@/#/@#+++++++++@ @@@@@             '>> p_racc.txt
	@printf "%s\n" '             /@@-@@@+++++########@#######++++@+@:@@/             '>> p_racc.txt
	@printf "%s\n" '             /+++@+###////@####@@@####@////###+#+++/             '>> p_racc.txt
	@printf "%s\n" '            :-++++++++++++++@#@@@@@#@++++++++++++++-:            '>> p_racc.txt
	@printf "%s\n" '            :-++##############+@@@+##############++-:            '>> p_racc.txt
	@printf "%s\n" '           ::+#+@@/@@@@  :###++##+++###:  @@@@/@@+#+::           '>> p_racc.txt
	@printf "%s\n" '          :--///            @@@ @ @@@           '\''///--:          '>> p_racc.txt
	@printf "%s\n" '          :/            /      -@: :    :           '\''/           '>> p_racc.txt
	@printf "%s\n" '         /::::'\'''\'''\'''\'''\'''\'''\'''\'''\'''\''    -   @   /    '\'''\'''\'''\'''\'''\'''\'''\'''\'''\'':::::         '>> p_racc.txt
	@printf "%s\n" '         ---------::@@@@#@###:/@@@/:###@#@@@@::---------         '>> p_racc.txt
	@printf "%s\n" '          /////----@@@##@@ @@@@#@##@@@ @@##@@@----/////          '>> p_racc.txt
	@printf "%s\n" '           +++@@@@@+@@##+++##@@@@@@###+++##@@#@@@@@+++           '>> p_racc.txt
	@printf "%s\n" '            ++@@@@@@@@@####+++#@@@#+++####@@@@@@@@@+/            '>> p_racc.txt
	@printf "%s\n" '           ++/@@@@/++@@####@@@@@@@@@@@###@@@+//@@@@/++           '>> p_racc.txt
	@printf "%s\n" '              +@@@@///+++## @@ @/@ @@ ##+++///@@@@+              '>> p_racc.txt
	@printf "%s\n" '                 @ @@@//      +@+@-      //@@@ @                 '>> p_racc.txt
	@printf "%s\n" '                     @@       ##@##       @@                     '>> p_racc.txt
	@printf "%s\n" '                     '\'''\'' '\''    @@@@@@@    : '\'''\''                     '>> p_racc.txt
	@printf "%s\n" '                      :-:::--@@@@@@@-:'\''::/                       '>> p_racc.txt
	@printf "%s\n" '                        :-:::++@@@++:::/                         '>> p_racc.txt
	@printf "%s\n" '                          @-----:-----@                          '>> p_racc.txt
	@printf "%s\n" '                              @@-@@                              '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '='>> p_racc.txt
	@printf "%s\n" ''>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '             @-:                                 '\''-@             '>> p_racc.txt
	@printf "%s\n" '               '\''-@@@ @# #@@@@ @@ #@ @@@@+ #@ @@@-'\''               '>> p_racc.txt
	@printf "%s\n" '           #  @@@:-@@@@@####@@@@@@@@@####@@@@@-:@@@  -           '>> p_racc.txt
	@printf "%s\n" '           @ /:@@@--+@/@@#####@@@@@#####@@/@+--@@@:/ @           '>> p_racc.txt
	@printf "%s\n" '           @ +@@@@@+++++++###+++@+++###+++++++@@@@#+ -           '>> p_racc.txt
	@printf "%s\n" '            @/@@@@@@++++++++#@/////@#++++++++@@@@@@/@            '>> p_racc.txt
	@printf "%s\n" '            /@@@@@ @+++++++++#@/#/@#+++++++++@ @@@@@/            '>> p_racc.txt
	@printf "%s\n" '             /@@:-#@++++#################++++@@#'\''@@/             '>> p_racc.txt
	@printf "%s\n" '             /+++@+###+///@####@@@####@///+###+@+++/             '>> p_racc.txt
	@printf "%s\n" '           ::-++++++++++++++@#@@@@@#@++++++++++++++-::           '>> p_racc.txt
	@printf "%s\n" '            :-++###########+##+@@@+##############++-:            '>> p_racc.txt
	@printf "%s\n" '           :-/#+@@/@@@@  :###+++#+++###'\''  @@@@/@@++/-:           '>> p_racc.txt
	@printf "%s\n" '         ::--///            @@@ @ @@@            ///--:          '>> p_racc.txt
	@printf "%s\n" '          -/            /      /@:      /            /-          '>> p_racc.txt
	@printf "%s\n" '         +::::'\'''\'''\'''\'''\'''\'''\'''\'''\''  '\''  -   @   /    '\'''\'''\'''\'''\'''\'''\'''\'''\'''\''::::+         '>> p_racc.txt
	@printf "%s\n" '        +---------::@@@@#@##+:/@@@/:###@#@@@@:::--------'\''        '>> p_racc.txt
	@printf "%s\n" '          /////----@@@##@@ @@@@#@##@@@ @@##@@@----/////          '>> p_racc.txt
	@printf "%s\n" '           +++@@@@@/@@##+++##@@@@@@@##+++##@@/@@@@@+++           '>> p_racc.txt
	@printf "%s\n" '            ++@@@@@@@@@####+++#@@@#+++####@@@@@@@@@++            '>> p_racc.txt
	@printf "%s\n" '           +++@@@#/++@@####@@@@@@@@@@@####@@++/@@@@+++           '>> p_racc.txt
	@printf "%s\n" '             /+@@@@//+++##+ @@ @/@ @@ ###+++//@@@@+/             '>> p_racc.txt
	@printf "%s\n" '                 @#@@@/+      #@+@/      +/@@@+@                 '>> p_racc.txt
	@printf "%s\n" '                     @@       #####       @@                     '>> p_racc.txt
	@printf "%s\n" '                    -'\'''\''      #@@@@@#    '\'' '\'''\''                     '>> p_racc.txt
	@printf "%s\n" '                      @:::'\''/-@@@@@@@:/'\'':::@                      '>> p_racc.txt
	@printf "%s\n" '                        @#:::++@@@++:::+@                        '>> p_racc.txt
	@printf "%s\n" '                          @----:::----@                          '>> p_racc.txt
	@printf "%s\n" '                             +@+-+@/                             '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '='>> p_racc.txt
	@printf "%s\n" ''>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                 :               '>> p_racc.txt
	@printf "%s\n" '             '\'' :                                 : '\''             '>> p_racc.txt
	@printf "%s\n" '           @  '\''@-@@@@@@# #@@@@@@-@@@@@@# @@@@@@@-+'\''  #           '>> p_racc.txt
	@printf "%s\n" '           / :@@+/:/@@@@@####@@@@@@@####@@@@@/:/#@@: +           '>> p_racc.txt
	@printf "%s\n" '           @ /-@@@--#@//@#####@#@+@#####@//@#--@@@-/ @           '>> p_racc.txt
	@printf "%s\n" '           '\'' /@@@@@++@+++++##+++@+++##+++++@++@@@@@/ /           '>> p_racc.txt
	@printf "%s\n" '           '\''-@@@@@@@++++++++#@+///+@#++++++++@@@@@@+/            '>> p_racc.txt
	@printf "%s\n" '            +@@@@@+@++++++++##@/#/@##++++++++@:@@@@@/            '>> p_racc.txt
	@printf "%s\n" '            //@:'\''#@++++########@#@########++++#+ /@/:            '>> p_racc.txt
	@printf "%s\n" '             ++++++###++//@@###@@@####@///+####+++++             '>> p_racc.txt
	@printf "%s\n" '           :-/+++++++++++++#@#@@@@@#@#+++++++++++++--:           '>> p_racc.txt
	@printf "%s\n" '           :-++#############+#+@@@+#+############+++:'\''           '>> p_racc.txt
	@printf "%s\n" '          :-+/+#@@/@@@+  '\''@##+++#+++##@   #@@@-@@#+/+-:          '>> p_racc.txt
	@printf "%s\n" '         ::-///-            @#@ @ @@@            -///-::         '>> p_racc.txt
	@printf "%s\n" '          //   '\''               -@-      :        '\''   //          '>> p_racc.txt
	@printf "%s\n" '         +:::'\'''\'''\'''\'''\'''\'''\'''\'''\'':  :-     @   : ::  :'\'''\'''\'''\'''\'''\'''\'''\''::::+         '>> p_racc.txt
	@printf "%s\n" '        ---------::/@@@+@###/:/@@@/:/###@+@@@-::---------        '>> p_racc.txt
	@printf "%s\n" '         /////----#@@@##@@ @@@#@@##@@@ @@##@@@+----/////         '>> p_racc.txt
	@printf "%s\n" '           ++#@@@@@@@+#++++#+@@@@@@@+#++++#+@@@@@@@#++           '>> p_racc.txt
	@printf "%s\n" '           ++@@@@@@@@@#####+++#@@@#+++#####@@@@@@@@@++           '>> p_racc.txt
	@printf "%s\n" '          ++/#@@@//++@@####@@@@@@@@@@@####@@++//@@@+/++          '>> p_racc.txt
	@printf "%s\n" '            ++@@@@///+++### @@ @/@ @@ ###+++///@@@@+/            '>> p_racc.txt
	@printf "%s\n" '                @-@@@//+      #@+@+      +//@@@:@                '>> p_racc.txt
	@printf "%s\n" '                    @@        #####       :@@                    '>> p_racc.txt
	@printf "%s\n" '                    #        +@@@@@+       '\''@                    '>> p_racc.txt
	@printf "%s\n" '                     -:::'\'': /@@@@@@@/ -'\'':::'\''                     '>> p_racc.txt
	@printf "%s\n" '                       #@::::+#@@@#+:::-@+                       '>> p_racc.txt
	@printf "%s\n" '                          +---+@+@+---@                          '>> p_racc.txt
	@printf "%s\n" '                           :@-------@                            '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '='>> p_racc.txt
	@printf "%s\n" ''>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                 @@              '>> p_racc.txt
	@printf "%s\n" '            '\''                                 @-:  -             '>> p_racc.txt
	@printf "%s\n" '          @@:                      @@@# @@-@@@-:/@  /            '>> p_racc.txt
	@printf "%s\n" '         @  '\''-@@@:+@@/:#@@@@@@@@@@@####@@@@@/:/@@-: @            '>> p_racc.txt
	@printf "%s\n" '           @/@::#@@@@@@####@@@@@@@####@@+/##--@@@++              '>> p_racc.txt
	@printf "%s\n" '           '\''#@@/:-+@/@@@####+@@@@+####++++@++@@@@@/:-            '>> p_racc.txt
	@printf "%s\n" '         @ +@@@@-/+++++++###++++++##++++++++@@@@@@@@@            '>> p_racc.txt
	@printf "%s\n" '          '\''/@@@@@@+++++++++###+####++++++++++@'\''@@@@#'\''            '>> p_racc.txt
	@printf "%s\n" '          @/@@@@@@+++++++++##@//+#######+++++@/- @//'\''            '>> p_racc.txt
	@printf "%s\n" '          /@@@@@:@+++++#######@#@######///+###+++++-             '>> p_racc.txt
	@printf "%s\n" '           //@::#++##+///@####@@@@@@+++++++++++++++--::          '>> p_racc.txt
	@printf "%s\n" '           -+++++++++++++++@#@@@@@#@@@++++########++::           '>> p_racc.txt
	@printf "%s\n" '         ::-+++++++++++#####++@@@+###+###- #@@@+@#+/++:          '>> p_racc.txt
	@printf "%s\n" '          :-++#######+-/####+++@@+++#@           -+++--:         '>> p_racc.txt
	@printf "%s\n" '         :-+/+#@@@         @@@@#@-@:@ :               //         '>> p_racc.txt
	@printf "%s\n" '        ::-/++              /   @'\''      -  '\''-  '\'''\'''\'''\'''\''::::/        '>> p_racc.txt
	@printf "%s\n" '         --    :    :   :       @ : :'\'''\'''\''/##/:@::::--------       '>> p_racc.txt
	@printf "%s\n" '        +'\'''\'''\'''\'''\'''\'':::-:::+####:::/#@@/:###@@@@@@@@@----/////        '>> p_racc.txt
	@printf "%s\n" '       /::---------@@@@@@@@@@##+@@+@@@@@@+##@@@-+@@@+++-         '>> p_racc.txt
	@printf "%s\n" '       ://///------@@##+#-/:@@@@@#@@+###++##@@@@@@@@@++          '>> p_racc.txt
	@printf "%s\n" '          ++++@@@@@+@@#####++++@@@@#++#####@@@++/@@@@+/-         '>> p_racc.txt
	@printf "%s\n" '           ++@@@@@@@@@@######+##@@@@@@@####+#@///@@@++/          '>> p_racc.txt
	@printf "%s\n" '           ++#@@@//++@#@####@@@@@#@ @@ ###+++/#@@@@#             '>> p_racc.txt
	@printf "%s\n" '           /++#@@@@///++++#  @'\'' @+@# +    +//@@+-                '>> p_racc.txt
	@printf "%s\n" '                @@@@@@//+      #####        @@:                  '>> p_racc.txt
	@printf "%s\n" '                     @@     :  @@@@@+     '\'' '\'''\''                   '>> p_racc.txt
	@printf "%s\n" '                     #'\''     '\'' @@@@@@@+  /'\''::@                    '>> p_racc.txt
	@printf "%s\n" '                       @::::::/@@@@#++:::+@                      '>> p_racc.txt
	@printf "%s\n" '                         @/::::+#@@#+:--/'\''                       '>> p_racc.txt
	@printf "%s\n" '                           /#----------@                         '>> p_racc.txt
	@printf "%s\n" '                                @@@@                             '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '='>> p_racc.txt
	@printf "%s\n" ''>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '           +/--:                                   :'\''+           '>> p_racc.txt
	@printf "%s\n" '          +   -/##-'\''--  +/-                       :-::/          '>> p_racc.txt
	@printf "%s\n" '          - :+#--#@@@@@@###@@@@@@@@@@@@@#+/#@@+@@#--:  :/        '>> p_racc.txt
	@printf "%s\n" '         -: :+@@+:-+@@@@@####@@@@@@@@#####@@@@@+/-/@@/ :#        '>> p_racc.txt
	@printf "%s\n" '         @ :+#@@@/-+#+/+#######@@@@@#####@@#+#+--+@@/-'\'':/        '>> p_racc.txt
	@printf "%s\n" '         #:-+@@@@@++++++++###+++##+++###++++#++/+@@@@+: -        '>> p_racc.txt
	@printf "%s\n" '          @#@@@@@@@+++++++++##//////##+++++++++@@@@@@+-//        '>> p_racc.txt
	@printf "%s\n" '          /#@@@@#-@+++++++++##@+++#@#++++++++++@#@@@@@@@         '>> p_racc.txt
	@printf "%s\n" '           /+@-+-+#+++++################+++++++@:@@@@@+:         '>> p_racc.txt
	@printf "%s\n" '          :/++++#+###++//+#####@@@###########+++#::++//          '>> p_racc.txt
	@printf "%s\n" '         ::-++++++++++++++++@@@@@@@@@#+++++++##++++++/-          '>> p_racc.txt
	@printf "%s\n" '          :-++########++++#@@#@@@@@#@@#++++++++++++++/-::        '>> p_racc.txt
	@printf "%s\n" '         ::-++@@#####++###++#++@@@++#++############++/::         '>> p_racc.txt
	@printf "%s\n" '       ::-///+@@#+:       @@++#@@@#++#@+   /##+/+@@#+/--:        '>> p_racc.txt
	@printf "%s\n" '       :----'\''              -@:@ @ @#@@           ://///-::       '>> p_racc.txt
	@printf "%s\n" '       +-'\''    '\'''\''   :'\''          :@'\''       '\''            ---:       '>> p_racc.txt
	@printf "%s\n" '      +::::::::::::'\'''\'''\'''\'''\'''\'''\''    '\'' @       :  ::'\''  '\''   '\'''\'''\'''\'':+       '>> p_racc.txt
	@printf "%s\n" '     /------------@@@@##@###::/@@@/::/####/-/#@:::-::-::::+      '>> p_racc.txt
	@printf "%s\n" '       //////----@@@@##@@ @@@#+@@#+#@@@/@@@@@@@#+--------/-      '>> p_racc.txt
	@printf "%s\n" '        /++#@@@@@/@@+#+++++#@@@#@@@@@/:-/+##+@@--///////+:       '>> p_racc.txt
	@printf "%s\n" '         ++@@@@@@@@@@#####+++#@@@@@#++######@@@@@@@@@@++         '>> p_racc.txt
	@printf "%s\n" '        +++#@@@//++@@@######+++@@+#+#######@@@###@@@@++          '>> p_racc.txt
	@printf "%s\n" '         /++#@@@///+++####@@@#@@@@@@@@####@#@#+//@@@#+/+/        '>> p_racc.txt
	@printf "%s\n" '             @@@@@@//+++#: :@ #@#@ @@ -##+++///@@@@@++/          '>> p_racc.txt
	@printf "%s\n" '                /-@@@/:       @++@:      ///@@@@##-              '>> p_racc.txt
	@printf "%s\n" '                  @@@'\''       +####+        @@@                   '>> p_racc.txt
	@printf "%s\n" '                   -'\'''\''      +@@@@@@+        '\''@                   '>> p_racc.txt
	@printf "%s\n" '                    :-::'\'':'\''/#@@@@@@#: '\'''\'''\''::+                     '>> p_racc.txt
	@printf "%s\n" '                      @@-:::++#@@#++::::@#                       '>> p_racc.txt
	@printf "%s\n" '                        @/--:/#@@#/:---@                         '>> p_racc.txt
	@printf "%s\n" '                          @+---------@                           '>> p_racc.txt
	@printf "%s\n" '                              :#+                                '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '='>> p_racc.txt
	@printf "%s\n" ''>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '          @ :                                       : @          '>> p_racc.txt
	@printf "%s\n" '        @+  :-+   @                           @   #--  #@        '>> p_racc.txt
	@printf "%s\n" '           :'\'':-@@@@@@@#/#@@@@@@@@@@@@@@##+#@@@@@@@-:'\'':           '>> p_racc.txt
	@printf "%s\n" '       :- :@@@/://@@@@@#####@@@@@@@@@#####@@@@@/--/@@@: #        '>> p_racc.txt
	@printf "%s\n" '       @  :-@@@---+@/+@@######@@@@@######@@+/@+---@@@-:  @       '>> p_racc.txt
	@printf "%s\n" '       @ '\''+@@@@@-/+#+++++####+++@+++####+++++++/-@@@@@+  @       '>> p_racc.txt
	@printf "%s\n" '        :/@@@@@@@#+++++++++##+//+//+##+++++++++@@@@@@@@--        '>> p_racc.txt
	@printf "%s\n" '        @@@@@@@@@+++++++++++#@#+#/#@#++++++++++#@@@@@@@@@        '>> p_racc.txt
	@printf "%s\n" '         /@@@@@ @+++++++++###@#///#@###+++++++++@ @@@@@/         '>> p_racc.txt
	@printf "%s\n" '         //@@ :@@++++##########@#@##########++++@+: @#//         '>> p_racc.txt
	@printf "%s\n" '         -++++#+#####////@@###@@@@####@@////#####+#++++-         '>> p_racc.txt
	@printf "%s\n" '       ::-++++++++++++++++#@@@@@@@@@@@+++++++++++++++++-::       '>> p_racc.txt
	@printf "%s\n" '        :-++###########++#@@@#@@@@@#@@@#++###########++-:        '>> p_racc.txt
	@printf "%s\n" '       :::++#@################+@@@++###############@+++:::       '>> p_racc.txt
	@printf "%s\n" '      :-+//++@@@@      :  @#++@@@@@++@@  :      @@@@++//+-:      '>> p_racc.txt
	@printf "%s\n" '      :--#+                @@@@ @ @@@@                #+--:      '>> p_racc.txt
	@printf "%s\n" '      //         :              @              :   '\''     //      '>> p_racc.txt
	@printf "%s\n" '     +:::'\'''\'''\'''\'''\'''\'''\'''\'''\'''\'''\'''\'':   - -    @    '\'' -'\''  :'\'''\'''\'''\'''\'''\'''\'''\'''\'''\'''\'''\'':::+     '>> p_racc.txt
	@printf "%s\n" '    -----:::-::::@@@::#@###:-::@@@/:-:###@+:-@@@::::-::::---+    '>> p_racc.txt
	@printf "%s\n" '    ////-------@@@@@@@@@#@@@##+@@@+##@@@#@@@@@@@@#-------///-    '>> p_racc.txt
	@printf "%s\n" '      ++///////--@@+##+/-#/ @@@#@#@@@ +#-++##+@@--///////++      '>> p_racc.txt
	@printf "%s\n" '       +++@@@@@@@@@@######+###@@@@@###+######@@@@@@@@@@+++       '>> p_racc.txt
	@printf "%s\n" '        ++@@@@@@+@@@@#######+##@@@##+#######@@@@+@@@@@@++        '>> p_racc.txt
	@printf "%s\n" '      +++/+@@@@//++@@@###@@@@@@@@@@@@@@@###@@@++//@@@@+/++-      '>> p_racc.txt
	@printf "%s\n" '         ++@@@@@///++++### @@/@@/@@@@@ ###++++///@@@@@++         '>> p_racc.txt
	@printf "%s\n" '            #@@@@@@//+ +#   @  @+@  @   ++ +//@@@@@@+            '>> p_racc.txt
	@printf "%s\n" '                 @@@+/        #+#+#        /#@@@                 '>> p_racc.txt
	@printf "%s\n" '                  #@@     '\''  +#@@@#+        @@@                  '>> p_racc.txt
	@printf "%s\n" '                  @'\'''\'''\''   '\''  +@@@@@@@+  :   '\'''\'''\''/                  '>> p_racc.txt
	@printf "%s\n" '                    @::::'\''+'\''+@@@@@@@/'\''+'\'':::-#                    '>> p_racc.txt
	@printf "%s\n" '                      @@-:::/+#@@@#+/:::-@@                      '>> p_racc.txt
	@printf "%s\n" '                        @/---:#@#@#:---+@                        '>> p_racc.txt
	@printf "%s\n" '                          @/---------/@                          '>> p_racc.txt
	@printf "%s\n" '                               @@#                               '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '='>> p_racc.txt
	@printf "%s\n" ''>> p_racc.txt
	@printf "%s\n" '    /#/'\'' --#+:  /-   /--::   '\''     :   ::---   :-  :+#-- :/#-    '>> p_racc.txt
	@printf "%s\n" '    +: '\'' :--+@@@+@@#+-#@@@@#/@#@-@#@/#@@@@#-+#@@+@@@/--: '\'' :+    '>> p_racc.txt
	@printf "%s\n" '    @-  @@@:::+@@@@@@@####@@@@@@@@@@@@@####@@@@@@@+:::#@@  -#    '>> p_racc.txt
	@printf "%s\n" '    /:'\''::@@@+-:-+@+@@@######@@@@@@@@######@@@@+@+-:-#@@#::'\'':-    '>> p_racc.txt
	@printf "%s\n" '    +/ /#+@@@/-/++#//+#@####+#@@@#@#+####@#+//@++/-+@@@+#/ /+    '>> p_racc.txt
	@printf "%s\n" '    #'\'' /#@@@@@#+++#+++++####++++@++++###++++++@+++#@@@@@#/ '\''+    '>> p_racc.txt
	@printf "%s\n" '     @-+@@@@@@@@++++++++++###///+///###++++++++++@@@@@@@@+-@     '>> p_racc.txt
	@printf "%s\n" '     /@@@@@@@@@@++++++++++++@##+#+#@#++++++++++++@@@@@@@@@@/     '>> p_racc.txt
	@printf "%s\n" '      /@@@@@@-:@++++++++++##@@#///#@@###+++++++++@'\''-@@@@@@/      '>> p_racc.txt
	@printf "%s\n" '      +//@/ --##+++++#######################+++++##// /@///      '>> p_racc.txt
	@printf "%s\n" '      /++++@/#++##++////#######@@@#######////+###++#/@+++//      '>> p_racc.txt
	@printf "%s\n" '     ::-+++++++++++++++++++@@@@@@@@@@@+++++++++++++++++++--:     '>> p_racc.txt
	@printf "%s\n" '    ::--+++++++++++++++++#@@@@@@@@@#@@@#+++++++++++++++++--::    '>> p_racc.txt
	@printf "%s\n" '     -:-+++###############+##+##@@++#+++##############+++-:/     '>> p_racc.txt
	@printf "%s\n" '    -::-++#@@/@@@@@:   #####++#@#@#++#####   /@@@@@/@@+++-::-    '>> p_racc.txt
	@printf "%s\n" '   ::-+///+@@@@@-        +@@@@@@@@@@@@@-        /@@@@@+///+-::   '>> p_racc.txt
	@printf "%s\n" '   ----+-           '\''      @ +@ @ @@ @      :           /#---:   '>> p_racc.txt
	@printf "%s\n" '   //-          -     /     :   @   /     :    :-          //:   '>> p_racc.txt
	@printf "%s\n" '  /+:::'\'''\'''\'''\'''\'''\'''\'''\'''\'''\'''\'''\'''\'':  :       :@        '\''  : '\'''\'''\'''\'''\'''\'''\'''\'''\'''\'''\'''\'':::+:  '>> p_racc.txt
	@printf "%s\n" '  --::::::-:::::@@-::@####:::::@@@:::::####@::/@@:::::-::::::--  '>> p_racc.txt
	@printf "%s\n" ' ////--------+@#@@@@@@@@@@@##-+@@@+/##@@@@@@@@@@@/@/-------////- '>> p_racc.txt
	@printf "%s\n" '    +///////---@@@@##+/@@@@@@@@#@#@@@@@@@@:+##@@@#---///////+    '>> p_racc.txt
	@printf "%s\n" '     +++@@@@@@@@@@@##++++###+@@@@@@@+###++++##@@@@@@@@@@@+++     '>> p_racc.txt
	@printf "%s\n" '      ++@@@@@@@@@@@@#####++++#+@@@+#++++#####@@@@@@@@@@@@++      '>> p_racc.txt
	@printf "%s\n" '     +/+#@@@@//+++@@@######@@@+#@+#@@@######@@@+++//@@@@#+/+     '>> p_racc.txt
	@printf "%s\n" '     ++++#@@@@///#++######@@@:@@@@@-@@@#####+++#///@@@@+++++     '>> p_racc.txt
	@printf "%s\n" '         #@@@@@@+//++++##/'\''@@ @@/@# @# /##++++//+@@@@@@#         '>> p_racc.txt
	@printf "%s\n" '            -+/@@@@//+  -     #++#/     :  +//@@@@/+:            '>> p_racc.txt
	@printf "%s\n" '                 @@@         -@###@'\''         @@#                 '>> p_racc.txt
	@printf "%s\n" '                 #:'\''      '\'' -@@@@@@@: '\''      '\'':#                 '>> p_racc.txt
	@printf "%s\n" '                 '\''#-'\'''\'''\'''\'''\'''\'''\''/@@@@@@@@@:'\'''\'''\'''\'''\'''\'''\''-#                  '>> p_racc.txt
	@printf "%s\n" '                   '\''#+-::::-+@@@@@@@+-::::/+#                    '>> p_racc.txt
	@printf "%s\n" '                     :#@-:::-+#@@@#+-:::-@#'\''                     '>> p_racc.txt
	@printf "%s\n" '                        @+----/////----+@                        '>> p_racc.txt
	@printf "%s\n" '                         -##++//-//++##-                         '>> p_racc.txt
	@printf "%s\n" '                              -+#+-                              '>> p_racc.txt
	@printf "%s\n" '='>> p_racc.txt
	@printf "%s\n" ''>> p_racc.txt
	@printf "%s\n" '-/--/@@@/--/+#@#############@@@@@@@@@#############@#+/--/@@@/--/-'>> p_racc.txt
	@printf "%s\n" '//+++#@@@+///++#+++########+####@###++########+++#++///+@@@#+++//'>> p_racc.txt
	@printf "%s\n" '//+@@@@@@@+//+#+++++++#####+++++@+++++####++++++++++//+@@@@@@@+//'>> p_racc.txt
	@printf "%s\n" '+##@@@@@@@@++++++++++++++###++++#++++###+++++++++++++#@@@@@@@@#++'>> p_racc.txt
	@printf "%s\n" '@#@@@@++@@##++++++++++++++####+++++####++++++++++++++#@@@+#@@@@#@'>> p_racc.txt
	@printf "%s\n" '@#@@@@##/+##+++++++++++########+++########+++++++++++##+/##@@@@#@'>> p_racc.txt
	@printf "%s\n" '+#+--+##+++#+++++++###########@################++++++#++####--+#+'>> p_racc.txt
	@printf "%s\n" '++/@+//++####++++++++#########@@@@@#########++++++++####++//+@//+'>> p_racc.txt
	@printf "%s\n" '++++++++++++++++++++++###@@@@@@@@@@@@#@####++++++++++++++++++++++'>> p_racc.txt
	@printf "%s\n" '++++++++++++++++++++++###@@@@@@@@@@@@@@@###++++++++++++++++++++++'>> p_racc.txt
	@printf "%s\n" '+########++++++++++++###@@@##@@@@@@@##@@@###++++++++++++########+'>> p_racc.txt
	@printf "%s\n" '+###########################++@@@@@++###########################+'>> p_racc.txt
	@printf "%s\n" '####@@@@@###+::::/########++++@@@@#+++#########/::::+#####@@@####'>> p_racc.txt
	@printf "%s\n" '###@@#:  :---::      @@@#+++###@@@###+++#@@@      ::---:  :#@@@##'>> p_racc.txt
	@printf "%s\n" '/--::'\''             '\''  -@@@@@@@:@@@:@@@@@@@:  '\''             '\''::--/'>> p_racc.txt
	@printf "%s\n" '                       :@+ @ + @@@ # #'\''#@                        '>> p_racc.txt
	@printf "%s\n" '                        ::    -:@ :    ::                        '>> p_racc.txt
	@printf "%s\n" ''\'''\'''\'''\''  '\'''\'':::'\''    '\'':'\''       '\''    #@-:   '\''       '\'':'\''    '\'':::'\''   '\'''\'''\'''\'''>> p_racc.txt
	@printf "%s\n" ''\'''\'''\'''\'''\'''\'''\'''\'' '\''::'\'''\''   '\'''\'''\'''\''  :'\''      @@@      '\'':  '\'':'\'''\''   '\'':::'\'' '\'''\'''\'''\'''\'''\'''\'''\'''>> p_racc.txt
	@printf "%s\n" ':::-----:::::-///-:'\'''\'''\'''\'''\'':'\'''\'''\''/'\''+@@@:'\''-'\'''\''::'\'''\'''\'''\''::-///::::::----::::'>> p_racc.txt
	@printf "%s\n" '::::/+#@@#+/--/+######+-::::/:@@@@@:/::::-+######+/--/+#@@#+-::::'>> p_racc.txt
	@printf "%s\n" '--//+#@@@@@@@@@@@@@@#####+/:/-@@@@@-/:/+####@@@@@@@@@@@@@@@#+//--'>> p_racc.txt
	@printf "%s\n" '/+##@@@@@@@@@#@@@+--/+@@@@##++@@@@@++##@@@@#/--+@@@#@@@@@@@@@#++/'>> p_racc.txt
	@printf "%s\n" '-/+##@@@@@#######@+@@@@@@##@#+#@@@#+@@@#@@@@@@+@#######@@@@@#++/-'>> p_racc.txt
	@printf "%s\n" '++++#@@@####++++++/////+#@@@@@#@@@#@@@@@#+//////+/+++####@@@#++++'>> p_racc.txt
	@printf "%s\n" '@@@@@@@@########++++######@@@@@@@@@@@@@######++++########@@@@@@@@'>> p_racc.txt
	@printf "%s\n" '@@@@@@@@@@#####+####++##+##@@@@@@@@@@###+##++####+####@@@@@@@@@@@'>> p_racc.txt
	@printf "%s\n" '@@@@@@@@@@@#########+++++++##@@@@@@@##+++++++#########@@@@@@@@@@@'>> p_racc.txt
	@printf "%s\n" '####@@@@@@@#############++####@@@@@+###++############@@@@@@@@####'>> p_racc.txt
	@printf "%s\n" '++++##@@@@@@##########@@#@@@###@@@##@@@##@@##########@@@@@@##++++'>> p_racc.txt
	@printf "%s\n" '/+++##@@@@#########@@@@@@@@@@@@@@@@@@@@@@@@@@@#########@@@@#++++/'>> p_racc.txt
	@printf "%s\n" '+/++#@#############@#@@@@@@#@@@@#@@@@+@@@@@@#@#############@#++/+'>> p_racc.txt
	@printf "%s\n" '++++++++++++#######+-##@@@#-@@@@+@@@#-@@@@#+-+#######++++++++++++'>> p_racc.txt
	@printf "%s\n" '#+++++++++++++####/'\'':-/@@@  +@@@/@@@/  @@@/-::/####+++++++++++++#'>> p_racc.txt
	@printf "%s\n" '@###+++++++////++/'\''   -#@/  /@@+/#@@-  +@#:   :/++////+++++++###@'>> p_racc.txt
	@printf "%s\n" '@@@###+++///-----'\''    :#/  :/@@+++@@-'\''  ++'\''    '\''-----///+++###@@@'>> p_racc.txt
	@printf "%s\n" '='>> p_racc.txt
	@printf "%s\n" ''>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                             :+///+:                             '>> p_racc.txt
	@printf "%s\n" '                            :+++@+++:                            '>> p_racc.txt
	@printf "%s\n" '                           ---++@++---                           '>> p_racc.txt
	@printf "%s\n" '                          '\''#@##+@+##@#'\''                          '>> p_racc.txt
	@printf "%s\n" '                           /+#'\'''\''#'\'''\''#+/                           '>> p_racc.txt
	@printf "%s\n" '                            /::+@+::/                            '>> p_racc.txt
	@printf "%s\n" '                            :/-+#+-/:                            '>> p_racc.txt
	@printf "%s\n" '                             /-/+/-/                             '>> p_racc.txt
	@printf "%s\n" '                             ://///:                             '>> p_racc.txt
	@printf "%s\n" '                               -/-                               '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '='>> p_racc.txt
	@printf "%s\n" ''>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '                                                                 '>> p_racc.txt
	@printf "%s\n" '='>> p_racc.txt
	@chmod 777 p_racc.txt
	@sleep 0.25
	@printf "$(BLACK)"



build_cora:
	@printf "$(NEOR) Building cora... $(RESET)"
	@printf "$(MINT)🦝\n\n"
	@> cora
	@printf "%s\n" ''>> cora
	@printf "%s\n" ''>> cora
	@printf "%s\n" ''>> cora
	@printf "%s\n" '		       ##################'>> cora
	@printf "%s\n" '		        ###############'>> cora
	@printf "%s\n" '		         ############'>> cora
	@printf "%s\n" '		         '>> cora
	@printf "%s\n" '		         '>> cora
	@printf "%s\n" '		         '>> cora
	@chmod 777 cora
	@sleep 0.25
	@printf "$(BLACK)"



build_corb:
	@printf "$(NEOR) Building corb... $(RESET)"
	@printf "$(MINT)🦝\n\n"
	@> corb
	@printf "%s\n" '			#####		####'>> corb
	@printf "%s\n" '		      ########        #######'>> corb
	@printf "%s\n" '		     ##########      ########'>> corb
	@printf "%s\n" '		          #########'>> corb
	@printf "%s\n" '		           ######'>> corb
	@printf "%s\n" '		            ###'>> corb
	@chmod 777 corb
	@sleep 0.25
	@printf "$(BLACK)"



build_corc:
	@printf "$(NEOR) Building corc... $(RESET)"
	@printf "$(MINT)🦝\n\n"
	@> corc
	@printf "%s\n" '		     ###########   ##########'>> corc
	@printf "%s\n" '		     ############ ##########'>> corc
	@printf "%s\n" '		      #####################'>> corc
	@printf "%s\n" '		     #      #'>> corc
	@printf "%s\n" '		      ##   #'>> corc
	@printf "%s\n" '		        ### '>> corc
	@chmod 777 corc
	@sleep 0.25
	@printf "$(BLACK)"

