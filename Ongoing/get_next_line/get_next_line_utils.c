/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 22:38:33 by lde-san-          #+#    #+#             */
/*   Updated: 2025/05/30 15:38:12 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

t_list	*racc_lstnew(char *c)
{
	t_list	*result;
	char	*character;

	result = malloc(sizeof (t_list));
	if (!result)
		return (NULL);
	character = malloc(sizeof (char) + 1);
	character[0] = *c;
	character[1] = '\0';
	result -> letter = character;
	result -> next = NULL;
	return (result);
}

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (!(lst -> next))
			return (lst);
		lst = lst -> next;
	}
	return (NULL);
}

size_t	racc_linesize(t_list *lst)
{
	size_t	count;

	count = 0;
	while (lst)
	{
		count++;
		if (lst -> letter[0] == '\n')
			break;
		lst = lst -> next;
	}
	return (count);
}

t_list	*racc_delnode(t_list **lst)
{
	t_list *temp;

	temp = (*lst) -> next;
	free((*lst) -> letter);
	free((*lst));
	return(temp);
}

int ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return (-1);
	if (!*lst)
	{
		*lst = new;
		return (0);
	}
	last = ft_lstlast(*lst);
	last -> next = new;
	return (0);
}
