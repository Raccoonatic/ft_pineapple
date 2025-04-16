/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 20:01:53 by lde-san-          #+#    #+#             */
/*   Updated: 2025/04/15 21:30:55 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlib.h"

char	**ft_split(char const *s, char c)
{
	size_t	str_cnt;
	char	**godarr;
	
	str_cnt = string_counter(s, c);
	if (str_cnt == 0)
		return(NULL);
	godarr = matrix_alloc(s, c, str_cnt); 
}

static size_t	string_counter(char const *s, char c)
{
	size_t guide;
	size_t instances;
	
	guide = 0;
	instances = 1;
	while (s[guide] == c)
		guide++;
	if (!s[guide])
		return (0);
	while (s[guide])
	{			
		if (s[guide] == c && s[guide + 1] != c && s[guide + 1] != '\0')
			instances++;
		guide++;
	}
	return (instances);
}


static size_t	str_len(char const *s, char c, size_t guide)
{
	size_t	marker;
	size_t	index;
	size_t	len;

	start = &((char *)s);
	index = 0;
	marker = 0;
	while(s[index] == c)
		index++;
	while(marker < guide)
	{
		if(s[index] == c && s[index + 1] != c)
			marker++;
		if (s[index + 1])
		{
			marker++;
			break ;
		}
		index++
	}
	len = 0;
	while(s[index] != c && s[index])
	{
		index++;
		len++;
	}
	return (len);
}

static char	**matrix_alloc(char const *s, char c, size_t str_cnt)
{
	char	**main_arr;
	size_t	guide;
	**main_arr = ft_calloc((str_cnt + 1) * sizeof (char));
	main_arr[str_cnt + 1] = NULL;
	guide = 0;
	while (guide < str_cnt)
	{
		main_arr[guide] = ft_calloc(str_len(s, c, guide) * sizeof (char));
		if (!main_arr[guide])
			free(main_arr[guide]);
		guide++;
	}








