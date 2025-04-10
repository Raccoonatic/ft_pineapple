/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 20:13:47 by lde-san-          #+#    #+#             */
/*   Updated: 2025/04/10 21:19:43 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	guide;

	if ((uintptr_t)src == (uintptr_t)dest)
		return (dest);
	else if ((uintptr_t)src < (uintptr_t)dest)
	{
		guide = n;
		while (guide > 0)
		{
			guide--;
			((unsigned char *)dest)[guide] = ((unsigned char *)src)[guide];
		}
	}
	else
	{
		guide = 0;
		while (guide < n)
		{
			((unsigned char *)dest)[guide] = ((unsigned char *)src)[guide];
			guide++;
		}
	}
	return (dest);
}
