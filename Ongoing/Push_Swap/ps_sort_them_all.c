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

static void	ps_rot_push(t_node **stacka, t_node **stackb, int stage, size_t l);

void	one_f_to_sort_them_all(t_node **stacka, t_node **stackb)
{
	size_t	len;
	int		stage;
	t_node	*tiny;

	len = ps_count_nodes(*stacka);
	stage = 1;
	tiny = NULL;
	ps_rot_push(stacka, stackb, stage, len);
	ps_sort_three(stacka, 'a');
	stage++;
	while (*stackb)
	{
		ps_refresh_meta(*stacka, *stackb);
		ps_rot_push(stacka, stackb, stage, len);
	}
	tiny = ps_mininum(*stacka);
	ps_refresh_meta(*stacka, NULL);
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

static void	ps_rot_push(t_node **stacka, t_node **stackb, int stage, size_t l)
{
	if (stage == 1)
	{
		while (l-- > 3)
			ps_push(stacka, stackb, 'b');
	}
	if (stage == 2)
	{
		if ((*stackb)-> cheapest -> tropic
			== (*stackb)-> cheapest -> target -> tropic)
			ps_cheap_rotate(stacka, stackb, '\0');
		if ((*stackb)-> num != (*stackb)-> cheapest -> num)
			ps_cheap_rotate(stacka, stackb, 'b');
		if ((*stackb)-> cheapest -> target -> num != (*stacka)-> num)
			ps_cheap_rotate(stacka, stackb, 'a');
		ps_push(stackb, stacka, 'a');
		return ;
	}
	return ;
}
/*Looks at the value on the stage variable from the calling function, to execute
the necessary movements. if on stage==1, it takes into account the number of 
nodes in the list, to push to stack b most nodes. Leaving stack a with only 3
nodes. If on stage==2 it checks the tropics and the values of the top nodes, to
evaluate if ps_cheap_rotate should be called to move on stack a, b or both 
simultaneously. Once all nodes are on top, it then pushes the top b node to a.*/
