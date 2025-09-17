/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 18:33:49 by lde-san-          #+#    #+#             */
/*   Updated: 2025/08/05 19:57:39 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>
# include <limits.h>

# define RSET	"\033[0m"
# define B_WI    "\033[1;37m"
# define LIME	"\033[38;2;0;255;0m"
# define BLOD	"\033[1;38;2;255;0;0m"
# define NEOR	"\033[3m\033[38;2;255;153;51m"
# define MINT	"\033[38;2;55;250;133;48;2;0;0;0m"

int		racc_print(const char *format, ...);
void	racc_format_check(va_list arg, char c, int *counter);
void	racc_putchar(char c, int *counter);
void	racc_putstr(char *s, int mode, int *counter);
void	racc_putnbs(unsigned int n, int *counter, char *base);
void	racc_putadrs(uintptr_t n, int *counter, char *base);
int		racc_strlen(char *str);

#endif
