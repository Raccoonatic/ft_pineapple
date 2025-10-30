/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 20:21:15 by lde-san-          #+#    #+#             */
/*   Updated: 2025/10/14 11:17:15 by lde-san-         ###   ########.fr       */
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
/*Creates stack a and b, initializes stack a after validating the input,
and then calls the corresponding functions to sort the values. It then
confirms that they are sorted successfully, and frees all dynamically
allocated memory from the heap before either exiting with failure or
returning 0 on success. Any moves needed to sort the stack are printed
to the terminal during execution, and if there is an error, it prints so
as well before exiting.*/

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
/*It checks the length of stack a, essentially confirming how many numbers
need to be sorted. If the length is anything between 0 and 5, it calls the
corresponding sorting algorithms or none. Otherwise, it returns 1, so the 
one_f_to_sort_them_all function may then be called.*/
