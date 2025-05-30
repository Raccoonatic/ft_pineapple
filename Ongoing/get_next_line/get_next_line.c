/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 22:38:01 by lde-san-          #+#    #+#             */
/*   Updated: 2025/05/30 15:38:00 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_line(t_list **head)
{
	t_list	*traveller;
	size_t	guide;
	char	*line;
	size_t	line_len;

	guide = 0;
	line_len = racc_linesize(*head);
	line = malloc((line_len + 1) * sizeof (char));
	if (!line)
		return (NULL);
	traveller = *head;
	while (guide < line_len)
	{
		line[guide] = traveller -> letter[0];
		traveller = traveller -> next;
		*head = racc_delnode(head)
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

	if (fd == -1 || BUFFER_SIZE <= 0)
		return (NULL);
	counter = 0;
	while (counter < BUFFER_SIZE)
	{
		if (read(fd, &letter, 1) <= 0)
			break;
		if (ft_lstadd_back(&head , racc_lstnew(&letter)) == -1)
			return (NULL);
		counter++;
	}
}
