/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 12:02:28 by lde-san-          #+#    #+#             */
/*   Updated: 2025/04/13 12:34:06 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	guide;

	guide = 0;
	while (guide < n)
	{
		if (((unsigned char *)s)[guide] == (unsigned char)c)
			return ((void *)&(((unsigned char *)s)[guide]));
		guide++;
	}
	return (NULL);
}
