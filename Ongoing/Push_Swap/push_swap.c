/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 20:21:15 by lde-san-          #+#    #+#             */
/*   Updated: 2025/09/21 12:17:02 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	main( int arc, char *wordy[])
{
	t_node	*stacka;
	t_node	*stackb;

	stacka = NULL;
	stackb = NULL;
	if (arc < 2)
		return (0);
	stacka = input_manager(arc, wordy);
	if (!stacka)
		ps_delnode(&stacka, 1);
}
