/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:14:24 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/11 15:25:09 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	guide;

	guide = 0;
	while (src[guide])
	{
		dest[guide] = src[guide];
		guide++;
	}
	dest[guide] = '\0';
	return (dest);
}
/*
#include <unistd.h>

int	main(int arc, char *wordy[])
{
	int	guide;
	char	vessel[100];

	(void)arc;
	guide = 0;
	ft_strcpy(&vessel[0], wordy[1]);
	while (vessel[guide])
	{
		write (1, &vessel[guide], 1);
		guide++;
	}
	return (0);
}*/
