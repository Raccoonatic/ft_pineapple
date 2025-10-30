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

static void	ps_set_target_ab(t_node *stck1, t_node *stck2);
static void	ps_set_target_ba(t_node *stck1, t_node *stck2);
static void	ps_set_cheapest(t_node *head);

void	ps_refresh_meta(t_node *stck1, t_node *stck2, char ab)
{
	if (ab == 'b')
	{
		ps_set_index(stck1);
		ps_set_index(stck2);
		ps_set_target_ab(stck1, stck2);
		ps_set_price(stck1, stck2);
		ps_set_cheapest(stck2);
	}
	else
	{
		ps_set_index(stck1);
		ps_set_index(stck2);
		ps_set_target_ba(stck1, stck2);
		ps_set_price(stck1, stck2);
		ps_set_cheapest(stck2);
	}
}
/*Refreshes the metadata inside each struct from the list, ensuring the
correct calculations are done between iterations of the main algorithm
logic. The char ab, makes sure the correct targetting logic is called if
the nodes are moving from a to b, from b to a, or nowhere for that matter*/

static void	ps_set_target_ab(t_node *stck1, t_node *stck2)
{
	t_node	*trav;
	t_node	*target_node;
	long	best_match;

	if (!stck2)
		return ;
	while (stck2)
	{
		target_node = NULL;
		best_match = ((long)INT_MIN) - 1;
		trav = stck1;
		while (trav)
		{
			if ((trav -> num > stck2 -> num) && (trav -> num < best_match))
			{
				best_match = trav -> num;
				target_node = trav;
			}
			trav = trav -> next;
		}
		if (best_match == ((long)INT_MIN) - 1)
			target_node = ps_maxinum(stck1);
		stck2 -> target = target_node;
		stck2 = stck2 -> next;
	}
}
/*Traverses stck2, looking each time for the biggest node in stck1 that's 
smaller than the current node being looked at in stck2. The "best_match" gets
updated as a better number is found, so it begins at a number that is 
impossibly smaller considering the constraints from the input_manager's
evaluation. A final check is performed at the end, because if a smaller 
number wasn't found during the loop, then the node in stck2 is probably the
new smallest number. In that case, the biggest number in stck1 is assigned as
target, so they are close together, considering that the final stack can
be looked at as a circle.*/

static void	ps_set_target_ba(t_node *stck1, t_node *stck2)
{
	t_node	*trav;
	t_node	*target_node;
	long	best_match;

	if (!stck2)
		return ;
	while (stck2)
	{
		target_node = NULL;
		best_match = ((long)INT_MAX) + 1;
		trav = stck1;
		while (trav)
		{
			if ((trav -> num > stck2 -> num) && (trav -> num < best_match))
			{
				best_match = trav -> num;
				target_node = trav;
			}
			trav = trav -> next;
		}
		if (best_match == ((long)INT_MAX) + 1)
			target_node = ps_mininum(stck1);
		stck2 -> target = target_node;
		stck2 = stck2 -> next;
	}
}
/*Traverses stck2, looking each time for the smallest node in stck1 that's 
bigger than the current node being looked at in stck2. The "best_match" gets
updated as a better number is found, so it begins at a number that is 
impossibly bigger considering the constraints from the input_manager's
evaluation. A final check is performed at the end, because if a bigger 
number wasn't found during the loop, then the node in stck2 is probably the
new biggest number. In that case, the smallest number in stck1 is assigned as
target, so they are close together, considering that the final stack can
be looked at as a circle.*/

static void	ps_set_cheapest(t_node *head)
{
	t_node	*best_price;
	t_node	*trav;

	if (!head)
		return ;
	best_price = head;
	trav = head;
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
	while (head)
	{
		head -> cheapest = best_price;
		head = head -> next;
	}
	return ;
}
/*It looks for the node that has the lowest move_price, by performing 2
traverses trough the list. The first one compares all values to store the
address of the node with the cheapest move combination, while simultaneously
setting all "cheapest" pointers to NULL, creating a blank canvas. Then the 
second run, initializes the previously nulled pointers with the address of
the cheapest node it found*/
