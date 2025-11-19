/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_layer_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 15:43:26 by lde-san-          #+#    #+#             */
/*   Updated: 2025/11/19 23:20:55 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

static void sl_get_grnd(t_game *g, int *bpx, int *bpr, int *e);
static void sl_get_bkgrnd(t_game *g, int *bpx, int *bpr, int *e);

void sl_layer_init(t_game *g, int *bpx, int *bpr, int *e)
{
	int h;
	int w;

	h = g -> h;
	w = g -> w;
	g -> buf.main = mlx_new_image(g -> mlx, w, h);
	if (!g -> buf.main)
		sl_kill_the_game(g, 0, 4, 1);
	g -> buf.addr = mlx_get_data_addr(g -> buf.main, bpx, bpr, e);
	g -> buf.h = h;
	g -> buf.w = w;
	sl_get_bkgrnd(g, &g -> bgr.bpx, &g -> bgr.bpr, &g -> bgr.e);
	sl_get_grnd(g, &g -> gr.bpx, &g -> gr.bpr, &g -> gr.e);
}

static void sl_get_grnd(t_game *g, int *bpx, int *bpr, int *e)
{
	void    *mlx;
	char	*t;
	int		frm_num;
	t_cord	floor;
	
	t = GRND;
	mlx = g -> mlx;
	g -> gr.main = mlx_xpm_file_to_image(mlx, t, &g -> gr.w, &g -> gr.h);
	if (!g -> gr.main)
		sl_kill_the_game(g, 0, 4, 1);	
	frm_num = (g -> gr.w / TSZ);
	g -> gr.addr = mlx_get_data_addr(g -> gr.main, bpx, bpr, e);
	sl_ani_strip_alloc(g, frm_num, &g -> gr.frm, &g -> gr.frad);
	sl_strip_split(g, &g -> gr, frm_num, TSZ);
	sl_build_terrain(g, g -> map, &g -> gr);
	sl_coordinate(&floor, 2, g, 0);
	sl_push_tile_to_frame(g -> buf.addr, g -> gr.addr, floor);
	return ;
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
