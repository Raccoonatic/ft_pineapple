/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 17:52:48 by lde-san-          #+#    #+#             */
/*   Updated: 2025/11/13 19:49:42 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

int	main(int arc, char *wordy[])
{
	char **map;
	
	if (arc != 2)
		sl_fail(2, 2, "Incorrect argument count.");
	map = sl_text_to_map(wordy[1]);
	sl_check_map(map);
	sl_free_matrix(map);
	return (0);
}
