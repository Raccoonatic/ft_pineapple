/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort_them_all.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 13:57:40 by lde-san-          #+#    #+#             */
/*   Updated: 2025/10/09 22:16:23 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static void	ps_push_all_but_three(t_node **stacka, t_node **stackb, size_t len);
static void	ps_rot_push(t_node **stacka, t_node **stackb, int stage, size_t l);

void	one_f_to_sort_them_all(t_node **stacka, t_node **stackb)
{
	size_t	len;
	int		stage;
	t_node	*tiny;

	len = ps_count_nodes(*stacka);
	stage = 1;
	tiny = NULL;
	ps_rot_push(stacka, stackb, stage, len);
	ps_sort_three(stacka, 'a');
	stage++;
	while (*stackb)
	{
		ps_refresh_meta(*stacka, *stackb);
		ps_rot_push(stacka, stackb, stage, len);
	}
	tiny = ps_mininum(*stacka);
	ps_refresh_meta(*stacka, NULL);
	while ((*stacka)-> num != tiny -> num)
	{
		if (tiny -> tropic == CACER)
			ps_rotate(stacka, NULL, 'a');
		else
			ps_revotate(stacka, NULL, 'a');
	}
	return ;
}

static void	ps_push_all_but_three(t_node **stacka, t_node **stackb, size_t len)
{
	while (len-- > 3)
		ps_push(stacka, stackb, 'b');
}

static void	ps_rot_push(t_node **stacka, t_node **stackb, int stage, size_t l)
{
	if (stage == 1)
		ps_push_all_but_three(stacka, stackb, l);
	if (stage == 2)
	{
		if ((*stackb)-> cheapest -> tropic
			== (*stackb)-> cheapest -> target -> tropic)
			ps_cheap_rotate(stacka, stackb, '\0');
		if ((*stackb)-> num != (*stackb)-> cheapest -> num)
			ps_cheap_rotate(stacka, stackb, 'b');
		if ((*stackb)-> cheapest -> target -> num != (*stacka)-> num)
			ps_cheap_rotate(stacka, stackb, 'a');
		ps_push(stackb, stacka, 'a');
		return ;
	}
	return ;
}
