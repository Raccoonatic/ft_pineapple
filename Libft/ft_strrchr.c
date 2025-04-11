/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 21:19:17 by lde-san-          #+#    #+#             */
/*   Updated: 2025/04/11 21:32:00 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strrchr(const char *s, int c)
{
	int	slen;
	char	*found;

	slen = 0;
	while (s[slen])
		slen++;
	while (slen > 0 && *s != c)
	{
		*found = s[slen];
		slen--;
	}
	if (*s == c)
		return (found);
	return (NULL);
}
