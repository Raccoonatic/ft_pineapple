/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_list_gen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 19:59:10 by lde-san-          #+#    #+#             */
/*   Updated: 2025/10/09 18:15:37 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void			ps_delnode(t_node **head, int go_to_fail);
static int		ps_add_node(t_node **head, t_node *new);
static long		ps_atol(const char *str, size_t *guide);
static t_node	*ps_new_node(long n);

t_node	*ps_list_gen(char *input)
{
	size_t	index;
	t_node	*stacka;

	index = 0;
	stacka = NULL;
	while (input[index])
	{
		if (!ps_add_node(&stacka, ps_new_node(ps_atol(input, &index))))
		{
			if (input[index] == '\0')
				break ;
			free(input);
			ps_delnode(&stacka, 1);
		}
	}
	free(input);
	return (stacka);
}
/* Takes a string containing all input values and calls functions sequentially
to, in short, transform them into stack a */

static long	ps_atol(const char *str, size_t *guide)
{
	long	sign;
	long	result;

	sign = 1;
	result = 0;
	while (str[*guide] == ' ' || (str[*guide] >= 9 && str[*guide] <= 13))
		(*guide)++;
	if (str[*guide] == '-' || str[*guide] == '+')
	{
		if (str[*guide] == '-')
			sign *= -1;
		(*guide)++;
	}
	while (str[*guide] >= '0' && str[*guide] <= '9' && str[*guide] != '\0')
	{
		result = result * 10 + (str[*guide] - '0');
		(*guide)++;
	}
	if (str[*guide] == '\0')
		return (((long)(INT_MAX)) + 1);
	return (result * sign);
}
/*Skips any valid whitespaces and turns the incoming string into its "long"
equivalent. We don't guard against long overflow because the subject allows
Undefined Behaviour*/

static t_node	*ps_new_node(long n)
{
	t_node	*result;

	if (n > INT_MAX || n < INT_MIN)
		return (NULL);
	result = malloc(sizeof (t_node));
	if (!result)
		return (NULL);
	result -> num = (int)n;
	result -> stack_index = 0;
	result -> move_price = 0;
	result -> tropic = ECUAD;
	result -> cheapest = NULL;
	result -> target = NULL;
	result -> next = NULL;
	result -> prev = NULL;
	result -> tail = NULL;
	return (result);
}
/*Validates if the number resulting from the ps_atol function is within the
acceptable int range. Allocates memory for a new node and initializes the 
struct's variables. The incoming value is type casted to an int, all pointers
are set to NULL and "tropic" is set to the macro ECUAD, which simply expands
to 0 on precomp*/

void	ps_delnode(t_node **head, int go_to_fail)
{
	t_node	*temp;

	temp = NULL;
	while (*head)
	{
		temp = (*head)-> next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
	if (go_to_fail)
		fail();
	return ;
}
/*Takes a pointer to the head of the linked list and frees all nodes in
descending order, finally setting the incoming pointer to NULL. The go_to_fail
flag is then verified to check if the program should then exit on error*/

static int	ps_add_node(t_node **head, t_node *new)
{
	t_node	*last;

	if (!head || !new)
		return (0);
	if (!*head)
	{
		*head = new;
		new -> prev = NULL;
		(*head)-> tail = new;
		return (1);
	}
	if (!(*head)->tail)
	{
		last = *head;
		while (last -> next)
			last = last -> next;
		(*head)-> tail = last;
	}
	new -> prev = (*head)-> tail;
	(*head)-> tail -> next = new;
	(*head)-> tail = new;
	return (1);
}
/*Appends the new node to the end of the list. The Tail pointer keeps the
address of the last pointer to avoid traversing the list with each new
node, however, a parsing algorithm is still in place as a failsafe. In the 
process of appending, the tail, prev and next nodes are assigned accordingly*/
