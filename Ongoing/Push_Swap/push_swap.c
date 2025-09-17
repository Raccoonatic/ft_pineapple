/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 20:21:15 by lde-san-          #+#    #+#             */
/*   Updated: 2025/09/17 23:19:40 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void fail(void)
{
	racc_print(2,BLOD"Error\n");
	exit(1);
}

int	main( int arc, char *wordy[])
{
	t_list	*head;

	if(arc < 2)
		return(0);
	if (!(head = input_manager(arc, wordy)))
	{
		racc_delnode(&head);
		fail;
	}
}
