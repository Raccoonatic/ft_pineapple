/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 22:38:01 by lde-san-          #+#    #+#             */
/*   Updated: 2025/05/31 14:18:40 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_lines(t_list **head)
{
	t_list	*traveler;
	size_t	guide;
	char	*line;
	size_t	line_len;

	guide = 0;
	line_len = racc_linesize(*head);
	line = malloc((line_len + 1) * sizeof (char));
	if (!line)
	{
		racc_delnode(head, 1);
		return (NULL);
	}
	traveler = *head;
	while (guide < line_len)
	{
		line[guide] = traveler -> letter;
		traveler = traveler -> next;
		racc_delnode(head, 0);
		guide++;
	}
	line[guide] = '\0';
	return (line);
}

char	*get_next_line(int fd)
{
	static t_list	*head;
	char			*line;
	char			letter;
	size_t			counter;
	int                     read_out;

	if (fd == -1 || BUFFER_SIZE <= 0)
		return (NULL);
	counter = 0;
	if (head && racc_findend(&head) == 0)
		return (get_lines(&head));
	while (counter < BUFFER_SIZE)
	{
	        read_out = read(fd, &letter, 1);
		if (read_out == 0)
			break ;
		if (read_out < 0 || racc_lstadd_back(&head, racc_lstnew(letter)) == -1)
		{
			racc_delnode(&head, 1);
			return (NULL);
		}		  
		counter++;
	}
	if (!head || (read_out == 0 && !head))
	        return (NULL);
	if (head && racc_findend(&head) == 0)
		return (get_lines(&head));
	if (read_out == 0 && head)
	        return (get_lines(&head));
	line = get_next_line(fd);
	if (!line)
		racc_delnode(&head, 1);
	return (line);
}
