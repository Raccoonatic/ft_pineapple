/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:20:37 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/22 17:53:02 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb);
int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	int	vibe_check;

	vibe_check = ft_is_prime(nb);
	if (vibe_check == 1)
	{
		return (nb);
	}
	else
	{
		nb = ft_find_next_prime(nb + 1);
	}
	return (nb);
}

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
	printf("%d\n", ft_find_next_prime(atoi(wordy[1])));
	return (0);
}*/
