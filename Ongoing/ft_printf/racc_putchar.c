
#include "ft_printf.h"

void	racc_putchar(char c, int *counter)
{
	int	ret;

	ret = write(1, &c, 1);
	if (ret == 1)
		(*counter)++;
	if (ret == -1)
		*counter = -1;
}
