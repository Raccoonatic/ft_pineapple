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

#define RSET	"\033[0m"
#define B_WI    "\033[1;37m"
#define BABY	"\033[38;2;0;255;247m"
#define MINT	"\033[38;2;55;250;133m"

/*TLDR; This program requires the get_next_line_bonus function. It uses it to read
each line from the selected file so it can be printed while simultaneously formated
in a way that the file can be converted into a makefile rule. The result of running
this program with the name of a file present in the directory, should be an output 
on the terminal that can be copy and pasted into the desired makefile. Enjoy <3*/

size_t str_len(char *str)
{
	size_t guide;
	
	guide = 0;
	
	if (!str)
		return (0);
	while(str[guide])
	{
		guide++;
	}
	return(guide);
}

int compare(char *s1, char *s2)
{
	size_t guide;
	
	if (!s1 || !s2)
		return(0);
	guide = 0;
	if (str_len(s1) == str_len(s2))
	{
		while ((s1[guide] == s2[guide]) && (s1[guide] && s2[guide]))
			guide++;
	}
	if (!(s1[guide]) && !(s2[guide]))
		return (1);
	return (0);
}

int main( int arc, char **wordy)
{
	int fd;
	char *line;
	int guide;
	char *head_check = "/* ************************************************************************** */\n";
	int hat_shoe;
	
	if (arc != 2)
		return (write(1, "No la das mrk: Incorrect argument count", 39), 1);
	
	fd = open(wordy[1], O_RDONLY);
	if (fd < 0)
		return (1);

	write(1, B_WI, str_len(B_WI));
	write(1, "build_", 7);
	guide = 0;
	while (wordy[1][guide])
			write(1, &wordy[1][guide++], 1);
	write(1, ":\n", 2);
	write(1, "\t@printf \"$(NEOR) Building ", 27);
	guide = 0;
	while (wordy[1][guide])
			write(1, &wordy[1][guide++], 1);
	write(1, "... $(RESET)\"\n\t@printf \"$(MINT)🦝\\n\\n\"\n\t@> ", 45);
	guide = 0;
	while (wordy[1][guide])
			write(1, &wordy[1][guide++], 1);
	write(1, "\n", 1);
	hat_shoe = 0;
	while((line = get_next_line(fd)) != NULL)
	{	
		if (compare(head_check, line) == 1)
				hat_shoe++;
		if (hat_shoe == 1)
		{
			write(1, BABY, str_len(BABY));
			write(1, "\tprintf \"%s\" \'", 14);
		}
		else if (hat_shoe > 1 || hat_shoe == 0)
		{
			if (hat_shoe == 2)
			{
				hat_shoe++;
				write(1, "\tprintf \"%s\" \'", 14);
			}
			else
			{
				write(1, MINT, str_len(MINT));
				write(1, "\t@printf \"%s\" \'", 15);
			}
		}
		guide = 0;
		while(line[guide])
		{
		        if (line[guide] == '\n')
		                break ;
			else if (line[guide] == 39)
				write(1, "\"\\\'\"", 4);
			else if (line[guide] == 37)
				write(1, "%%", 2);
			else if (line[guide] == 36)
				write(1, "$$", 2);
			else if (line[guide] == 92)
				write(1, "\"\\\\\\\\\"", 6);
			else
				write(1, &line[guide], 1);
			guide++;
		}
		free(line);
		guide = 0;
		write(1, "\\n'>> ", 6);
		while (wordy[1][guide])
			write(1, &wordy[1][guide++], 1);
	        write(1, "\n", 1);		
	}
	if(!(((wordy[1][str_len(wordy[1]) - 1] == 'c') || (wordy[1][str_len(wordy[1]) - 1] == 'h')) && (wordy[1][str_len(wordy[1]) - 2] == '.')))
	{
		write(1, "\t@chmod 777 ", 12);
		guide = 0;
		while (wordy[1][guide])
			write(1, &wordy[1][guide++], 1);
		write(1, "\n", 1);
	}
	write(1, "\t@open ", 7);
	guide = 0;
	while (wordy[1][guide])
			write(1, &wordy[1][guide++], 1);
	write(1, "\n", 1);
		write(1, "\t@printf \"$(RESET)🦝\"\n", 24);
	write(1, RSET, str_len(RSET));
	close(fd);
	return(0);
}

