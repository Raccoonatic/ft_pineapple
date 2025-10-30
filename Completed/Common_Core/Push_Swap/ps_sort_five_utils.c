/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort_five_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 17:51:30 by lde-san-          #+#    #+#             */
/*   Updated: 2025/10/09 20:40:29 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_node	*ps_find_big_baby(t_node *head, int baby)
{
	t_node	*res;

	res = NULL;
	while (head)
	{
		if ((head -> num > baby) && (!res || head -> num < res -> num))
			res = head;
		head = head -> next;
	}
	return (res);
}
/*Compares the smallest number in the list with the other four nodes to
find the second smallest*/

void	ps_sf_push(t_node **stacka, t_node **stackb, t_node *target)
{
	while ((target -> tropic == CACER) && ((*stacka)-> num != target -> num))
		ps_rotate(stacka, NULL, 'a');
	while ((target -> tropic == CAPRI) && ((*stacka)-> num != target -> num))
		ps_revotate(stacka, NULL, 'a');
	ps_push(stacka, stackb, 'b');
	return ;
}
/*Verifies whether the "target" node is on the bottom or top half of the 
list, to find the most effective way to rotate it to the top. CACER means
they are on the top so it does ra, and CAPRI means bottom so rra. In both
cases after the target is at the top, it pushes it to stackb*/

void	ps_sf_sort_rems(t_node **stacka, t_node **stackb)
{
	t_node	*biggie;

	if (!ps_sort_check(*stackb))
	{
		ps_sort_three(stacka, 'a');
		return ;
	}
	if (ps_sort_check(*stacka) && !ps_sort_check(*stackb))
		return ;
	biggie = ps_maxinum(*stacka);
	ps_refresh_tiny_meta(*stacka);
	if (biggie -> stack_index == 0)
		ps_rotate(stacka, stackb, '\0');
	else if (biggie -> stack_index == 1)
		ps_revotate(stacka, stackb, '\0');
	if ((*stacka)-> num > (*stacka)-> next -> num)
	{
		if (!ps_sort_check(*stackb))
			ps_swap(stacka, NULL, 'a');
		else
			ps_swap(stacka, stackb, '\0');
	}
	return ;
}
/*Takes care of sorting the reminding nodes. Since there is potential
for the nodes on stack to not be in opposite sorted order, it constantly
checks if the stack isn't sorted, to perform the simultaneous swap or 
rotate (ss, rr, rrr). This way the nodes are pushed back in order after
the function call. It is essentially a more complex sort_three algorithm
that efficiently moves nodes in stackb if necessary.*/
