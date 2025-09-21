/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 20:21:15 by lde-san-          #+#    #+#             */
/*   Updated: 2025/09/20 21:49:07 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	main( int arc, char *wordy[])
{
	t_node	*head;

	if(arc < 2)
		return(0);
	if (!(head = input_manager(arc, wordy)))
		ps_delnode(&head, 1);
}
