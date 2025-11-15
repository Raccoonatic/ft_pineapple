/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 17:52:48 by lde-san-          #+#    #+#             */
/*   Updated: 2025/11/15 10:13:52 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

int	main(int arc, char *wordy[])
{
	t_game game;
	
	if (arc < 2 || arc > 3)
		sl_fail(2, 2, "Incorrect argument count.");
	game.bkgrnd_theme = "./assets/background/Herculy.xpm"
	if (arc == 3)
		game.bkgrnd_theme = wordy[2];
	game.map = sl_check_map(sl_text_to_map(wordy[1]));
	sl_free_matrix(game.map);
	return (0);
}
