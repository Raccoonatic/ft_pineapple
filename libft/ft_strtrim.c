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
		ptr[0] = s1[guide];
		if (!(ft_strchr(set, (int)ptr[0])))
		{
			guide++;
			continue;
		}
		count_rm++;
		guide++;
	}
	trimmed = malloc(((ft_strlen(s1) - count_rm) + 1) * sizeof (char));
	guide = 0;
	while (*s1)
	{
		ptr[0] = *s1;
		if (!(ft_strchr(set, (int)ptr[0])))
		{
			s1++;
			continue;
		}
		trimmed[guide] = *s1;
		guide++;
		s1++;
	}
	trimmed[guide] = '\0';
	return (trimmed);
}
