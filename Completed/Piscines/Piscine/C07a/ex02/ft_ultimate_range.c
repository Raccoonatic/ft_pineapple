/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:40:39 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/24 18:02:07 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	array_len;
	int	guide;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	array_len = max - min;
	*range = (int *)malloc(array_len * sizeof (int));
	if (*range == NULL)
		return (-1);
	guide = 0;
	while (guide < array_len)
	{
		(*range)[guide] = min + guide;
		guide++;
	}
	return (array_len);
}
/*
#include <stdio.h>

int	main( int arc, char *wordy[])
{
	int	*int_array;
	int	result;
	int	guide;

	(void)arc;
	guide = 0;
	result = ft_ultimate_range(&int_array, atoi(wordy[1]), atoi(wordy[2]));
	if (result <= 0)
	{
		printf("Algo de errado nao esta certo. Result = %d\n", result);
		return (1);
	}
	while (result - guide != 0)
	{
		printf("%d\n", int_array[guide]);
		guide++;
	}
	free(int_array);
	printf("The size of the array was %d slots."
			"\nFor a total of %lu bytes\n", result
				, result * sizeof (int));
	return (0);
}*/
