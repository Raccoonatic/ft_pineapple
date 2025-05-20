/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:19:27 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/19 14:22:20 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	guide;
	int	result;

	guide = 1;
	result = nb;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	while ((nb - guide) != 0)
	{
		result = result * (nb - guide);
		guide++;
	}
	return (result);
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main(int arc, char *wordy[])
{
	int	result;

	(void)arc;
	result = ft_iterative_factorial(atoi(wordy[1]));
	printf("%d\n", result);
	return (0);
}*/
