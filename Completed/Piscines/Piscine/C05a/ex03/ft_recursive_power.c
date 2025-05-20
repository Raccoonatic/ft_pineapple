/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:35:16 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/19 18:52:50 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power( int nb, int power)
{
	if (power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main( int arc, char *wordy[])
{
	int	result;

	(void)arc;
	result = ft_recursive_power(atoi(wordy[1]), atoi(wordy[2]));
	printf("%d\n", result);
	return (0);
}*/
