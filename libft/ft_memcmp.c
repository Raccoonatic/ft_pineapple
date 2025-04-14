/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:05:10 by lde-san-          #+#    #+#             */
/*   Updated: 2025/04/14 17:12:42 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlib.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	guide;

	guide = 0;
	while (guide < n)
	{
		if (((unsigned char *)s1)[guide] != ((unsigned char *)s2)[guide])
			return ((int)((((unsigned char *)s1)[guide]) -
				((unsigned char *)s2)[guide]));
		guide++;
	}
	return (0);
}
