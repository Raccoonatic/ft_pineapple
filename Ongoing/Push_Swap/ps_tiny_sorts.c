/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_tiny_sorts.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 20:37:04 by lde-san-          #+#    #+#             */
/*   Updated: 2025/09/29 10:53:37 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	ps_sort_two(t_node **stack, char ab)
{
	if (ps_sort_check(*stack))
		return ;
	ps_swap(stack, NULL, ab);
	return ;
}
/*Sorts a list of 2 nodes. Merely a space saver. At most, it requires 1 move.*/

void	ps_sort_three(t_node **stack, char ab)
{
	t_node	*biggie;

	if (ps_sort_check(*stack))
		return ;
	biggie = ps_maxinum(*stack);
	ps_refresh_meta(*stack, NULL);
	if (biggie -> stack_index == 0)
		ps_rotate(stack, NULL, ab);
	else if (biggie -> stack_index == 1)
		ps_revotate(stack, NULL, ab);
	if ((*stack)-> num > (*stack)-> next -> num)
		ps_swap(stack, NULL, ab);
	return;
}
/*Sorts a list of 3 nodes based on the stack_index value of the
biggest node. Merely a space saver. At most, it requires 2 moves.*/

void	ps_sort_four(t_node **stack_a, t_node **stack_b)
{
	t_node  *baby;                                                             
                                                                                 
	if (ps_sort_check(*stack_a))                                                   
		return ;    
	baby = ps_mininum(*stack_a);                                                 
	ps_refresh_meta(*stack_a, NULL);
	if (baby -> stack_index == 3)
		ps_revotate(stack_a, NULL, 'a');
	while((*stack_a)-> num != baby -> num)
		ps_rotate(stack_a, NULL, 'a');
	ps_push(stack_a, stack_b, 'b');
	ps_sort_three(stack_a, 'a');
	ps_push(stack_b, stack_a, 'a');
	return;
}
/*Sorts a list of 3 nodes based on the stack_index value of the
smallest node. It considers the stack_index of the node to either
rotate or revotate, bringing said node to the top and pushing it
to the stack_b. This way, the previous sort_three algorithm can 
run, so when the node is pushed back, the sorting is done. 
At most, it requires 6 moves.*/

void    ps_sort_five(t_node **stack_a, t_node **stack_b)
{
	t_node	*big_baby;
	t_node  *baby;

	if (ps_sort_check(*stack_a))
	    return ;
	baby = ps_mininum(*stack_a);
	big_baby = ps_find_big_baby(*stack_a, baby -> num);
	ps_refresh_meta(*stack_a, NULL);
	if (big_baby -> move_price < baby -> move_price)
		ps_sf_push(stack_a, stack_b, big_baby);
	else
		ps_sf_push(stack_a, stack_b, baby)
	baby = ps_mininum(*stack_a);
	ps_sf_push(stack_a, stack_b, baby);
	ps_sf_sort_rems(stack_a, stack_b);
	if (ps_sort_check(*stack_b))
		ps_swap(stackb, NULL, 'b');
	ps_push(stack_b, stack_a, 'a');
	ps_push(stack_b, stack_a, 'a');
	return;
}
/*Sorts a list of 5 nodes by finding the 2 smallest nodes, pushing
them to be, performing a sort_three-like movement and pushing them 
back. There is a specific util file for this function, that contains
the functions to find the 2nd smallest, to rotate or revotate
depending on the node to be pushed, and to perform the sort_three-like
movements. It analizes the cost of pushing either the smallest or
second smallest first to guarantee the minimum number of movements.
Since this means that stackb won't always end up in the correct order,
ps_sf_sort_rems makes sure to use the the simultaneous swap or rotate 
(ss, rr, rrr) when necessary. And if it doesn't, a final check is in
place to ensure stackb is correctly set, before the nodes are pushed
back. */
