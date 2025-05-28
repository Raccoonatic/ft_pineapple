
#include "ft_printf.h"

void	racc_putstr(char *s, int *counter)
{
	int	guide;

	guide = 0;
	if (!s)
	{
		racc_putstr("(null)", counter);
		return ;
	}
	while (s[guide])
	{
		racc_putchar(s[guide], counter);
		guide++;
	}
}
