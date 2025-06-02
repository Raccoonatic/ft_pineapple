/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 22:38:33 by lde-san-          #+#    #+#             */
/*   Updated: 2025/05/31 14:47:20 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

t_list	*racc_lstnew(char c)
{
	t_list	*result;

	result = malloc(sizeof (t_list));
	if (!result)
		return (NULL);
	result -> letter = c;
	result -> next = NULL;
	return (result);
}

size_t	racc_linesize(t_list *lst)
{
	size_t	count;

	count = 0;
	while (lst)
	{
		count++;
		if (lst -> letter == '\n')
			break ;
		lst = lst -> next;
	}
	return (count);
}

int	racc_findend(t_list **lst)
{
	t_list	*traveler;

	if (!lst || !*lst)
		return (-1);
	traveler = *lst;
	while (traveler)
	{
		if (traveler -> letter == '\n')
			return (0);
		traveler = traveler -> next;
	}
	return (-1);
}

void	racc_delnode(t_list **lst, int clear_all)
{
	t_list	*temp;

	temp = NULL;
	while (*lst)
	{
		temp = (*lst)-> next;
		free(*lst);
		*lst = temp;
		if (clear_all != 1)
			return ;
	}
	*lst = NULL;
	return ;
}

int	racc_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return (-1);
	if (!*lst)
	{
		*lst = new;
		return (0);
	}
	last = *lst;
	while (last)
	{
		if (!(last -> next))
			break ;
		last = last -> next;
	}
	last -> next = new;
	return (0);
}
