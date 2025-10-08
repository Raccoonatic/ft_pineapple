/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 20:21:15 by lde-san-          #+#    #+#             */
/*   Updated: 2025/10/08 18:45:37 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static int	ps_tiny_check(t_node **stacka, t_node **stackb);

int	main( int arc, char *wordy[])
{
	t_node	*stacka;
	t_node	*stackb;

	stacka = NULL;
	stackb = NULL;
	if (arc < 2)
		return (0);
	stacka = ps_input_manager(arc, wordy);
	if (!ps_sort_check(stacka) && !ps_tiny_check(&stacka, &stackb))
		one_f_to_sort_them_all(&stacka, &stackb);
	if (!ps_sort_check(stacka) || stackb)
	{
		if (stackb)
			ps_delnode(&stackb, 0);
		ps_delnode(&stacka, 1);
	}
	ps_delnode(&stacka, 0);
	return (0);
}

static int	ps_tiny_check(t_node **stacka, t_node **stackb)
{
	size_t	length;

	length = ps_count_nodes(*stacka);
	if (length <= 1)
		return (1);
	else if (length > 5)
		return (0);
	else if (length == 2)
		ps_sort_two(stacka, 'a');
	else if (length == 3)
		ps_sort_three(stacka, 'a');
	else if (length == 4)
		ps_sort_four(stacka, stackb);
	else if (length == 5)
		ps_sort_five(stacka, stackb);
	return (1);
}
