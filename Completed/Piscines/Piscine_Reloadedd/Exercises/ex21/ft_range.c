/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 20:04:58 by lde-san-          #+#    #+#             */
/*   Updated: 2025/04/06 20:37:14 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*result_array;
	int	guide;

	if (min >= max)
		return (NULL);
	result_array = malloc(((max - min) + 1) * sizeof(int));
	if (!result_array)
		return (NULL);
	guide = 0;
	while (min + guide <= max)
	{
		result_array[guide] = min + guide;
		guide++;
	}
	return (result_array);
}
/*
int	main(int arc, char *wordy[])
{	
	int	*result_array;
	int	guide;

	if(arc != 3)
		return(1);
	result_array = ft_range(atoi(wordy[1]) , 'a');
	guide = 0;
	while (atoi(wordy[1]) + guide <= atoi(wordy[2]))
	{
		printf("%d\n", result_array[guide]);
		guide++;
	}
	free(result_array);
	return(0);
}*/
