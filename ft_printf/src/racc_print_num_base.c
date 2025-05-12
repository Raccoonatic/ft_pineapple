/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   racc_print_num_base.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 18:55:31 by lde-san-          #+#    #+#             */
/*   Updated: 2025/05/10 20:50:25 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	racc_putnbs(unsigned int n, int *counter, char *base)
{
	unsigned int	encrypter;

	encrypter = 0;
	while (base[encrypter])
	{
		encrypter++;
	}
	if (n >= encrypter)
	{
		racc_putnbs(n / encrypter, counter, base);
		racc_putnbs(n % encrypter, counter, base);
	}
	else
		racc_putchar(base[n], counter);
}
