/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 20:05:00 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/23 21:52:16 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		guide;
	int		src_len;
	char	*clone;

	guide = 0;
	src_len = 0;
	while (src[guide + src_len])
		src_len++;
	clone = (char *)malloc(src_len + 1 * sizeof (char));
	while (src[guide])
	{
		clone[guide] = src[guide];
		guide++;
	}
	clone[guide] = '\0';
	return (clone);
}
/*
#include <stdio.h>

int	main( int arc, char *wordy[])
{
	char	*clone;

	(void)arc;
	clone = ft_strdup(wordy[1]);
	printf("Original: %s\n", wordy[1]);
	printf("Cloned: %s\n", clone);
	return (0);
}*/
