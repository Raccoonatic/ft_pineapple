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

SHELL := /bin/bash

all:
	cat << 'EOF' > test_gnl
	/* ************************************************************************** */
	/*                                                                            */
	/*                                                        :::      ::::::::   */
	/*   test_gnl.c                                         :+:      :+:    :+:   */
	/*                                                    +:+ +:+         +:+     */
	/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
	/*                                                +#+#+#+#+#+   +#+           */
	/*   Created: 2025/05/31 14:21:21 by lde-san-          #+#    #+#             */
	/*   Updated: 2025/06/07 09:18:52 by lde-san-         ###   ########.fr       */
	/*                                                                            */
	/* ************************************************************************** */

	#include <stdio.h>
	#include "get_next_line_bonus.h"

	#define RSET	"\033[0m"
	#define B_WI    "\033[1;37m"
	#define MINT	"\033[38;2;55;250;133;48;2;0;0;0m"
	#define LIME	"\033[38;2;0;255;0m"
	#define NEOR	"\033[3m\033[38;2;255;153;51m"

	int main(int arc, char *wordy[])
	{
		char *line;
		int	frames;
		int	loops;
		int     guide;
		int fd;
		int *fdeez;
		int total_fds;
		int lines_from_each;
		int nulos;

		if (arc == 1)
		{
			printf("\n" B_WI "Wordy options:\n\n" RSET);
			printf("\t" MINT "for stdin_mandatory\t" RSET LIME "--> " RSET NEOR "0\n" RSET);
			printf("\t" MINT "for chosenfd_mandatory\t" RSET LIME "--> " RSET NEOR "chosenfd\n" RSET);
			printf("\t" MINT "for chosenfd_bonus\t" RSET LIME "--> " RSET NEOR "B chosenfd_1 chosenfd_2 chosenfd_... lines_from_each\n\n" RSET);
			printf(NEOR "note: file names can't start with 'B' or '0'\n" RSET);
			return (1);
		}
		
		if (wordy[1][0] == 'B' && arc != 2)
		{
			if (arc < 4)
			{
			          printf("\n" B_WI "Wordy options:\n\n" RSET);
			          printf("\t" MINT "for chosenfd_bonus\t" RSET LIME "--> " RSET NEOR "B chosenfd_1 chosenfd_2 chosenfd_... lines_from_each\n\n" RSET);
				  return(printf("\t" MINT "Bonus requires multiple fds, \n\tand last argument must be an \n\tunsigned int. Not" B_WI " '%s'\n" RSET, wordy[arc - 1]), 1);
			}
			lines_from_each = atoi(wordy[arc - 1]);
			total_fds = arc - 3;
			if (lines_from_each < 1)
			          return(printf("\t" MINT "For Bonus, last argument must be an unsigned int. Not" B_WI " '%s'\n" RSET, wordy[arc - 1]), 1);
			
	////////////////// BONUS ///////////////////			
				fdeez = malloc(total_fds * sizeof(int));
				if(!fdeez)
					return (printf(MINT "Algo no esta piolando papa\n" RSET), 1);
				guide = 0;
				while (guide < total_fds)
				{
					if (wordy[guide + 2][0] == '0')
						fd = 0;
					else
						fd = open(wordy[guide + 2], O_RDONLY);
					if(fd < 0)
						return (printf(MINT "Algo no esta piolando papa\n" RSET), 1);
					fdeez[guide] = fd;
					guide++;
				}
				nulos = 0;
				while (nulos < total_fds)
				{
					fd = 0;
					guide = 0;
					while (fd < total_fds)
					{
						while (guide < lines_from_each && ((line = get_next_line(fdeez[fd])) != NULL))
						{
							printf("%s", line);
							free(line);
							guide++;
							if (!line)
								nulos++;
						}
						guide = 0;
						fd++;
					}
					if (!line)
						nulos++;
				}
				fd = 0;
				while (fd < total_fds)
				{
					if (fdeez[fd] == 0)
					{
						fd++;
						continue;
					}
					close(fdeez[fd]);
					fd++;
				}
				free(fdeez);
			return(0);
		}
	///////////////// Mandatory ////////////////
		if (wordy[1][0] == '0')
		{
			fd = 0;
		}
		else
			fd = open(wordy[1], O_RDONLY);
		
		if (fd < 0)
		{
			printf(MINT "Algo no esta piolando papa\n" RSET);
			printf(NEOR "note: file names can't start with 'B' or '0'" RSET);
			return (1);
		}
		while ((line = get_next_line(fd)) != NULL)
		{
			printf("%s", line);
			free(line);
		}
		close(fd);

	///// PARROT TIME BABY! //////

		if (wordy[1][0] == 'p')
		{
			if (wordy[1][1] == 'a')
				loops = 0;
			else
				loops = 5;
			system("clear");
			while(loops < 10)
			{
				frames = 0;
				if (wordy[1][1] == 'a')
					frames += 16;
				fd = open(wordy[1], O_RDONLY);
				while (((line = get_next_line(fd)) != NULL) && frames < 26)
				{
					if (line[0] == '=')
					{
						frames++;
						usleep(70000);
						system("clear");
						continue ;
					}
					if (wordy[1][1] == 'a')
						printf(MINT "%s" RSET, line);
					else
						printf(B_WI "%s" RSET, line);
					free(line);
				}
				close(fd);
				loops++;
			}
		}
		if (wordy[1][0] == 'p' && wordy[1][1] == '_')
		{
			loops = 0;
			system("clear");
			while(loops < 3)
			{
				frames = 0;
				fd = open(wordy[1], O_RDONLY);
				while (((line = get_next_line(fd)) != NULL) && frames < 26)
				{
					guide = 0;
					if (line[0] == '=')
					{
						frames++;
						usleep(70000);
						system("clear");
						continue ;
					}
		                        while (line[guide])
		                        {
			                        if (line[guide] == '@')
				                        write(1, " ", 1);
			                        else if (line[guide] == '#')
				                        write(1, ",", 1);
			                        else if (line[guide] == '+')
				                        write(1, "'", 1);
			                        else if (line[guide] == '/')
				                        write(1, "-", 1);
			                        else if (line[guide] == ':')
				                        write(1, ":", 1);
			                        else if (line[guide] == '-')
				                        write(1, "/", 1);
			                        else if (line[guide] == '\'')
				                        write(1, "+", 1);
			                        else if (line[guide] == ',')
				                        write(1, "#", 1);
			                        else if (line[guide] == ' ')
				                        write(1, "@", 1);
			                        else
				                        write(1, &line[guide], 1); // Keep unchanged chars
			                        guide++;
		                        }
					free(line);
				}
				close(fd);
				loops++;
			}
		}
		return (0);
	}
	EOF
