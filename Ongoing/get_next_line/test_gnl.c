/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_gnl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 14:21:21 by lde-san-          #+#    #+#             */
/*   Updated: 2025/06/03 00:50:11 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int main(int arc, char *wordy[])
{
	char *line;
	int	frames;
	int	loops;

	(void)arc;
	int fd = open(wordy[1], O_RDONLY);
	
	if (fd < 0)
	{
		printf("Algo no esta piolando papa");
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
				printf("%s", line);
				free(line);
			}
			close(fd);
			loops++;
		}
	}
	return (0);
}
