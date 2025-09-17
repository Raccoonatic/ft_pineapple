/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   racc_printchars.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 22:02:41 by lde-san-          #+#    #+#             */
/*   Updated: 2025/08/05 20:28:06 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static int  racc_strcmp(char *s, char *icon);

void	racc_putchar(char c, int *counter)
{
	int	ret;

	ret = write(1, &c, 1);
	if (ret == 1)
		(*counter)++;
	if (ret == -1)
		*counter = -1;
}

void	racc_putstr(char *s, int mode, int *counter)
{
	int	guide;

	guide = 0;
	if (!s)
	{
		racc_putstr("(null)", 0, counter);
		return ;
	}
	if (mode == 0)
	{
		while (s[guide])
		{
			racc_putchar(s[guide], counter);
			guide++;
		}
	}
	else
	{
		if (racc_strcmp(s, "racc"))
			(*counter)+= write(1, "🦝", racc_strlen("🦝"));
		else if (racc_strcmp(s, "yep"))
			(*counter)+= write(1, "✅", racc_strlen("✅"));
		else if (racc_strcmp(s, "nope"))
			(*counter)+= write(1, "❌", racc_strlen("❌"));
		else
		        racc_putstr("emoji not set", 0, counter);
	}

}

static int	racc_strcmp(char *s, char *icon)
{
	size_t	guide;

	guide = 0;
	while (s[guide] && icon[guide] && s[guide] == icon[guide])
		guide++;
	if(!s[guide] && !icon[guide])
		return (1);
	return (0);
}
