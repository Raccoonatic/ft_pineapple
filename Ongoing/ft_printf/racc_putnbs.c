
#include "ft_printf.h"

void	racc_putnbs(unsigned int n, int *counter, char *base)
{
	unsigned int	encrypter;

	encrypter = 0;
	while (base[encrypter])
	{
		encrypter++;
	}
	if (n >= encrypter)
	{
		racc_putnbs(n / encrypter, counter, base);
		racc_putnbs(n % encrypter, counter, base);
	}
	else
		racc_putchar(base[n], counter);
}
