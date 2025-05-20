/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:41:11 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/26 13:01:32 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void ft_rev_int_tab(int *tab, int size)
{
	int vessel[size];
	int i;
	
	i = 0;
	while(i <= (size - 1))
	{
		vessel[i] = tab[(size - 1) - i];
		i++;
	}
	i = 0;
	while(i <= size)
	{
		tab[i] = vessel[i];
		i++;
	}
}
int main(int a, char *g[])
{
	int c[5] = {atoi(g[1]), atoi(g[2]), atoi(g[3]), atoi(g[4]), atoi(g[5])};
	ft_rev_int_tab(c, a - 1);
	printf("%d, %d, %d, %d, %d\n", c[0], c[1], c[2], c[3], c[4]);
	return (0);
}
