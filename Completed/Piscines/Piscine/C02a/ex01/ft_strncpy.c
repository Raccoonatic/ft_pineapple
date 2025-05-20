/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:29:46 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/11 21:28:15 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	guide;

	guide = 0;
	while (src[guide] && guide < n)
	{
		dest[guide] = src[guide];
		guide++;
	}
	while (guide < n)
	{
		dest[guide] = '\0';
		guide++;
	}
	return (dest);
}
/*
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main( int arc, char *wordy[])
{
	unsigned int	ink;
	char	vessel[100];
	int	guide;

	if (arc != 4)
	{
		printf("Incorrect number of arguments,\n");
		printf("\nCorrect form: \n");
		printf("\"dest_string\" \"src_string\" \"Char_exch_value\".\n");
		return (1);
	}
	else if (atoi(wordy[3]) < 0)
	{
		printf("Sorry, only positive vibes allowed\n");
		return (1);
	}
	else
	{
		guide = 0;
		while (wordy[1][guide])
		{
			vessel[guide] = wordy[1][guide];
			guide++;
		}
		vessel[guide] = '\0';
		guide = 0;
		ink = atoi(wordy[3]);
		ft_strncpy(&vessel[0], wordy[2], ink);
		while (vessel[guide])
		{
			write(1, &vessel[guide], 1);
			guide++;
		}
	}
	return (0);
}*/
