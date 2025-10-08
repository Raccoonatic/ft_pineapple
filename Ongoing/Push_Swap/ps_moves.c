/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_moves.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 15:34:26 by lde-san-          #+#    #+#             */
/*   Updated: 2025/09/24 21:12:12 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ps_swap(t_node **st1, t_node **st2, char ab)
{
	if ((!*st1 || !(*st1)-> next) || (st2 && (!*st2 || !(*st2)->next)))
		return ;
	(*st1)-> prev = (*st1)-> next;
	(*st1)-> next = (*st1)-> next -> next;
	(*st1)-> prev -> next = *st1;
	(*st1)-> prev -> prev = NULL;
	if ((*st1)-> next)
		(*st1)-> next -> prev = *st1;
	*st1 = (*st1)-> prev;
	if (!st2)
	{
		racc_print(B_WI"s%c"RSET, ab);
		return ;
	}
	(*st2)-> prev = (*st2)-> next;
	(*st2)-> next = (*st2)-> next -> next;
	(*st2)-> prev -> next = *st2;
	(*st2)-> prev -> prev = NULL;
	if ((*st2)-> next)
		(*st2)-> next -> prev = *st2;
	*st2 = (*st2)-> prev;
	racc_print(B_WI"ss"RSET);
	return ;
}
/*Can execute sa or sb depending on which stack is passed on st1. The ab
parameter serves to then print the corresponding character ('a' or 'b').
If both arguments are used, in other words, if st2 is not NULL, then the
function expects having been served both stacks, in which case it will do
the swap on both and print ss accordingly*/

void	ps_push(t_node **st1, t_node **st2, char ab)
{
	t_node	*temp;

	if (!(*st1))
		return ;
	temp = (*st1)-> next;
	(*st1)-> next = *st2;
	if (*st2)
		(*st1)-> next -> prev = *st1;
	if (temp)
		temp -> prev = NULL;
	*st2 = *st1;
	*st1 = temp;
	racc_print(B_WI"p%c"RSET, ab);
	return ;
}
/*Can execute pa or pb depending on which stack is passed on st1. It pushes
the first node from st1 on top of st2. The ab parameter serves to then print
the corresponding character ('a' or 'b').*/

static t_node	*ps_findend(t_node *st1)
{
	while (st1 -> next)
		st1 = st1 -> next;
	return (st1);
}

void	ps_rotate(t_node **st1, t_node **st2, char ab)
{
	t_node	*tail;

	if (st2 && *st2 && (*st2)->next)
	{
		tail = ps_findend(*st2);
		tail -> next = *st2;
		*st2 = (*st2)-> next;
		(*st2)-> prev = NULL;
		tail -> next -> prev = tail;
		tail -> next -> next = NULL;
		racc_print(B_WI"rr"RSET);
	}
	if (st1 && *st1 && (*st1)-> next)
	{
		tail = ps_findend(*st1);
		tail -> next = *st1;
		*st1 = (*st1)-> next;
		(*st1)-> prev = NULL;
		tail -> next -> prev = tail;
		tail -> next -> next = NULL;
		if (!st2)
			racc_print(B_WI"r%c"RSET, ab);
	}
	return ;
}
/*Can execute ra or rb depending on which stack is passed on st1. The ab
parameter serves to then print the corresponding character ('a' or 'b').
If both arguments are used, in other words, if st2 is not NULL, then the
function expects having been served both stacks, in which case it will do
the rotate on both and print rr accordingly. It doesn't consider having
no nodes or only one as an error. It will simply rotate whatever it can*/

void	ps_revotate(t_node **st1, t_node **st2, char ab)
{
	t_node	*tail;

	if (st2 && *st2 && (*st2)->next)
	{
		tail = ps_findend(*st2);
		tail -> prev -> next = NULL;
		tail -> prev = NULL;
		(*st2)-> prev = tail;
		tail -> next = *st2;
		*st2 = tail;
		racc_print(B_WI"rrr"RSET);
	}
	if (st1 && *st1 && (*st1)-> next)
	{
		tail = ps_findend(*st1);
		tail -> prev -> next = NULL;
		tail -> prev = NULL;
		(*st1)-> prev = tail;
		tail -> next = *st1;
		*st1 = tail;
		if (!st2)
			racc_print(B_WI"rr%c"RSET, ab);
	}
	return ;
}
/*Can execute rra or rrb depending on which stack is passed on st1. The ab
parameter serves to then print the corresponding character ('a' or 'b').
If both arguments are used, in other words, if st2 is not NULL, then the
function expects having been served both stacks, in which case it will do
the reverse rotate on both and print rrr accordingly. It doesn't consider
having no nodes or only one as an error. It will simply reverse rotate 
whatever it can*/
