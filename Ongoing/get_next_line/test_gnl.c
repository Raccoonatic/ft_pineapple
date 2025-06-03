/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_gnl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 14:21:21 by lde-san-          #+#    #+#             */
/*   Updated: 2025/06/03 15:35:07 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

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
	int fd;

	if (arc == 1)
	{
		printf("\n" B_WI "Wordy options:\n\n" RSET);
		printf("\t" MINT "for stdin_mandatory\t" RSET LIME "--> " RSET NEOR "0\n" RSET);
		printf("\t" MINT "for chosenfd_mandatory\t" RSET LIME "--> " RSET NEOR "chosenfd\n" RSET);
		printf("\t" MINT "for stdin_bonus\t\t" RSET LIME "--> " RSET NEOR "b 0\n" RSET);
		printf("\t" MINT "for chosenfd_bonus\t" RSET LIME "--> " RSET NEOR "b chosenfd\n\n" RSET);
		return (1);
	}
	if (wordy[1][0] == '0')
	{
		fd = 0;
	}
	else
		fd = open(wordy[1], O_RDONLY);
	
	if (fd < 0)
	{
		printf("Algo no esta piolando papa");
		printf("note: file names can't start with a b");
		return (1);
	}
	while ((line = get_next_line(fd)) != NULL)
	{
		line = get_next_line(fd);
		printf("%s", line);
		free(line);
	}
	close(fd);

///// PARROT TIME BABY! //////

	if (wordy[1][0] == 'p')
	{
		loops = 0;
		system("clear");
		while(loops < 20)
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
				printf(MINT"%s", line);
				free(line);
			}
			close(fd);
			loops++;
		}
	}
	return (0);
}
