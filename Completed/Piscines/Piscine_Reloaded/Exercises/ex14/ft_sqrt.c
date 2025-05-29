/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 21:01:44 by lde-san-          #+#    #+#             */
/*   Updated: 2025/04/03 21:25:44 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	result;

	result = 1;
	if (nb == 0)
		return (0);
	else if (nb == 1)
		return (1);
	while (result * result <= nb)
	{
		if (result * result == nb)
			return (result);
		result++;
	}
	return (0);
}
/*
int	main( int arc, char *wordy[])
{
	int	result;

	(void)arc;
	result = ft_sqrt(atoi(wordy[1]));
	printf("%d\n", result);
	return (0);
}*/
