#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

int	main( int arc, char *wordy[])
{
	int	result;
	(void)arc;
	result = ft_strlen(wordy[1]);
	printf("%d\n", result);
	return(0);
}


