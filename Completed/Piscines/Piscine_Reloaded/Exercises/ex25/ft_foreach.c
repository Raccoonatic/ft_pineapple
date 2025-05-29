/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 18:41:23 by lde-san-          #+#    #+#             */
/*   Updated: 2025/04/07 21:03:23 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	guide;

	guide = 0;
	while (guide < length)
	{
		f(tab[guide]);
		guide++;
	}
}
/*
void print(int n)
{
	printf("%d\n", n);
}

int main(void)
{
	int g[] = {1, 2, 3};
	ft_foreach(g, 3, print);
	return(0);
}*/
