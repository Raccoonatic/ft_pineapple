/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 22:38:01 by lde-san-          #+#    #+#             */
/*   Updated: 2025/06/01 22:42:01 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_lines(t_list **head)
{
	t_list	*traveler;
	size_t	guide;
	char	*line;
	size_t	line_len;

	line_len = racc_linesize(*head);
	line = malloc((line_len + 1) * sizeof (char));
	if (!line)
		return (racc_delnode(head, 1), NULL);
	traveler = *head;
	guide = 0;
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

int	extract_buffer(t_list **head, int fd)
{
	ssize_t	read_out;
	ssize_t	guide;
	char	*buffer;

	buffer = malloc(BUFFER_SIZE * sizeof(char));
	if (!buffer)
		return (-1);
	read_out = read(fd, buffer, BUFFER_SIZE);
	if (read_out < 0)
		return (free(buffer), -1);
	if (read_out == 0)
		return (free(buffer), 0);
	guide = 0;
	while (guide < read_out)
	{
		if (racc_lstadd(head, racc_lstnew(buffer[guide])) == -1)
			return (free(buffer), -1);
		guide++;
	}
	free(buffer);
	return (1);
}

char	*get_next_line(int fd)
{
	static t_list	*head;
	int				read_out;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (racc_delnode(&head, 1), NULL);
	while (racc_findend(&head) == -1)
	{
		read_out = extract_buffer(&head, fd);
		if (read_out == 0)
			break ;
		if (read_out < 0)
			return (racc_delnode(&head, 1), NULL);
	}
	if (!head)
		return (NULL);
	return (get_lines(&head));
}
