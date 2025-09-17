/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   racc_format_check.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 22:02:11 by lde-san-          #+#    #+#             */
/*   Updated: 2025/08/05 20:05:30 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static unsigned int	vibecheck(int n, int *counter);
static void			ptr(va_list arg, int *counter);

void	racc_format_check(va_list arg, char c, int *cnt)
{
	if (c == '%')
		racc_putchar('%', cnt);
	else if (c == 'c')
		racc_putchar(va_arg(arg, int), cnt);
	else if (c == 's')
		racc_putstr(va_arg(arg, char *), 0, cnt);
	else if (c == 'e')
		racc_putstr(va_arg(arg, char *), 1, cnt);
	else if (c == 'p')
		ptr(arg, cnt);
	else if (c == 'i' || c == 'd')
		racc_putnbs(vibecheck(va_arg(arg, int), cnt), cnt, "0123456789");
	else if (c == 'u')
		racc_putnbs(va_arg(arg, unsigned int), cnt, "0123456789");
	else if (c == 'x')
		racc_putnbs(va_arg(arg, unsigned int), cnt, "0123456789abcdef");
	else if (c == 'X')
		racc_putnbs(va_arg(arg, unsigned int), cnt, "0123456789ABCDEF");
	return ;
}

static unsigned int	vibecheck(int n, int *counter)
{
	if (n < 0)
	{
		racc_putchar('-', counter);
		return ((unsigned int)(-n));
	}
	return ((unsigned int)n);
}

static void	ptr(va_list arg, int *counter)
{
	uintptr_t	address;

	address = (uintptr_t)(va_arg(arg, void *));
	if (address == 0)
	{
		racc_putstr("(nil)", 0, counter);
		return ;
	}
	racc_putstr("0x", 0, counter);
	racc_putadrs(address, counter, "0123456789abcdef");
}
