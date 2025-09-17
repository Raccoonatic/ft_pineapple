/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   racc_printchars.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 22:02:41 by lde-san-          #+#    #+#             */
/*   Updated: 2025/09/17 15:50:08 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static int  racc_strcmp(char *s, char *icon);

void	racc_putchar(int fd, char c, int *counter)
{
	int	ret;

	ret = write(fd, &c, 1);
	if (ret == 1)
		(*counter)++;
	if (ret == -1)
		*counter = -1;
}

void	racc_putstr(int fd, char *s, int mode, int *counter)
{
	int	guide;

	guide = 0;
	if (!s)
	{
		racc_putstr(fd, "(null)", 0, counter);
		return ;
	}
	if (mode == 0)
	{
		while (s[guide])
		{
			racc_putchar(fd, s[guide], counter);
			guide++;
		}
	}
	else
	{
		if (racc_strcmp(s, "racc"))
			(*counter)+= write(fd, "🦝", racc_strlen("🦝"));
		else if (racc_strcmp(s, "yep"))
			(*counter)+= write(fd, "✅", racc_strlen("✅"));
		else if (racc_strcmp(s, "nope"))
			(*counter)+= write(fd, "❌", racc_strlen("❌"));
		else
		        racc_putstr(2, "emoji not set", 0, counter);
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
