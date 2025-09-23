/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_moves.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 15:34:26 by lde-san-          #+#    #+#             */
/*   Updated: 2025/09/23 23:00:58 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	swap(t_node **st1, char ab, t_node **st2)
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

void	push(void)
{
	temp = *st1 -> next;
	*st1 -> next = *st2;
	*st1 -> next -> prev = *st1;
	st2 = st1;
	st1 = temp;
}
