/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 22:02:05 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/24 15:39:35 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*int_array;
	int	guide;
	int	array_len;

	if (min >= max)
		return (NULL);
	array_len = 0;
	while ((min + array_len) < max)
		array_len++;
	int_array = (int *)malloc(array_len * sizeof (int));
	if (int_array == NULL)
		return (NULL);
	guide = 0;
	while (guide < array_len)
	{
		int_array[guide] = min + guide;
		guide++;
	}
	return (int_array);
}
/*
#include <stdio.h>

int	main( int arc, char *wordy[])
{
	int	*int_array;
	int	guide;
	int	arraylen;

	(void)arc;
	guide = 0;
	int_array = ft_range(atoi(wordy[1]), atoi(wordy[2]));
	arraylen = (atoi(wordy[2]) - atoi(wordy[1]));
	while (arraylen - guide != 0)
	{
		printf("%d\n", int_array[guide]);
		guide++;
	}
	free(int_array);
	return (0);
}*/
