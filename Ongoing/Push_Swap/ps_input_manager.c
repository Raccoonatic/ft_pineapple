/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_input_manager.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 15:14:28 by lde-san-          #+#    #+#             */
/*   Updated: 2025/09/27 13:13:50 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

t_node	*input_manager(int arc, const char *wordy[])
{
	int		guide;
	size_t	count;
	char	*input;
	t_node	*result;

	guide = 1;
	count = 0;
	while (guide < arc)
	{
		char_check(wordy[guide]);
		count += (racc_strlen(wordy[guide++]) + 1);
	}
	input = ps_spalloc(count);
	if (!input)
		fail();
	ps_populate(input, arc, wordy);
	result = list_gen(input);
	if (!ps_dup_check(result))
		ps_delnode(&result, 1);
	result -> tail = NULL;
	return (result);
}
/*Calculates the lenght of all incoming arguments combined, and calls other
functions sequentially to confirm that the input is valid and then allocate
memory where all arguments will be combined, in order to later be passed to
the list_gen algorithm where the stack a will be created and initialized.*/

static void	char_check(char *w)
{
	size_t	i;
	size_t	nums;

	i = 0;
	nums = 0;
	while (w[i])
	{
		if (w[i] == ' ')
			i++;
		else if ((w[i] >= 48 && w[i] <= 57)
			&& (w[i + 1] != 43 && w[i + 1] != 45))
			nums = ++i;
		else if ((w[i] == 43 || w[i] == 45)
			&& (w[i + 1] >= 48 && w[i + 1] <= 57))
			i++;
		else if (w[i] >= 9 && w[i] <= 13)
			i++;
		else
			fail();
	}
	if (i == 0 || nums == 0)
		fail();
}
/*Checks the incoming string validating that no invalid characters or character
combinations have been entered into the arguments. The nums check at the end 
simply confirms if any actual numbers have been entered. Its value is irrelevant
since is essentially an over-complicated boolean*/

static void	ps_populate(char *space, int arc, char *wordy[])
{
	size_t	guidealpha;
	size_t	guidebeta;
	int		guidegamma;

	guidealpha = 0;
	guidegamma = 1;
	while (guidegamma < arc)
	{
		guidebeta = 0;
		while (wordy[guidegamma][guidebeta])
			space[guidealpha++] = wordy[guidegamma][guidebeta++];
		guidealpha++;
		guidegamma++;
	}
	if (space[guidealpha])
		fail();
}
/*Uses different counters to step by step, parse the entire argv bidimensional
array and clone its characters into the allocated memory. Since the memory has
been initialized with "space" characters, it skips one "slot" at the end of
every argument. Therefore, assuming that all previous calculations and functions
ran correctly, after the whole array has passed "space[guidealpha]" should be
the null terminator "\0"*/

static int	ps_dup_check(t_node *stacka)
{
	t_node	*traveller;

	if (!stacka)
		return (0);
	while (stacka)
	{
		traveller = stacka -> next;
		while (traveller)
		{
			if (traveller -> num == stacka -> num)
				return (0);
			traveller = traveller -> next;
		}
		stacka = stacka -> next;
	}
	return (1);
}
/*Passes the pointer traveller through the entire list and compares the num
member with the one stored in the node pointed to by stacka. Stacka also moves
along and after it reaches the end of the list the loop breaks and we can
asume that no duplicates were found*/
