/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_spalloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 18:30:04 by lde-san-          #+#    #+#             */
/*   Updated: 2025/09/18 21:16:44 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

char	*char_spalloc(size_t size)
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
/*It allocates a number of "size" spaces of *char size in memory as long
as the system architecture has enough space for it. Then it initializes
the memory area by filling it with spaces.*/
