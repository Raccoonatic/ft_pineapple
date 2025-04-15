/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:29:39 by lde-san-          #+#    #+#             */
/*   Updated: 2025/04/15 19:54:03 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*starter(char const *s1, char const *set);
static char	*ender(char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;
	char	*baby;
	size_t	guide;

	start = starter(s1, set);
	end = ender(s1, set);
	if (end <= start)
	{
		baby = ft_calloc(1, sizeof (char));
		return (baby);
	}
	baby = ft_calloc((((uintptr_t)end
					- (uintptr_t)start) + 1) + 1, sizeof (char));
	if (!baby)
		return (NULL);
	guide = 0;
	while (guide < ((uintptr_t)end - (uintptr_t)start) + 1)
	{
		baby[guide] = start[guide];
		guide++;
	}
	return (baby);
}

static char	*starter(char const *s1, char const *set)
{
	size_t		guide;
	char const	*start;

	guide = 0;
	if (!*set)
		return (&((char *)s1)[guide]);
	start = &s1[guide];
	while (s1[guide])
	{
		if (ft_strchr(set, ((int)(s1[guide]))))
		{
			guide++;
			continue ;
		}
		start = &s1[guide];
		break ;
	}
	return ((char *)start);
}

static char	*ender(char const *s1, char const *set)
{
	size_t		guide;
	char const	*end;

	guide = ft_strlen(s1);
	if (!*set)
		return (&((char *)s1)[guide]);
	while (guide >= 0)
	{
		if (guide == 0)
			return ((char *)s1);
		if (ft_strchr(set, ((int)(s1[guide]))))
		{
			end = &s1[guide];
			guide--;
			continue ;
		}
		end = &s1[guide];
		break ;
	}
	return ((char *)end);
}
