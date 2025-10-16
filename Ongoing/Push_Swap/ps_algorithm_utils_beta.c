/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_algorithm_utils_beta.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 16:53:49 by lde-san-          #+#    #+#             */
/*   Updated: 2025/10/14 11:00:55 by lde-san-         ###   ########.fr       */
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
	ps_set_cheapest(headb);
}
/*Refreshes the metadata inside each struct from the list, ensuring the
correct calculations are done between iterations of the main algorithm
logic*/

static void	ps_set_price(t_node *heada, t_node *headb)
{
	size_t	lena;
	size_t	lenb;
	size_t	a_price;
	t_node	*trav;

	if (!headb)
		return ;
	lena = ps_count_nodes(heada);
	lenb = ps_count_nodes(headb);
	a_price = 0;
	trav = headb;
	while (trav)
	{
		if (heada && trav -> target && trav -> target -> tropic == CACER)
			a_price = trav -> target -> stack_index;
		else if (heada && trav -> target && trav -> target -> tropic == CAPRI)
			a_price = lena - trav -> target -> stack_index;
		trav -> move_price = (trav -> stack_index) + a_price;
		if (trav -> tropic == CAPRI)
			trav -> move_price = (lenb - trav -> stack_index) + a_price;
		trav = trav -> next;
	}
}
/*Traverses stack b checking for the stack_index and whether the node is
above or bellow the meridian (CACER = top, CAPRI = bottom). Based on this
it calculates the minimum number of rotations needed to get said node to
the top of the stack. It also considers this same info from the corresponding
target node, and adds up both prices so that later the cheapest "combination"
can be found*/

static void	ps_set_target(t_node *heada, t_node *headb)
{
	t_node	*trav;
	t_node	*target_node;
	long	best_match;

	if (!headb)
		return ;
	while (headb)
	{
		target_node = NULL;
		best_match = ((long)INT_MAX) + 1;
		trav = heada;
		while (trav)
		{
			if ((trav -> num > headb -> num) && (trav -> num < best_match))
			{
				best_match = trav -> num;
				target_node = trav;
			}
			trav = trav -> next;
		}
		if (best_match == ((long)INT_MAX) + 1)
			target_node = ps_mininum(heada);
		headb -> target = target_node;
		headb = headb -> next;
	}
}
/*Traverses stack b, looking each time for the smallest node in a that's 
bigger than the current node being looked at in b. The "best_match" gets
updated as a better number is found, so it begins at a number that is 
impossibly bigger considering the constraints from the input_manager's
evaluation. A final check is performed at the end, because if a bigger 
number wasn't found during the loop, then the node in b is probably the
biggest number. In that case, the smallest number in a is assigned as the
target, so they are close together, considering that the final stack can
be looked at as a circle.*/

static void	ps_set_cheapest(t_node *headb)
{
	t_node	*best_price;
	t_node	*trav;

	if (!headb)
		return ;
	best_price = headb;
	trav = headb;
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
	while (headb)
	{
		headb -> cheapest = best_price;
		headb = headb -> next;
	}
	return ;
}
/*It looks for the node in b that has the lowest move_price, by performing 2
traverses trough the list. The first one compares all values to store the
address of the node with the cheapest move combination, while simultaneously
setting all "cheapest" pointers to NULL, creating a blank canvas. Then the 
second run, initializes the previously nulled pointers with the address of
the cheapest node it found*/

void	ps_cheap_rotate(t_node **st1, t_node **st2, char ab)
{
	while (ab == '\0' && ((*st2)->num != (*st2)-> cheapest -> num)
		&& ((*st1)->num != (*st2)-> cheapest -> target -> num))
	{
		if ((*st2)-> cheapest -> tropic == CACER)
			ps_rotate(st1, st2, ab);
		else
			ps_revotate(st1, st2, ab);
	}
	while (ab == 'b' && ((*st2)->num != (*st2)-> cheapest -> num))
	{
		if ((*st2)-> cheapest -> tropic == CACER)
			ps_rotate(st2, NULL, ab);
		else
			ps_revotate(st2, NULL, ab);
	}
	while (ab == 'a' && ((*st1)->num != (*st2)-> cheapest -> target -> num))
	{
		if ((*st2)-> cheapest -> target -> tropic == CACER)
			ps_rotate(st1, NULL, ab);
		else
			ps_revotate(st1, NULL, ab);
	}
}
/*The function calls the rotate or reverse rotate moves depending on whether the
node is above or bellow the middle of the list (CACER = top, CAPRI = bottom).
The ab flag passes the character to print, while simultaneously specifying 
whether the move occurs in stack a, stack b, or both at the same time. The
function continuously calls the corresponding rotation until the cheapest
node and/or its target is at the top of the stack*/
