/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   racc_print_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 20:56:04 by lde-san-          #+#    #+#             */
/*   Updated: 2025/05/10 20:45:26 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	racc_putstr(char *s, int *counter)
{
	int	guide;

	guide = 0;
	if (!s)
	{
		racc_putstr("(null)", counter);
		return ;
	}
	while (s[guide])
	{
		racc_putchar(s[guide], counter);
		guide++;
	}
}
