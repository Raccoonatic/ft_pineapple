/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:13:21 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/19 17:32:40 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	guide;

	guide = 0;
	result = 1;
	if (power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	while (guide < power)
	{
		result = result * nb;
		guide++;
	}
	return (result);
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main( int arc, char *wordy[])
{
	int	result;

	(void)arc;
	result = ft_iterative_power(atoi(wordy[1]), atoi(wordy[2]));
	printf("%d\n", result);
	return (0);
}*/
