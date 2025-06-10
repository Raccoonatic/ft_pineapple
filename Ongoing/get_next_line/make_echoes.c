/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_echoes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 15:18:45 by lde-san-          #+#    #+#             */
/*   Updated: 2025/06/08 15:38:56 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <stdio.h>

int main( int arc, char **wordy)
{
	int fd;
	char *line;
	int guide;

	fd = open(wordy[1], O_RDONLY);
	
	(void)arc;
	while((line = get_next_line(fd)) != NULL)
	{	
		guide = 0;
		write(1, "@echo \'", 7);
		while(line[guide])
		{
		        if (line[guide] == '\n')
		                break ;
			if (line[guide] == 39)
				write(1, "\'\\\'", 4);
			if (line[guide] == 92)
				write(1, "\'\\\\\'", 4);
			else
				write(1, &line[guide], 1);
			guide++;
		}
		free(line);
		guide = 0;
		write(1, "'>> ", 4);
		while (wordy[1][guide])
			write(1, &wordy[1][guide++], 1);
	        write(1, "\n", 1);		
	}
	close(fd);
	return(0);
}

