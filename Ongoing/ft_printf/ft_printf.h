
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdint.h>
# include <limits.h>

int		ft_printf(const char *format, ...);
void	racc_format_check(va_list arg, char c, int *counter);
void	racc_putchar(char c, int *counter);
void	racc_putstr(char *s, int *counter);
void	racc_putnbs(unsigned int n, int *counter, char *base);
void	racc_putadrs(uintptr_t n, int *counter, char *base);

#endif
