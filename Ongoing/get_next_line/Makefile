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

all: files

files: create_test_gnl


create_test_gnl:
	@echo 'Creating test_gnl.c...'
	@echo '/* ************************************************************************** */'
	@echo '/*                                                                            */'
	@echo '/*                                                        :::      ::::::::   */'
	@echo '/*   test_gnl.c                                         :+:      :+:    :+:   */'
	@echo '/*                                                    +:+ +:+         +:+     */'
	@echo '/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */'
	@echo '/*                                                +#+#+#+#+#+   +#+           */'
	@echo '/*   Created: 2025/05/31 14:21:21 by lde-san-          #+#    #+#             */'
	@echo '/*   Updated: 2025/06/07 09:18:52 by lde-san-         ###   ########.fr       */'
	@echo '/*                                                                            */'
	@echo '/* ************************************************************************** */'
	@echo '/* ************************************************************************** */'>> test_gnl.c
	@echo '/*                                                                            */'>> test_gnl.c
	@echo '/*                                                        :::      ::::::::   */'>> test_gnl.c
	@echo '/*   test_gnl.c                                         :+:      :+:    :+:   */'>> test_gnl.c
	@echo '/*                                                    +:+ +:+         +:+     */'>> test_gnl.c
	@echo '/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */'>> test_gnl.c
	@echo '/*                                                +#+#+#+#+#+   +#+           */'>> test_gnl.c
	@echo '/*   Created: 2025/05/31 14:21:21 by lde-san-          #+#    #+#             */'>> test_gnl.c
	@echo '/*   Updated: 2025/06/07 09:18:52 by lde-san-         ###   ########.fr       */'>> test_gnl.c
	@echo '/*                                                                            */'>> test_gnl.c
	@echo '/* ************************************************************************** */'>> test_gnl.c
	@echo ''>> test_gnl.c
	@echo '#include <stdio.h>'>> test_gnl.c
	@echo '#include "get_next_line_bonus.h"'>> test_gnl.c
	@echo ''>> test_gnl.c
	@echo '#define RSET	"'\\'033[0m"'>> test_gnl.c
	@echo '#define B_WI    "'\\'033[1;37m"'>> test_gnl.c
	@echo '#define MINT	"'\\'033[38;2;55;250;133;48;2;0;0;0m"'>> test_gnl.c
	@echo '#define LIME	"'\\'033[38;2;0;255;0m"'>> test_gnl.c
	@echo '#define NEOR	"'\\'033[3m'\\'033[38;2;255;153;51m"'>> test_gnl.c
	@echo ''>> test_gnl.c
	@echo 'int main(int arc, char *wordy[])'>> test_gnl.c
	@echo '{'>> test_gnl.c
	@echo '	char *line;'>> test_gnl.c
	@echo '	int	frames;'>> test_gnl.c
	@echo '	int	loops;'>> test_gnl.c
	@echo '	int     guide;'>> test_gnl.c
	@echo '	int fd;'>> test_gnl.c
	@echo '	int *fdeez;'>> test_gnl.c
	@echo '	int total_fds;'>> test_gnl.c
	@echo '	int lines_from_each;'>> test_gnl.c
	@echo '	int nulos;'>> test_gnl.c
	@echo ''>> test_gnl.c
	@echo '	if (arc == 1)'>> test_gnl.c
	@echo '	{'>> test_gnl.c
	@echo '		printf("'\\'n" B_WI "Wordy options:'\\'n'\\'n" RSET);'>> test_gnl.c
	@echo '		printf("'\\'t" MINT "for stdin_mandatory'\\'t" RSET LIME "--> " RSET NEOR "0'\\'n" RSET);'>> test_gnl.c
	@echo '		printf("'\\'t" MINT "for chosenfd_mandatory'\\'t" RSET LIME "--> " RSET NEOR "chosenfd'\\'n" RSET);'>> test_gnl.c
	@echo '		printf("'\\'t" MINT "for chosenfd_bonus'\\'t" RSET LIME "--> " RSET NEOR "B chosenfd_1 chosenfd_2 chosenfd_... lines_from_each'\\'n'\\'n" RSET);'>> test_gnl.c
	@echo '		printf(NEOR "note: file names can'\''t start with '\''B'\'' or '\''0'\'''\\'n" RSET);'>> test_gnl.c
	@echo '		return (1);'>> test_gnl.c
	@echo '	}'>> test_gnl.c
	@echo '	'>> test_gnl.c
	@echo '	if (wordy[1][0] == '\''B'\'' && arc != 2)'>> test_gnl.c
	@echo '	{'>> test_gnl.c
	@echo '	        if (arc < 4)'>> test_gnl.c
	@echo '	        {'>> test_gnl.c
	@echo '	                  printf("'\\'n" B_WI "Wordy options:'\\'n'\\'n" RSET);'>> test_gnl.c
	@echo '	                  printf("'\\'t" MINT "for chosenfd_bonus'\\'t" RSET LIME "--> " RSET NEOR "B chosenfd_1 chosenfd_2 chosenfd_... lines_from_each'\\'n'\\'n" RSET);'>> test_gnl.c
	@echo '		          return(printf("'\\'t" MINT "Bonus requires multiple fds, '\\'n'\\'tand last argument must be an '\\'n'\\'tunsigned int. Not" B_WI " '\''%s'\'''\\'n" RSET, wordy[arc - 1]), 1);'>> test_gnl.c
	@echo '	        }'>> test_gnl.c
	@echo '	        lines_from_each = atoi(wordy[arc - 1]);'>> test_gnl.c
	@echo '	        total_fds = arc - 3;'>> test_gnl.c
	@echo '	        if (lines_from_each < 1)'>> test_gnl.c
	@echo '	                  return(printf("'\\'t" MINT "For Bonus, last argument must be an unsigned int. Not" B_WI " '\''%s'\'''\\'n" RSET, wordy[arc - 1]), 1);'>> test_gnl.c
	@echo '	        '>> test_gnl.c
	@echo '////////////////// BONUS ///////////////////			'>> test_gnl.c
	@echo '			fdeez = malloc(total_fds * sizeof(int));'>> test_gnl.c
	@echo '			if(!fdeez)'>> test_gnl.c
	@echo '				return (printf(MINT "Algo no esta piolando papa'\\'n" RSET), 1);'>> test_gnl.c
	@echo '			guide = 0;'>> test_gnl.c
	@echo '			while (guide < total_fds)'>> test_gnl.c
	@echo '			{'>> test_gnl.c
	@echo '				if (wordy[guide + 2][0] == '\''0'\'')'>> test_gnl.c
	@echo '					fd = 0;'>> test_gnl.c
	@echo '				else'>> test_gnl.c
	@echo '					fd = open(wordy[guide + 2], O_RDONLY);'>> test_gnl.c
	@echo '				if(fd < 0)'>> test_gnl.c
	@echo '					return (printf(MINT "Algo no esta piolando papa'\\'n" RSET), 1);'>> test_gnl.c
	@echo '				fdeez[guide] = fd;'>> test_gnl.c
	@echo '				guide++;'>> test_gnl.c
	@echo '			}'>> test_gnl.c
	@echo '			nulos = 0;'>> test_gnl.c
	@echo '			while (nulos < total_fds)'>> test_gnl.c
	@echo '			{'>> test_gnl.c
	@echo '				fd = 0;'>> test_gnl.c
	@echo '				guide = 0;'>> test_gnl.c
	@echo '				while (fd < total_fds)'>> test_gnl.c
	@echo '				{'>> test_gnl.c
	@echo '					while (guide < lines_from_each && ((line = get_next_line(fdeez[fd])) != NULL))'>> test_gnl.c
	@echo '					{'>> test_gnl.c
	@echo '						printf("%s", line);'>> test_gnl.c
	@echo '						free(line);'>> test_gnl.c
	@echo '						guide++;'>> test_gnl.c
	@echo '					}'>> test_gnl.c
	@echo '					guide = 0;'>> test_gnl.c
	@echo '					fd++;'>> test_gnl.c
	@echo '				}'>> test_gnl.c
	@echo '				if (!line)'>> test_gnl.c
	@echo '					nulos++;'>> test_gnl.c
	@echo '			}'>> test_gnl.c
	@echo '			fd = 0;'>> test_gnl.c
	@echo '			while (fd < total_fds)'>> test_gnl.c
	@echo '			{'>> test_gnl.c
	@echo '				if (fdeez[fd] == 0)'>> test_gnl.c
	@echo '				{'>> test_gnl.c
	@echo '					fd++;'>> test_gnl.c
	@echo '					continue;'>> test_gnl.c
	@echo '				}'>> test_gnl.c
	@echo '				close(fdeez[fd]);'>> test_gnl.c
	@echo '				fd++;'>> test_gnl.c
	@echo '			}'>> test_gnl.c
	@echo '			free(fdeez);'>> test_gnl.c
	@echo '	        return(0);'>> test_gnl.c
	@echo '	}'>> test_gnl.c
	@echo '///////////////// Mandatory ////////////////'>> test_gnl.c
	@echo '	if (wordy[1][0] == '\''0'\'')'>> test_gnl.c
	@echo '	{'>> test_gnl.c
	@echo '		fd = 0;'>> test_gnl.c
	@echo '	}'>> test_gnl.c
	@echo '	else'>> test_gnl.c
	@echo '		fd = open(wordy[1], O_RDONLY);'>> test_gnl.c
	@echo '	'>> test_gnl.c
	@echo '	if (fd < 0)'>> test_gnl.c
	@echo '	{'>> test_gnl.c
	@echo '		printf(MINT "Algo no esta piolando papa'\\'n" RSET);'>> test_gnl.c
	@echo '		printf(NEOR "note: file names can'\''t start with '\''B'\'' or '\''0'\''" RSET);'>> test_gnl.c
	@echo '		return (1);'>> test_gnl.c
	@echo '	}'>> test_gnl.c
	@echo '	while ((line = get_next_line(fd)) != NULL)'>> test_gnl.c
	@echo '	{'>> test_gnl.c
	@echo '		printf("%s", line);'>> test_gnl.c
	@echo '		free(line);'>> test_gnl.c
	@echo '	}'>> test_gnl.c
	@echo '	close(fd);'>> test_gnl.c
	@echo ''>> test_gnl.c
	@echo '///// PARROT TIME BABY! //////'>> test_gnl.c
	@echo ''>> test_gnl.c
	@echo '	if (wordy[1][0] == '\''p'\'')'>> test_gnl.c
	@echo '	{'>> test_gnl.c
	@echo '	        if (wordy[1][1] == '\''a'\'')'>> test_gnl.c
	@echo '		        loops = 0;'>> test_gnl.c
	@echo '		else'>> test_gnl.c
	@echo '		        loops = 5;'>> test_gnl.c
	@echo '		system("clear");'>> test_gnl.c
	@echo '		while(loops < 10)'>> test_gnl.c
	@echo '		{'>> test_gnl.c
	@echo '			frames = 0;'>> test_gnl.c
	@echo '			if (wordy[1][1] == '\''a'\'')'>> test_gnl.c
	@echo '				frames += 16;'>> test_gnl.c
	@echo '			fd = open(wordy[1], O_RDONLY);'>> test_gnl.c
	@echo '			while (((line = get_next_line(fd)) != NULL) && frames < 26)'>> test_gnl.c
	@echo '			{'>> test_gnl.c
	@echo '				if (line[0] == '\''='\'')'>> test_gnl.c
	@echo '				{'>> test_gnl.c
	@echo '					frames++;'>> test_gnl.c
	@echo '					usleep(70000);'>> test_gnl.c
	@echo '					system("clear");'>> test_gnl.c
	@echo '					continue ;'>> test_gnl.c
	@echo '				}'>> test_gnl.c
	@echo '				if (wordy[1][1] == '\''a'\'')'>> test_gnl.c
	@echo '				        printf(MINT "%s" RSET, line);'>> test_gnl.c
	@echo '				else'>> test_gnl.c
	@echo '				        printf(B_WI "%s" RSET, line);'>> test_gnl.c
	@echo '				free(line);'>> test_gnl.c
	@echo '			}'>> test_gnl.c
	@echo '			close(fd);'>> test_gnl.c
	@echo '			loops++;'>> test_gnl.c
	@echo '		}'>> test_gnl.c
	@echo '	}'>> test_gnl.c
	@echo '	if (wordy[1][0] == '\''p'\'' && wordy[1][1] == '\''_'\'')'>> test_gnl.c
	@echo '	{'>> test_gnl.c
	@echo '		loops = 0;'>> test_gnl.c
	@echo '		system("clear");'>> test_gnl.c
	@echo '		while(loops < 3)'>> test_gnl.c
	@echo '		{'>> test_gnl.c
	@echo '			frames = 0;'>> test_gnl.c
	@echo '			fd = open(wordy[1], O_RDONLY);'>> test_gnl.c
	@echo '			while (((line = get_next_line(fd)) != NULL) && frames < 26)'>> test_gnl.c
	@echo '			{'>> test_gnl.c
	@echo '			        guide = 0;'>> test_gnl.c
	@echo '				if (line[0] == '\''='\'')'>> test_gnl.c
	@echo '				{'>> test_gnl.c
	@echo '					frames++;'>> test_gnl.c
	@echo '					usleep(70000);'>> test_gnl.c
	@echo '					system("clear");'>> test_gnl.c
	@echo '					continue ;'>> test_gnl.c
	@echo '				}'>> test_gnl.c
	@echo '                                while (line[guide])'>> test_gnl.c
	@echo '                                {'>> test_gnl.c
	@echo '	                                if (line[guide] == '\''@'\'')'>> test_gnl.c
	@echo '		                                write(1, " ", 1);'>> test_gnl.c
	@echo '	                                else if (line[guide] == '\''#'\'')'>> test_gnl.c
	@echo '		                                write(1, ",", 1);'>> test_gnl.c
	@echo '	                                else if (line[guide] == '\''+'\'')'>> test_gnl.c
	@echo '		                                write(1, "'\''", 1);'>> test_gnl.c
	@echo '	                                else if (line[guide] == '\''/'\'')'>> test_gnl.c
	@echo '		                                write(1, "-", 1);'>> test_gnl.c
	@echo '	                                else if (line[guide] == '\'':'\'')'>> test_gnl.c
	@echo '		                                write(1, ":", 1);'>> test_gnl.c
	@echo '	                                else if (line[guide] == '\''-'\'')'>> test_gnl.c
	@echo '		                                write(1, "/", 1);'>> test_gnl.c
	@echo '	                                else if (line[guide] == '\'''\\''\'''\'')'>> test_gnl.c
	@echo '		                                write(1, "+", 1);'>> test_gnl.c
	@echo '	                                else if (line[guide] == '\'','\'')'>> test_gnl.c
	@echo '		                                write(1, "#", 1);'>> test_gnl.c
	@echo '	                                else if (line[guide] == '\'' '\'')'>> test_gnl.c
	@echo '		                                write(1, "@", 1);'>> test_gnl.c
	@echo '	                                else'>> test_gnl.c
	@echo '		                                write(1, &line[guide], 1); // Keep unchanged chars'>> test_gnl.c
	@echo '	                                guide++;'>> test_gnl.c
	@echo '                                }'>> test_gnl.c
	@echo '				free(line);'>> test_gnl.c
	@echo '			}'>> test_gnl.c
	@echo '			close(fd);'>> test_gnl.c
	@echo '			loops++;'>> test_gnl.c
	@echo '		}'>> test_gnl.c
	@echo '	}'>> test_gnl.c
	@echo '	return (0);'>> test_gnl.c
	@echo '}'>> test_gnl.c

