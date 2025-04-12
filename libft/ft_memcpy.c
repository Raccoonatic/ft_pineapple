/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 19:52:09 by lde-san-          #+#    #+#             */
/*   Updated: 2025/04/10 19:54:49 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	guide;

	guide = 0;
	while (guide < n)
	{
		((unsigned char *)dest)[guide] = ((unsigned char *)src)[guide];
		guide++;
	}
	return (dest);
}
