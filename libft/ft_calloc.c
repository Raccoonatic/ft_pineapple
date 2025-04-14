/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 18:29:10 by lde-san-          #+#    #+#             */
/*   Updated: 2025/04/14 19:30:10 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*allocated;
	size_t	mem_total_size;

	mem_total_size = nmemb * size;
	allocated = malloc(mem_total_size);
	if (!allocated)
		return (NULL);
	ft_bzero(allocated, mem_total_size);
	return (allocated);
}
