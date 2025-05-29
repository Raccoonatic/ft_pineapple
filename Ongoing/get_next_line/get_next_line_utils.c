/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 22:38:33 by lde-san-          #+#    #+#             */
/*   Updated: 2025/05/29 15:21:42 by lde-san-         ###   ########.fr       */
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
	size_t	guide;

	guide = 0;
	while (lst && lst -> letter[0] != '\n' && lst -> letter[0] != '\0')
	{
		lst = lst -> next;
		guide++;
	}
	return (++guide);
}

void	racc_lstclear(t_list **lst)
{
	t_list	*temp;

	if (!lst)
		return ;
	while (*lst)
	{
		temp = (*lst)-> next;
		free((*lst)->letter);
		free(*lst);
		*lst = temp;
	}
	*lst = NULL;
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last -> next = new;
}
