/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_validation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 15:14:28 by lde-san-          #+#    #+#             */
/*   Updated: 2025/09/20 17:07:25 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

t_node *input_manager(int arc, const char *wordy[])
{
	int		guide;
	size_t	count;
	char	*input;
	
	guide = 1;
	count = 0;
	while (guide < arc)
	{
		char_check(wordy[guide])
		count += (racc_strlen(wordy[guide++]) + 1)
	}
	input = char_spalloc(count);
	if (!input)
		fail();
	populate(input, arc, wordy);
	return(list_gen(input));
}

static void char_check(char *w)
{
	size_t	i;
	size_t	nums;

	i = 0;
	nums = 0;
	while (w[i])
	{
		if (w[i] == ' ')
			i++;
		else if ((w[i] >= 48 && w[i] <= 57) && (w[i+1] != 43 && w[i+1] != 45))
			nums = ++i;
		else if ((w[i] == 43 || w[i] == 45) && (w[i+1] >= 48 && w[i+1] <= 57))
			i++;
		else if (w[i] >= 9 && w[i] <= 13)
			i++;
		else
			fail();
	}
	if (i == 0 || nums == 0)
		fail();
}

static void populate(char *space, int arc, char *wordy[])
{
	size_t	guidealpha;
	size_t	guidebeta;
	int		guidegamma;
	
	guidealpha = 0;
	guidegamma = 1;
		
	while(guidegamma < arc)
	{
		guidebeta = 0;
		while(wordy[guidegamma][guidebeta])
			space[guidealpha++] = wordy[guidegamma][guidebeta++];
		guidealpha++;
		guidegamma++;
	}
	if (space[guidealpha])
		fail();
}
