/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_map_init_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 20:08:46 by lde-san-          #+#    #+#             */
/*   Updated: 2025/11/16 23:12:56 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

void    sl_zeroing(t_game *game);
int		sl_count_rows(char **map);
int		sl_count_tiles(char **map, t_game *game, char tile);

char	sl_flast_char(char *str)
{
	int	guide;

	guide = 0;
	if (ft_strlen(str) > 1)
	{
		while (str[guide + 1])
			guide++;
	}
	return (str[guide]);
}

int	sl_count_tiles(char **map, t_game *game, char tile)
{
	int	y;
	int	x;
	int	count;

	y = 0;
	count = 0;
	while (map[y])
	{
		x = 0;
		while (map[y][x])
		{
			if (map[y][x] == tile)
				count++;
			x++;
		}
		y++;
	}
	if (game)
		game -> coins = count;
	return (count);
}

void	sl_null_images(t_game *game)
{
 // here set all image pointers to NULL;
}

void	sl_zeroing(t_game *game)
{
	sl_null_images(game);
	game -> frame = NULL;
	game -> coins = 0;
	game -> victory = 0;
	game -> exit_y = 0;
	game -> exit_x = 0;
	game -> moves = 0;
	game -> buf.x = 0;
	game -> buf.y = 0;
	game -> buf.index = 0;
	game -> p.x = 0;
	game -> p.y = 0;
	game -> p.index = 0;
	game -> i.x = 0;
	game -> i.y = 0;
	game -> i.index = 0;
	game -> g.x = 0;
	game -> g.y = 0;
	game -> g.index = 0;
	game -> bgr.x = 0;
	game -> bgr.y = 0;
	game -> bgr.index = 0;
	return ;
}

int	sl_count_rows(char **map)
{
	int	guide;

	guide = 0;
	while (map[guide])
		guide++;
	return (guide);
}
