/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   racc_printchars.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 22:02:41 by lde-san-          #+#    #+#             */
/*   Updated: 2025/06/20 17:53:49 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	racc_putchar(char c, int *counter)
{
	int	ret;

	ret = write(1, &c, 1);
	if (ret == 1)
		(*counter)++;
	if (ret == -1)
		*counter = -1;
}

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
