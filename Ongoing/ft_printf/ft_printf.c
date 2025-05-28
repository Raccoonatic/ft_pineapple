
#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		counter;

	va_start(arg, format);
	counter = 0;
	while (*format)
	{
		if (*format == '%')
			racc_format_check(arg, *(++format), &counter);
		else
			racc_putchar(*format, &counter);
		format++;
		if (counter == -1)
			return (-1);
	}
	va_end(arg);
	return (counter);
}
