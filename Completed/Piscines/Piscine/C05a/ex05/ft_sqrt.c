/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:37:14 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/21 20:15:53 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	root;

	root = 0;
	while (root <= nb)
	{
		if ((root * root) == nb)
		{
			return (root);
		}
		if (root == nb)
		{
			return (0);
		}
		root++;
	}
	return (0);
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main( int arc, char *wordy[])
{
	int	result;

	(void)arc;
	result = ft_sqrt(atoi(wordy[1]));
	printf("%d\n", result);
	return (0);
}*/
