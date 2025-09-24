/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_tiny_sorts.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 20:37:04 by lde-san-          #+#    #+#             */
/*   Updated: 2025/09/24 23:39:28 by lde-san-         ###   ########.fr       */
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

void	ps_sort_three(t_node **stack, char ab)
{
	t_node	*biggie;

	if (ps_sort_check(*stack))
		return ;
	biggie = ps_maxinum(*stack);
	ps_set_index(*stack);
	if (biggie -> stack_index == 1)
		ps_rotate(stack, NULL, ab);
	else if (biggie -> stack_index == 2)
		ps_revotate(stack, NULL, ab);
	if ((*stack)-> num > (*stack)-> next -> num)
		ps_swap(stack, NULL, ab);
	return;
}

void	ps_sort_four(t_node **stack_a, t_node **stack_b)
{
	t_node  *biggie;                                                             
                                                                                 
	if (ps_sort_check(*stack_a))                                                   
		return ;                                                                 
	biggie = ps_maxinum(*stack_a);                                                 
	ps_set_index(*stack_a);                                                        
	if (biggie -> stack_index == 4)
		ps_revotate(stack_a, NULL, 'a');
	while((*stack_a)-> num != biggie -> num)
		ps_rotate(stack_a, NULL, 'a');
	ps_push(stack_a, stack_b, 'b');
	ps_sort_three(stack_a, 'a');
	ps_push(stack_b, stack_a, 'a');
	ps_rotate(stack_a, NULL, 'a');
	return;
}
