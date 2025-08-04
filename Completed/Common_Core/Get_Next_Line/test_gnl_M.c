/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_gnl_M.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 14:21:21 by lde-san-          #+#    #+#             */
/*   Updated: 2025/06/07 09:18:52 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line.h"

#define RSET	"\033[0m"
#define B_WI    "\033[1;37m"
#define LIME	"\033[38;2;0;255;0m"
#define BLOD	"\033[1;38;2;255;0;0m"
#define NEOR	"\033[3m\033[38;2;255;153;51m"
#define MINT	"\033[38;2;55;250;133;48;2;0;0;0m"

int main(int arc, char *wordy[])
{
	char *line;
	int	frames;
	int	loops;
	int     guide;
	int fd;

	if (arc == 1)
	{
		printf("\n" B_WI "Wordy options:\n\n" RSET);
		printf("\t" MINT "for stdin_mandatory\t" RSET LIME "--> " RSET NEOR "0\n" RSET);
		printf("\t" MINT "for chosenfd_mandatory\t" RSET LIME "--> " RSET NEOR "chosenfd\n" RSET);
		printf(NEOR "note: file names can't start with '0'\n" RSET);
		return (1);
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
		if (!get_next_line(fd))
			printf(LIME "\nget_next_line returned NULL 👍\n\n" RSET);
		else
			printf(BLOD "\nget_next_line didn't return NULL 👎\n\n" RSET);
		printf(MINT "\tAlgo no esta piolando papa\n" RSET);
		printf(NEOR "\tnote: file names can't start with 'B' or '0'\n\n" RSET);
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
