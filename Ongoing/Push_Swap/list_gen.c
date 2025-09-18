/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_gen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 19:59:10 by lde-san-          #+#    #+#             */
/*   Updated: 2025/09/18 21:16:34 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

t_node *list_gen(char *input)
{
	t_node	*stacka;
	char	*temp
	size_t	guide;
	size_t	index;

	index = 0;
	stacka = NULL;
	while (input[index])
	{
		guide = 0
		temp = char_spalloc(count_digits(input[index]));
		if (!temp)
		{
			free(input);
			fail();
		}
		while((input[index] >= 9 && input[index] <= 13) || input[index] == 32)
			index++;
		while(temp[guide])
			temp[guide++] = input[index++];
		if (!ps_add_node(&stacka, ps_new_node(ps_atoi(temp))))
		{
			free(temp);
			free(input);
			ps_delnode(&stacka, 1);
		}
		free(temp);
	}
	free(input)
	return(*stacka);
}

size_t count_digits(char *input)
{
	size_t guide;

	guide = 0;
	while((input[guide] >= 9 && input[guide] <= 13) || input[guide] == 32)
		guide++;
	guide = 0;
	while((input[guide] < 9 && input[guide] > 13) && input[guide] != 32)
		guide++;
	return(guide);
}
