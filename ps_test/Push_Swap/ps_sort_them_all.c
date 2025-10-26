/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort_them_all.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 13:57:40 by lde-san-          #+#    #+#             */
/*   Updated: 2025/10/14 11:59:57 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static void	ps_push_two(t_node **stck1, t_node **stck2, size_t len);
static void	ps_rot_push(t_node **stck1, t_node **stck2, char ab);
void		ps_cheap_rotate(t_node **stck1, t_node **stck2, char ab);

void	one_f_to_sort_them_all(t_node **stacka, t_node **stackb)
{
	size_t	len;
	t_node	*tiny;

	len = ps_count_nodes(*stacka);
	tiny = NULL;
	ps_push_two(stacka, stackb, len);
	while (len-- > 3)
	{
		ps_refresh_meta(*stackb, *stacka, 'b');
		ps_rot_push(stackb, stacka, 'b');
	}
	ps_sort_three(stacka, 'a');
	while (*stackb)
	{
		ps_refresh_meta(*stacka, *stackb, 'a');
		ps_rot_push(stacka, stackb, 'a');
	}
	tiny = ps_mininum(*stacka);
	ps_refresh_meta(*stacka, NULL, '\0');
	while ((*stacka)-> num != tiny -> num)
	{
		if (tiny -> tropic == CACER)
			ps_rotate(stacka, NULL, 'a');
		else
			ps_revotate(stacka, NULL, 'a');
	}
	return ;
}
/*The function blindly pushes most nodes to b so it can then perform the
sort_three algorithm on stack a. Then all nodes in b are iteratively 
assigned a target, position and move_price, to calculate the cheapest move
sequence to send the nodes in b back to a, next to the corresponding node
in the sort order. Once all nodes are back in a, it then rotates or 
revotates if necessary to get the smallest node to the top, finish the sort.*/

static void	ps_push_two(t_node **stck1, t_node **stck2, size_t len)
{
	size_t	target_len;
	
	target_len = len - 2;
	while (len-- > target_len)
		ps_push(stck1, stck2, 'b');	
}

static void	ps_rot_push(t_node **stck1, t_node **stck2, char ab)
{
	if ((*stck2)-> cheapest -> tropic
			== (*stck2)-> cheapest -> target -> tropic)
		ps_cheap_rotate(stck1, stck2, '\0');
	if (ab == 'b')
	{
		if ((*stck2)-> num != (*stck2)-> cheapest -> num)
			ps_cheap_rotate(stck1, stck2, 'a');
		if ((*stck2)-> cheapest -> target -> num != (*stck1)-> num)
			ps_cheap_rotate(stck1, stck2, 'b');
	}
	else
	{
		if ((*stck2)-> num != (*stck2)-> cheapest -> num)
			ps_cheap_rotate(stck1, stck2, 'b');
		if ((*stck2)-> cheapest -> target -> num != (*stck1)-> num)
			ps_cheap_rotate(stck1, stck2, 'a');
	}
	ps_push(stck2, stck1, ab);
	return ;
}
/*Looks at the value on the stage variable from the calling function, to execute
the necessary movements. if on stage==1, it takes into account the number of 
nodes in the list, to push to stack b most nodes. Leaving stack a with only 3
nodes. If on stage==2 it checks the tropics and the values of the top nodes, to
evaluate if ps_cheap_rotate should be called to move on stack a, b or both 
simultaneously. Once all nodes are on top, it then pushes the top b node to a.*/

void	ps_cheap_rotate(t_node **stck1, t_node **stck2, char ab)
{
	while (ab == '\0' && ((*stck2)->num != (*stck2)-> cheapest -> num)
		&& ((*stck1)->num != (*stck2)-> cheapest -> target -> num))
	{
		if ((*stck2)-> cheapest -> tropic == CACER)
			ps_rotate(stck1, stck2, ab);
		else
			ps_revotate(stck1, stck2, ab);
	}
	while (ab == 'b' && ((*stck2)->num != (*stck2)-> cheapest -> num))
	{
		if ((*stck2)-> cheapest -> tropic == CACER)
			ps_rotate(stck2, NULL, ab);
		else
			ps_revotate(stck2, NULL, ab);
	}
	while (ab == 'a' && ((*stck1)->num != (*stck2)-> cheapest -> target -> num))
	{
		if ((*stck2)-> cheapest -> target -> tropic == CACER)
			ps_rotate(stck1, NULL, ab);
		else
			ps_revotate(stck1, NULL, ab);
	}
}

/*The function calls the rotate or reverse rotate moves depending on whether the
node is above or bellow the middle of the list (CACER = top, CAPRI = bottom).
The ab flag passes the character to print, while simultaneously specifying 
whether the move occurs in stack a, stack b, or both at the same time. The
function continuously calls the corresponding rotation until the cheapest
node and/or its target is at the top of the stack*/
