/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_tiny_sorts.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 20:37:04 by lde-san-          #+#    #+#             */
/*   Updated: 2025/09/26 22:59:13 by lde-san-         ###   ########.fr       */
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
	ps_refresh_meta(*stack);
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
	ps_refresh_meta(*stack_a);                                                        
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
	ps_refresh_meta(*stack_a);
	if (big_baby -> move_price < baby -> move_price)
		ps_sf_push(stack_a, stack_b, big_baby);
	else
		ps_sf_push(stack_a, stack_b, baby)
	baby = ps_mininum(*stack_a);
	ps_sf_push(stack_a, stack_b, baby);
	ps_sf_sort_rems(stack_a, stack_b);
	ps_push(stack_b, stack_a, 'a');
	ps_push(stack_b, stack_a, 'a');
	return;
}
