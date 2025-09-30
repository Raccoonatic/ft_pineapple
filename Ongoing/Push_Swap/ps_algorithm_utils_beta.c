/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_algorithm_utils_beta.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 16:53:49 by lde-san-          #+#    #+#             */
/*   Updated: 2025/09/30 14:14:48 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	ps_refresh_meta(t_node *heada, t_node *headb)
{
	ps_set_index(heada);
	ps_set_index(headb);
	ps_set_target(heada, headb);
	ps_set_price(heada, headb);

}

static void	ps_set_price(t_node *heada, t_node *headb)
{
	size_t	lena;
	size_t	lenb;
	size_t	b_price;
	t_node	*trav;

	if (!heada)
		return ;
	lena = ps_count_nodes(heada);
	lenb = 0;
	if (headb)
		lenb = ps_count_nodes(headb);
	b_price = 0;
	trav = heada;
	while (trav)
	{
		if (headb && trav -> target && trav -> target -> tropic == CACER)
			b_price = trav -> target -> stack_index;
		else if (headb && trav -> target && trav -> target -> tropic == CAPRI)
			b_price = lenb - trav -> target -> stack_index;
		trav -> move_price = (trav -> stack_index) + b_price;
		if (trav -> tropic == CAPRI)
			trav -> move_price = (lena - trav -> stack_index) + b_price;
		trav = trav -> next;
	}
}

static void	ps_set_target(t_node *heada, t_node *headb)
{
	t_node	*trav;
	t_node	*target_node;
	long	best_match;

	if (!headb)
		return;
	while (heada)
	{
		target_node = NULL;
		best_match = ((long)INT_MIN)- 1;
		trav = headb;
		while (trav)
		{
			if ((heada -> num > trav -> num) && (trav -> num > best_match))
			{
				best_match = trav -> num;
				target_node = trav;
			}
			trav = trav -> next;
		}
		if (best_match == ((long)INT_MIN)- 1)
			target_node = ps_maxinum(headb);
		heada -> target = target_node;
		heada = heada -> next;
	}
	return ;
}
static void	ps_set_cheapest(t_node *heada)
{
	while (heada) 
	{
		if (heada -> cheapest)
			heada -> cheapest = 0;
	}
