/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_algorithm_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 13:23:47 by lde-san-          #+#    #+#             */
/*   Updated: 2025/09/21 15:32:16 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

size_t	ps_count_nodes(t_node *head)
{
	size_t	counter;

	counter = 0;
	while (head)
	{
		counter++;
		head = head -> next;
	}
	return (counter);
}
/*Traverses each node from the list, counting each node in the process and
returns the final count*/

void	ps_set_index(t_node *head)
{
	if (!head)
		return ;
	head -> stack_index = 1;
	head = head -> next;
	while (head)
	{
		head -> stack_index = (head -> prev -> stack_index) + 1;
		head = head -> next;
	}
}
/*Sets the stack_index of the node pointed by "head" to 1 so the subsequent
nodes may be n+1. This is done by traversing the pointer forward and then
using the prev pointer to access the previous index member and adding 1*/

t_node	*ps_maxinum(t_node *head)
{
	int		biggie;
	t_node	*result;

	if (!head)
		return (NULL);
	biggie = head -> num;
	result = head;
	while (head)
	{
		if (biggie < head -> num)
		{
			biggie = head -> num;
			result = head;
		}
		head = head -> next;
	}
	return (result);
}
/*Stores the value of the num member in the node pointed by head, to then
compare i to each subsequent node from the list, as head traverses to it.
Every time a num member is bigger than "biggie", its value is assigned to
biggie and the pointer to this node is stored in result. This way, when
end of the list is reached, result will be pointing to the node with the
biggest num member*/

int	ps_sort_check(t_node *head)
{
	if (!head || !(head -> next))
		return (1);
	head = head -> next;
	while (head)
	{
		if (head -> num < head -> prev -> num)
			return (0);
		head = head -> next;
	}
	return (1);
}
/*First evaluates if there is more than one node in the list. If there is, 
advances "head" to the second node and uses the prev pointer to access the
num member of the first one. This way it checks if the smallest is at the 
top, and if there is, it continues the loop, advances to the next node and 
repeates the process. If at any point the smallest is at the bottom the
loop breaks and it returns 0. Otherwise, it eventually hits the end of the
list, confirming that the list is sorted.*/
