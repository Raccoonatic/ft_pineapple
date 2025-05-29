/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 18:37:42 by lde-san-          #+#    #+#             */
/*   Updated: 2025/04/03 20:59:29 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb == 0)
		return (1);
	else if (nb < 0 || nb > 12)
		return (0);
	result = nb * ft_recursive_factorial(nb - 1);
	return (result);
}
/*
int	main( int arc, char *wordy[])
{
	int	result;

	(void)arc;
	result = ft_recursive_factorial(atoi(wordy[1]));
	printf("%d\n", result);
	return (0);
}*/
