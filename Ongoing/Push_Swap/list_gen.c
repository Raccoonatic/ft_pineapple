/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_gen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 19:59:10 by lde-san-          #+#    #+#             */
/*   Updated: 2025/09/21 01:18:26 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

t_node	*list_gen(char *input)
{
	t_node	*stacka;
	size_t	index;

	index = 0;
	stacka = NULL;
	while (input[index])
	{
		if (!ps_add_node(&stacka, ps_new_node(ps_atol(input, &index))))
		{
			free(input);
			ps_delnode(&stacka, 1);
		}
	}
	free(input)
	return (stacka);
}

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
	while (str[*guide] >= '0' && str[*guide] <= '9')
	{
		result = result * 10 + (str[*guide] - '0');
		(*guide)++;
	}
	return (result * sign);
}

t_node	*ps_new_node(long n)
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
	result -> cheapest = 0;
	result -> tropic = ECUAD;
	result -> target = NULL;
	result -> next = NULL;
	result -> prev = NULL;
	result -> tail = NULL;
	return (result);
}

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

int	ps_add_node(t_node **head, t_node *new)
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
