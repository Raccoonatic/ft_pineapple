/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 18:30:04 by lde-san-          #+#    #+#             */
/*   Updated: 2025/09/20 21:59:15 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

char	*ps_spalloc(size_t size)
{
	char	*allocated;
	size_t	guide;

	guide = 0;
	if (size == 0)
		return(NULL);
	allocated = malloc((size * sizeof(char)) + 1);
	if (!allocated)
		return(NULL);
	while (guide < size)
	{
		allocated[guide] = ' ';
		guide++;
	}
	allocated[guide] = '\0';
	return (allocated);
}
/*It allocates a number of "size" spaces of "char" size in memory. Then it 
initializes the memory area by filling it with spaces.*/

size_t	ps_strlen(char *str)
{
	size_t	counter;

	counter = 0;
	while (str[counter])
		counter++;
	return (counter);
}
/*Calculates the length of a "Valid" C string. Excluding the \0 at the end*/

void fail(void)
{
	racc_print(2,BLOD"Error\n");
	exit(1);
}

/*Prints Error\n to the stderror, and then exits with the EXIT_FAILURE signal*/
