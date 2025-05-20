/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:17:40 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/19 13:40:05 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	guide;

	guide = 0;
	len_dest = 0;
	len_src = 0;
	while (dest[len_dest] && len_dest < size)
		len_dest++;
	while (src[len_src])
		len_src++;
	if (size <= len_dest)
	{
		return (size + len_src);
	}
	while (src[guide] && (len_dest + guide) < (size - 1))
	{
		dest[len_dest + guide] = src[guide];
		guide++;
	}
	dest[len_dest + guide] = '\0';
	return (len_dest + len_src);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int arc, char *wordy[])
{
	unsigned int	size;
	char			vessel[20];
	int				guide;
	int				intended_len;

	(void)arc;
	if (atoi(wordy[3]) < 0)
	{
		printf("Sorry, only positive vibes allowed");
		return (1);
	}
	size = atoi(wordy[3]);
	guide = 0;
	while (wordy[1][guide])
	{
		vessel[guide] = wordy[1][guide];
		guide++;
	}
	vessel[guide] = '\0';
	guide = 0;
	intended_len = ft_strlcat(vessel, wordy[2], size);
	printf("\nThis is the result of the function: \"%s\"\n", vessel);
	printf("\nThe intended lenght was %u characters.\n", intended_len);
	return (0);
}*
