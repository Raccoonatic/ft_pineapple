/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 13:57:40 by lde-san-          #+#    #+#             */
/*   Updated: 2025/10/02 14:02:50 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	one_f_to_sort_them_all(t_node **stacka, t_node **stackb)
{
	size_t  len;
	int		stage;
	t_node	*tiny;

	len = ps_count_nodes(*stacka);
	stage = 1;
	tiny = NULL
	while 
	ps_rot_push(stacka, stackb, stage, len);
	ps_sort_three(stack_a, 'a');
	stage++;
	while (*stackb)
		ps_rot_push(stacka, stackb, stage, len);
	stage++;
	tiny = ps_mininum(*stacka);
	while ((*stacka)-> num != tiny -> num)
	{
		if (tiny -> tropic == CACER)
			ps_rot_push(stacka, stackb, stage, len);
		else
			ps_rot_push(stacka, stackb, 4, len);
	}	
	return ;
}

static void	ps_push_all_but_three(t_node **stacka, t_node **stackb, size_t l)
{
	while(len > 3)
	{
		ps_push(*stacka, *stackb, b);
		len--;
	}
}
static void	ps_rot_push(t_node **stacka, t_node **stackb, int stage, size_t l)
{
	if (stage == 1)
		ps_push_all_but_three(stacka, stackb, len);
	if (stage == 2)
	{
		if ((*stacka) -> cheapest -> tropic
			== (*stacka) -> cheapest -> target -> tropic)
			ps_cheap_rotate(stacka, stackb);
		else
		{
			ps_cheap_rotate(stacka, NULL);
			ps_cheap_rotate(stackb, NULL);
		}
		if (((*stacka)-> num != (*stacka)-> cheapest -> num)
			|| ((*stacka) -> cheapest -> target -> num != (*stackb)))
			ps_rot_push(stacka, stackb, stage, l);
		ps_push(stackb, stacka, 'b');
		return ;
	}
	if (stage == 3)
		ps_rotate(stacka, NULL, 'a');
	if (stage == 4)
		ps_revotate(stacka, NULL, 'a');
	return ;
}
