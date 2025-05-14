/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 19:10:38 by lde-san-          #+#    #+#             */
/*   Updated: 2025/05/13 17:00:43 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

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
	}
	va_end(arg);
	return (counter);
}
