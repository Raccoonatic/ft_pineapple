/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_algorithm_utils_alpha.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 13:23:47 by lde-san-          #+#    #+#             */
/*   Updated: 2025/09/26 16:53:30 by lde-san-         ###   ########.fr       */
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
	size_t	length;

	if (!head)
		return ;
	length = ps_count_nodes(head);
	head -> stack_index = 0;
	head -> tropic = CACER;
	head = head -> next;
	while (head)
	{
		head -> stack_index = (head -> prev -> stack_index) + 1;
		head -> tropic = CACER;
		if (length / 2 < (size_t)(head -> stack_index))
			head -> tropic = CAPRI;
		head = head -> next;
	}
}
/*Sets the stack_index of the node pointed by "head" to 0 so the subsequent
nodes may be n+1. This is done by traversing the pointer forward and then
using the prev pointer to access the previous index member and adding 1.
During this process, the node gets assigned a tropic to identify if they are
either in the top half (CACER) or the bottom half (CAPRI)*/

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
compare it to each subsequent node from the list, as head traverses to it.
Every time a num member is bigger than "biggie", its value is assigned to
biggie and the pointer to this node is stored in result. This way, when
end of the list is reached, result will be pointing to the node with the
biggest num member*/

t_node	*ps_mininum(t_node *head)
{
	int		baby;
	t_node	*result;

	if (!head)
		return (NULL);
	baby = head -> num;
	result = head;
	while (head)
	{
		if (baby > head -> num)
		{
			baby = head -> num;
			result = head;
		}
		head = head -> next;
	}
	return (result);
}
/*Stores the value of the num member in the node pointed by head, to then
compare it to each subsequent node from the list, as head traverses to it.
Every time a num member is smaller than "baby", its value is assigned to
baby, nobody puts baby in a corner, and the pointer to this node is stored
in result. This way, when end of the list is reached, result will be pointing
to the node with the smallest num member*/

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
list, confirming that the list is sorted. 0 = NOT_SORTED*/
