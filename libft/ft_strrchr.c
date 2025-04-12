/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 21:19:17 by lde-san-          #+#    #+#             */
/*   Updated: 2025/04/12 17:25:49 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	slen;

	slen = 0;
	while (s[slen])
		slen++;
	while (slen >= 0 && s[slen] != c)
		slen--;
	if (s[slen] == c)
		return ((char *)&s[slen]);
	return (NULL);
}
