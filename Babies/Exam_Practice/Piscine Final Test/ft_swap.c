/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 20:16:40 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/25 21:17:09 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_swap(int *a, int *b)
{
	int temp;
	int *c;

	temp = 0;
	c = &temp;
	*c = *a;
	*a = *b;
	*b = *c;
}

#include <stdio.h>
#include <stdlib.h>

int main (int ai, char *g[])
{
	(void)ai;
	int x = atoi(g[1]);
        int y = atoi(g[2]);
	int *a = &x;
	int *b = &y;
	
	printf("The original variables where a: %d, and b: %d\n", x, y);
	ft_swap(a, b);
	printf("But now, they are a: %d, and b: %d\n", x, y);
}
