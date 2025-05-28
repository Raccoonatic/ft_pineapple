
#include "ft_printf.h"

void	racc_putadrs(uintptr_t n, int *counter, char *base)
{
	uintptr_t	encrypter;

	encrypter = 0;
	while (base[encrypter])
	{
		encrypter++;
	}
	if (n >= encrypter)
	{
		racc_putadrs(n / encrypter, counter, base);
		racc_putadrs(n % encrypter, counter, base);
	}
	else
		racc_putchar(base[n], counter);
}
