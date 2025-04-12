/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 17:55:41 by lde-san-          #+#    #+#             */
/*   Updated: 2025/04/11 20:21:24 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	guide;

	srclen = 0;
	dstlen = 0;
	guide = 0;
	while (src[srclen])
		srclen++;
	while (dst[dstlen] && dstlen < size)
		dstlen++;
	if (dstlen >= size)
		return (size + srclen);
	else
	{
		while (src[guide] && ((dstlen + guide) < size - 1))
		{
			dst[dstlen + guide] = src[guide];
			guide++;
		}
		dst[dstlen + guide] = '\0';
	}
	return (dstlen + srclen);
}
