/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 22:38:01 by lde-san-          #+#    #+#             */
/*   Updated: 2025/05/29 15:21:52 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_line(t_list **head)
{
	t_list	*traveller;
	size_t	guide;
	char	*line;

	guide = 0;
	line = malloc((racc_linesize(*head) + 1) * sizeof (char));
	if (!line)
		return (NULL);
	traveller = *head;
	while ((*head) -> letter)
	{
		line[guide] = traveller -> letter[0];
		if (traveller -> letter[0] == '\n')
			break;
		traveller = traveller -> next;
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

	while (counter < BUFFER_SIZE)
	{
		if (read(fd, &letter, 1) <= 0)
			break;
		ft_lstadd_back(&head , racc_lstnew(&letter);
		counter++;
	}

}
