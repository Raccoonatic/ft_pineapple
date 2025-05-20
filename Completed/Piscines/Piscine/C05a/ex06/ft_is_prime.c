/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:13:57 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/21 20:12:34 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	cosient;

	if (nb <= 1)
	{
		return (0);
	}
	cosient = 2;
	while (cosient < nb)
	{
		if (nb % cosient == 0)
		{
			return (0);
		}
		cosient++;
	}
	return (1);
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main(int arc, char *wordy[])
{
	(void)arc;
	printf("%d\n",ft_is_prime(atoi(wordy[1])));
	return(0);
}*/
