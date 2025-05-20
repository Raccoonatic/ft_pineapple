/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 20:05:25 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/19 21:22:42 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (1);
	}
	if (index < 0)
	{
		return (-1);
	}
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main( int arc, char *wordy[])
{
	int	result;

	(void)arc;
	result = ft_fibonacci(atoi(wordy[1]));
	printf("%d\n", result);
	return (0);
}*/
