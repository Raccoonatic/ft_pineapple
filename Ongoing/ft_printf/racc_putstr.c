/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   racc_putstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 22:03:08 by lde-san-          #+#    #+#             */
/*   Updated: 2025/05/28 22:03:14 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
