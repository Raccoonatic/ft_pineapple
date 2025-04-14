#include "ftlib.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	guide;

	guide = 0;
	while (guide < n)
	{
		if (((unsigned char *)s1)[guide] != ((unsigned char *)s2)[guide])
			return ((int)((((unsigned char *)s1)[guide]) - ((unsigned char *)s2)[guide]))
		guide++;
	}
	return (0);
}
