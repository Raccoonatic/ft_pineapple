/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_algorithm_utils_beta.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 16:53:49 by lde-san-          #+#    #+#             */
/*   Updated: 2025/09/26 17:38:42 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	ps_refresh_meta(*head)
{
	ps_set_index(head);
	ps_set_price(head);
}

void	ps_set_price(t_node *head)
{
	size_t	length;
	t_node	*traveller;

	length = ps_count_nodes(*st1);
	traveller = *st1;
	while (traveller)
	{
		traveller -> move_price = traveller -> stack_index;
		if (traveller -> tropic == CAPRI)
			traveller -> move_price = (length - traveller -> move_price);
		traveller = traveller -> next;
	}
	return ;
}
