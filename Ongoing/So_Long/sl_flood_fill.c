/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_flood_fill.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 09:25:23 by lde-san-          #+#    #+#             */
/*   Updated: 2025/11/15 13:24:57 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

char	**sl_path_check(char **map)
{
	char	**new_map;
	int		guide;
	
	new_map = sl_mapdup(map);
	sl_flood_fill
}

static char	**sl_mapdup(char **map)
{
	char	**new_map;

	new_map = ft_calloc((sl_count_rows(map) + 1), sizeof(char *))
	if (!new_map)
	{
		sl_free_matrix(map);
		sl_fail(1, 1, "Memory allocation failed on "B_WI" sl_mapdup");
	}
	guide = 0;
	while (map[guide])
	{
		new_map[guide] = ft_strdup(map[guide]);
		if(!new_map[guide])
		{
			sl_free_matrix(new_map);
			sl_free_matrix(map);
			sl_fail(1, 1, "Memory allocation failed on "B_WI" ft_strdup");
		}
		guide++;
	}
	return (new_map);
}
