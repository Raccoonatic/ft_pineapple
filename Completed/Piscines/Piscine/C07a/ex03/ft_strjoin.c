/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 19:02:36 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/25 00:12:49 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);
int		strings_len_aux(char *str);
void	str_copy(char *s1, char *s2, int guide);
int		str_len(int size, char **strs, char *sep);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		guide;
	int		total_len;
	char	*nustring;

	if (size == 0)
	{
		nustring = (char *)malloc(1 * sizeof (char));
		nustring[0] = '\0';
		return (nustring);
	}
	total_len = str_len(size, strs, sep);
	nustring = (char *)malloc(total_len * sizeof (char));
	guide = 0;
	while (guide < size)
	{
		if (guide == 0)
			str_copy(nustring, strs[guide], 0);
		else
			str_copy(nustring, strs[guide], strings_len_aux(nustring));
		if (guide != size - 1)
			str_copy(nustring, sep, strings_len_aux(nustring));
		guide++;
	}
	return (nustring);
}

int	str_len(int size, char **strs, char *sep)
{
	int	guide;
	int	strings_len;
	int	len_sep;

	guide = 0;
	strings_len = 0;
	while (guide < size)
	{
		strings_len += strings_len_aux(strs[guide]);
		guide++;
	}
	len_sep = strings_len_aux(sep);
	return (strings_len + ((size * len_sep) - len_sep) + 1);
}

int	strings_len_aux(char *str)
{
	int	guide;

	guide = 0;
	while (str[guide])
		guide++;
	return (guide);
}

void	str_copy(char *s1, char *s2, int guide)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		s1[i + guide] = s2[i];
		i++;
	}
	s1[i + guide] = '\0';
}
/*
#include <stdio.h>

int	main( int arc, char *wordy[])
{
	char	*separator = "||";
	char	*result;

	result = ft_strjoin(arc, wordy, separator);
	if (result[0] == '\0')
		printf("\nNULL freeable space available\n");
	printf("%s\n", result);
	return (0);
}*/
