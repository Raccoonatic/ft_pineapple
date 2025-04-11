/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 21:21:26 by lde-san-          #+#    #+#             */
/*   Updated: 2025/04/11 17:52:47 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	guide;

	srclen = 0;
	guide = 0;
	while (src[srclen])
		srclen++;
	if (size != 0)
	{
		while (src[guide] && guide < size - 1)
		{
			dst[guide] = src[guide];
			guide++;
		}
		dst[guide] = '\0';
	}
	return (srclen);
}
