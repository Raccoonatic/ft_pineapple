/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 18:55:00 by lde-san-          #+#    #+#             */
/*   Updated: 2025/04/02 22:00:41 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 0)
		return (1);
	else if (nb < 0 || nb > 12)
		return (0);
	else
	{
		while (nb > 0)
		{
			result = (result * nb);
			nb--;
		}
	}
	return (result);
}
/*
int	main( int arc, char *wordy[])
{
	int	result;

	(void)arc;
	result = ft_iterative_factorial(atoi(wordy[1]));
	printf("%d\n", result);
	return (0);
}*/
