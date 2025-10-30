/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_cost_analysis.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 18:48:17 by lde-san-          #+#    #+#             */
/*   Updated: 2025/10/26 18:49:17 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static int	ps_same_tropic_price(int price_1, int price_2);
static int	ps_price_check(t_node *node, int len);

void	ps_set_price(t_node *stck1, t_node *stck2)
{
	int	len1;
	int	len2;
	int	price_1;
	int	price_2;

	if (!stck2)
		return ;
	len1 = ps_count_nodes(stck1);
	len2 = ps_count_nodes(stck2);
	price_1 = 0;
	price_2 = 0;
	while (stck2)
	{
		price_2 = ps_price_check(stck2, len2);
		if (stck1 && stck2 -> target)
			price_1 = ps_price_check(stck2 -> target, len1);
		if (stck1 && stck2 -> target
			&& (stck2 -> tropic == stck2 -> target -> tropic))
			stck2 -> move_price = ps_same_tropic_price(price_1, price_2);
		else
			stck2 -> move_price = price_2 + price_1;
		stck2 = stck2 -> next;
	}
}
/*Traverses stck2 checking for the stack_index and whether the node is
above or bellow the meridian (CACER = top, CAPRI = bottom). Based on this
it calculates the minimum number of rotations needed to get said node to
the top of the stack. It also considers this same info from the corresponding
target node, and it either adds up both prices, or calls ps_same_tropic_price
so that later the cheapest "combination" moves of node and target can be found*/

static int	ps_same_tropic_price(int price_1, int price_2)
{
	if (price_2 > price_1)
		return (price_2);
	return (price_1);
}
/* Accounts for simultaneous rotations in case both the node and its target
are in the same tropic. Since joint movements can be done, the actual number
of rotations needed can be defined by the maximum price of both nodes, or 
the price of either one if they are the same */

static int	ps_price_check(t_node *node, int len)
{
	if (!node)
		return (0);
	if (node -> tropic == CACER)
		return (node -> stack_index);
	else
		return (len - (node -> stack_index));
}
/*Reverses the logic on wether a node is in the top or bottom half of the list
that way it counts the minimum number of rotations or reverse rotations needed*/
