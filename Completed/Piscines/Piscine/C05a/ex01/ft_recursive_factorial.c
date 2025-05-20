/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:13:20 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/19 16:05:20 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;
	int	spring;

	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	if (nb == 1)
	{
		spring = 1;
	}
	else
	{
		spring = ft_recursive_factorial(nb - 1);
	}
	result = nb * spring;
	return (result);
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main(int arc, char *wordy[])
{
	int	factorial;

	(void)arc;
	factorial = t_recursive_factorial(atoi(wordy[1]));
	printf("%d\n", factorial);
	return (0);
}*/
