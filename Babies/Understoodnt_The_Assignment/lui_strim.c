/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:46:48 by lde-san-          #+#    #+#             */
/*   Updated: 2025/04/15 16:21:12 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	guide;
	char	ptr[1];
	char	*trimmed;
	size_t	count_rm;

	guide = 0;
	count_rm = 0;
	while (s1[guide])
	{
		ptr[0] = set[guide];
		if (!(ft_strchr(s1, (int)ptr[0])))
		{
			guide++;
			continue ;
		}
		count_rm++;
		guide++;
	}
	trimmed = malloc(((ft_strlen(s1) - count_rm) + 1) * sizeof (char));
	guide = 0;
	while (*s1)
	{
		ptr[0] = *s1;
		if ((ft_strchr(set, (int)ptr[0])))
		{
			s1++;
			continue ;
		}
		trimmed[guide] = *s1;
		guide++;
		s1++;
	}
	trimmed[guide] = '\0';
	return (trimmed);
}

int main(int arc, char *wordy[])
{
    (void)arc;
    char *result = ft_strtrim((char const *)wordy[1], (char const *)wordy[2]);
    if (result)
    {
        printf("Original: \"%s\"\n", wordy[1]);
        printf("Trimmed : \"%s\"\n", result);
        free(result);
    }
    else
        printf("Memory allocation failed.\n");

    return 0;
}
