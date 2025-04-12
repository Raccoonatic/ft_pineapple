/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 17:27:54 by lde-san-          #+#    #+#             */
/*   Updated: 2025/04/12 21:08:15 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	guide;

	guide = 0;
	while (s1[guide] && s2[guide] && s1[guide] == s2[guide] && guide < n)
		guide++;
	return (((unsigned char)s1[guide]) - ((unsigned char)s2[guide]));
}
