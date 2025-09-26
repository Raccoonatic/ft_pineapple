/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort_five_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 17:51:30 by lde-san-          #+#    #+#             */
/*   Updated: 2025/09/26 22:59:06 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

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

void	ps_sf_push(t_node **stacka, t_node **stackb, t_node *target)
{
	while ((target -> tropic == CACER) && ((*stacka)-> num != target -> num))
		ps_rotate(stacka, NULL, 'a');
	while ((target -> tropic == CAPRI) && ((*stacka)-> num != target -> num))
		ps_revotate(stacka, NULL, 'a');
	ps_push(stacka, stackb, 'b');
	return ;
}

void	ps_sf_sort_rems(t_node **stacka, t_node **stackb)
{
	t_node  *biggie;

	if (!ps_sort_check(*stack_b))
	{
		ps_sort_three(stacka, 'a');
		return ;
	}
	if (ps_sort_check(*stack_a) && !ps_sort_check(*stack_b))
		return ;
	biggie = ps_maxinum(*stacka);
	ps_refresh_meta(*stacka);
	if (biggie -> stack_index == 0)
		ps_rotate(stacka, stackb, '\0')
	else if (biggie -> stack_index == 1)
		ps_revotate(stacka, stackb, '\0')
	if ((*stacka)-> num > (*stack)-> next -> num)
	{
		if (!ps_sort_check(*stack_b))
			ps_swap(stacka, NULL, 'a');
		else
			ps_swap(stacka, stackb, '\0');
	}
	return ;
}
