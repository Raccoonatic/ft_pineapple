#include "ftlib.h"

char 	*strnstr(const char *big, const char *little, size_t len)
{
	size_t	guidea;
	size_t	guideb;
	char	*start_little;
	size_t	little_len

	guide = 0;
	little_len = 0;

	while(little[little_len])
		little_len++;
	while (big[guidea] && guidea < len)
	{
		guideb = 0;
		if (big[guidea] == little[guideb])
		{
			start_little = &big[guide];
			while (big[guidea + guideb] == little[guideb])
			guideb++;
	}


}
