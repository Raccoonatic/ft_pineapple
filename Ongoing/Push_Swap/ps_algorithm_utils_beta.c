/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_algorithm_utils_beta.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 16:53:49 by lde-san-          #+#    #+#             */
/*   Updated: 2025/10/08 19:54:37 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static void	ps_set_price(t_node *heada, t_node *headb);
static void	ps_set_target(t_node *heada, t_node *headb);
static void	ps_set_cheapest(t_node *heada);
void		ps_cheap_rotate(t_node **st1, t_node **st2, char ab);

void	ps_refresh_meta(t_node *heada, t_node *headb)
{
	ps_set_index(heada);
	ps_set_index(headb);
	ps_set_target(heada, headb);
	ps_set_price(heada, headb);
	ps_set_cheapest(heada);
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
		return ;
	while (heada)
	{
		target_node = NULL;
		best_match = ((long)INT_MIN) - 1;
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
		if (best_match == ((long)INT_MIN) - 1)
			target_node = ps_maxinum(headb);
		heada -> target = target_node;
		heada = heada -> next;
	}
}

static void	ps_set_cheapest(t_node *heada)
{
	t_node	best_price;
	t_node	trav;

	best_price = heada;
	trav = heada;
	if (trav -> next)
	{
		while (trav)
		{
			if (trav -> cheapest)
				trav -> cheapest = NULL;
			if (trav -> move_price < best_price -> move_price)
				best_price = trav;
			trav = trav -> next;
		}
	}
	while (heada)
	{
		heada -> cheapest = best_price;
		heada = heada -> next;
	}
	return ;
}

void	ps_cheap_rotate(t_node **st1, t_node **st2, char ab)
{
	if (st2)
	{
		while (((*st1)->num != (*st1)-> cheapest -> num)
			&& ((*st2)->num != (*st1)-> cheapest -> target -> num))
		{
			if ((*st1)-> cheapest -> tropic == CACER)
				ps_rotate(st1, st2, '\0');
			else
				ps_revotate(st1, st2, '\0');
		}
		return ;
	}
	while ((*st1)->num != (*st1)-> cheapest -> num)
	{
		if ((*st1)-> cheapest -> tropic == CACER)
			ps_rotate(st1, NULL, ab);
		else
			ps_revotate(st1, NULL, ab);
	}
	return ;
}
