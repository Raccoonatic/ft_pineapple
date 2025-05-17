/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   racc_format_checker.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 20:35:33 by lde-san-          #+#    #+#             */
/*   Updated: 2025/05/17 11:52:34 by jtorcate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	vibecheck(int n, int *counter);
static void	ptr(va_list arg, int *counter);

void	racc_format_check(va_list arg, char c, int *cnt)
{
	if (!arg)
		return ;
	if (c == '%')
		racc_putchar('%', cnt);
	if (c == 'c')
		racc_putchar(va_arg(arg, int), cnt);
	if (c == 's')
		racc_putstr(va_arg(arg, char *), cnt);
	if (c == 'p')
		ptr(arg, cnt);
	if (c == 'i' || c == 'd')
		vibecheck(va_arg(arg, int), cnt);
	if (c == 'u')
		racc_putnbs(va_arg(arg, unsigned int), cnt, "0123456789");
	if (c == 'x')
		racc_putnbs((unsigned int)(va_arg(arg, int)), cnt, "0123456789abcdef");
	if (c == 'X')
		racc_putnbs((unsigned int)(va_arg(arg, int)), cnt, "0123456789ABCDEF");
	return ;
}

static void	vibecheck(int n, int *counter)
{
	if (n < 0)
	{
		racc_putchar('-', counter);
		racc_putnbs((unsigned long long)(-n), counter, "0123456789");
		return ;
	}
	racc_putnbs((unsigned long long)(n), counter, "0123456789") ;
	return ;
}

static void	ptr(va_list arg, int *counter)
{
	uintptr_t	address;

	address = (uintptr_t)(va_arg(arg, void *));
	if (address == 0)
	{
		racc_putstr("(nil)", counter);
		return ;
	}
	racc_putstr("0x", counter);
	racc_putadrs(address, counter, "0123456789abcdef");
}
