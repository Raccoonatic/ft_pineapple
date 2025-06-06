/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   racc_print_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 20:51:47 by lde-san-          #+#    #+#             */
/*   Updated: 2025/05/10 20:44:40 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	racc_putchar(char c, int *counter)
{
	int	ret;

	ret = write(1, &c, 1);
	if (ret == 1)
		(*counter)++;
	if (ret == -1)
		*counter = -1;
}
