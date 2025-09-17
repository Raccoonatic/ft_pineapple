/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   racc_printnbs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 22:02:56 by lde-san-          #+#    #+#             */
/*   Updated: 2025/09/17 15:52:35 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	racc_putadrs(int fd, uintptr_t n, int *counter, char *base)
{
	uintptr_t	encrypter;

	encrypter = 0;
	while (base[encrypter])
		encrypter++;
	if (n >= encrypter)
	{
		racc_putadrs(fd, n / encrypter, counter, base);
		racc_putadrs(fd, n % encrypter, counter, base);
	}
	else
		racc_putchar(fd, base[n], counter);
}

void	racc_putnbs(int fd, unsigned int n, int *counter, char *base)
{
	unsigned int	encrypter;

	encrypter = 0;
	while (base[encrypter])
		encrypter++;
	if (n >= encrypter)
	{
		racc_putnbs(fd, n / encrypter, counter, base);
		racc_putnbs(fd, n % encrypter, counter, base);
	}
	else
		racc_putchar(fd, base[n], counter);
}
