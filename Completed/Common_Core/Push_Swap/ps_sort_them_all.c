/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort_them_all.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 13:57:40 by lde-san-          #+#    #+#             */
/*   Updated: 2025/10/27 18:37:27 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static void	ps_push_two(t_node **stck1, t_node **stck2, size_t len);
static void	ps_rot_push(t_node **stck1, t_node **stck2, char ab);
static void	ps_rot_tiny_top(t_node **stacka);
void		ps_cheap_rotate(t_node **stck1, t_node **stck2, char ab);

void	one_f_to_sort_them_all(t_node **stacka, t_node **stackb)
{
	size_t	len;

	len = ps_count_nodes(*stacka);
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
	ps_rot_tiny_top(stacka);
	return ;
}
/*The function pushes two nodes to b, then all nodes in b are iteratively
assigned a target, position, and move_price, to calculate the cheapest move
sequence to send the nodes to b in "reverse" order. Then, when there are
only 3 nodes left in a, it calls sort_three algorithm, and proceeds with
a similar targeting logic to send the nodes in b back to a in the correct
order. Once all nodes are back in a, it then rotates or revotates if 
necessary to get the smallest node to the top, finishing the sort.*/

static void	ps_rot_tiny_top(t_node **stacka)
{
	t_node	*tiny;

	tiny = ps_mininum(*stacka);
	if (!tiny)
		return ;
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
/*Assuming all nodes have returned to stack_a, it finds the node with
the smallest value, and rotates or reverse rotates until it goes to
the top of the stack*/

static void	ps_push_two(t_node **stck1, t_node **stck2, size_t len)
{
	size_t	target_len;

	target_len = len - 2;
	while (len-- > target_len)
		ps_push(stck1, stck2, 'b');
}
/*It blindly pushed the top 2 nodes from a to b*/

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
/*Looks at the char on the ab variable from the calling function, to execute
the necessary movements. if the char is b, it takes into account the targeting
logic to send the nodes to stack_b. if the char is a, it takes into account
the targeting logic to send the nodes back to stack_a. It also evaluates if
ps_cheap_rotate should be called to move on stack a, b or both simultaneously.
Once all nodes are on top, it then pushes the top nodes accordingly.*/

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
