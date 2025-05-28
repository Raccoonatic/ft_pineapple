/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   racc_putadrs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 22:02:26 by lde-san-          #+#    #+#             */
/*   Updated: 2025/05/28 22:02:30 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	racc_putadrs(uintptr_t n, int *counter, char *base)
{
	uintptr_t	encrypter;

	encrypter = 0;
	while (base[encrypter])
	{
		encrypter++;
	}
	if (n >= encrypter)
	{
		racc_putadrs(n / encrypter, counter, base);
		racc_putadrs(n % encrypter, counter, base);
	}
	else
		racc_putchar(base[n], counter);
}
