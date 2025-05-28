/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 22:04:52 by lde-san-          #+#    #+#             */
/*   Updated: 2025/05/28 22:04:56 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
