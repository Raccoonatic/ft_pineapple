/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_layer_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 15:43:26 by lde-san-          #+#    #+#             */
/*   Updated: 2025/11/16 23:15:45 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

static void sl_get_bkgrnd(t_game *g, int *bpx, int *bpr, int *e);

void sl_layer_init(t_game *game, int *bpx, int *bpr, int *e)
{
	int h;
	int w;

	h = game -> h;
	w = game -> w;
	game -> buf.main = mlx_new_image(game -> mlx, w, h);
	game -> buf.addr = mlx_get_data_addr(game -> buf.main, bpx, bpr, e);
	game -> buf.h = h;
	game -> buf.w = w;
	sl_get_bkgrnd(game, &game -> bgr.bpx, &game -> bgr.bpr, &game -> bgr.e);
//  NOTE! Remember that you want to make all images a tad bigger (convert input.xpm -scale 200% output.xpm) "ImageMagick"
//	sl_get_grnd(game, &game -> g.bpx, &game -> g.bpr, &game -> g.e);
}

static void sl_get_bkgrnd(t_game *g, int *bpx, int *bpr, int *e)
{
	void	*mlx;
	char	*theme;

	mlx = g -> mlx;
	theme = g -> theme;
	g -> bgr.main = mlx_xpm_file_to_image(mlx, theme, &g -> bgr.w, &g -> bgr.h);
	if (!g -> bgr.main)
		sl_kill_the_game(g, 0, 3, 1);
	g -> bgr.addr = mlx_get_data_addr(g -> bgr.main, bpx, bpr, e);
	sl_push_bkgrnd_to_frame(&g -> buf, &g -> bgr);
	return ;
}
