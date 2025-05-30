/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   racc_format_checker.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 20:35:33 by lde-san-          #+#    #+#             */
/*   Updated: 2025/05/10 20:52:00 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

static unsigned int	vibecheck(int n, int *counter);
static void			ptr(va_list arg, int *counter);

void	racc_format_check(va_list arg, char c, int *cnt)
{
	if (c == '%')
		racc_putchar('%', cnt);
	if (c == 'c')
		racc_putchar(va_arg(arg, int), cnt);
	if (c == 's')
		racc_putstr(va_arg(arg, char *), cnt);
	if (c == 'p')
		ptr(arg, cnt);
	if (c == 'i' || c == 'd')
		racc_putnbs(vibecheck(va_arg(arg, int), cnt), cnt, "0123456789");
	if (c == 'u')
		racc_putnbs(va_arg(arg, unsigned int), cnt, "0123456789");
	if (c == 'x')
		racc_putnbs(va_arg(arg, unsigned int), cnt, "0123456789abcdef");
	if (c == 'X')
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
		racc_putstr("(nil)", counter);
		return ;
	}
	racc_putstr("0x", counter);
	racc_putadrs(address, counter, "0123456789abcdef");
}
