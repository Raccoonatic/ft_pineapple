/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   racc_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 22:00:55 by lde-san-          #+#    #+#             */
/*   Updated: 2025/09/17 15:36:59 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	racc_print(int fd, const char *format, ...)
{
	va_list	arg;
	int		counter;

	va_start(arg, format);
	counter = 0;
	while (*format)
	{
		if (*format == '%')
			racc_format_check(fd, arg, *(++format), &counter);
		else
			racc_putchar(fd, *format, &counter);
		format++;
		if (counter == -1)
			break ;
	}
	va_end(arg);
	return (counter);
}
