/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_render.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 17:29:23 by lde-san-          #+#    #+#             */
/*   Updated: 2025/11/21 20:53:15 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

void    sl_clear_buffer(t_imgdata *img, int h);
void	sl_push_bkgrnd_to_frame(t_imgdata *d, t_imgdata *s);
void	sl_push_tile_to_frame(char *dst, char *src, t_cord c);

void	sl_main_renderer(t_game *game, t_imgdata *pst)
{
	t_cord	floor;
	t_cord	door;
	t_cord	plyr;

	sl_push_bkgrnd_to_frame(&game -> buf, &game -> bgr);
	sl_coordinate(&plyr, 3, game, 0);
	sl_push_tile_to_frame(game -> buf.addr, pst -> frad[pst -> crnt_frm], plyr);
	sl_coordinate(&door, 4, game, 0);
	if (game -> victory == 1)
		sl_push_tile_to_frame(game -> buf.addr, game -> door.addr, door);
	else
		sl_render_coins(game, &game -> ci, game -> ci.crnt_frm);
	sl_coordinate(&floor, 2, game, 0);
	sl_push_tile_to_frame(game -> buf.addr, game -> gr.addr, floor);
	mlx_put_image_to_window(game -> mlx, game -> win, game -> buf.main, 0, 0);
	mlx_do_sync(game -> mlx);
	if (game -> victory == 1 && game -> plyr.x == game -> exit_x
		&& game -> plyr.y == game -> exit_y)
		sl_win(game);
	return ;
}

void	sl_clear_buffer(t_imgdata *img, int h)
{
	char	*end;
	char	*start;

	start = img -> addr;
	end = (img -> addr) + (img -> bpr * h);
	while (start < end)
	{
		*(unsigned int *)start = 0x00000000;
		start += (img -> bpx / 8);
	}
	return ;
}

void	sl_push_tile_to_frame(char *dst, char *src, t_cord c)
{
	int		x;
	int		y;
	char	*d_ptr;
	char	*s_ptr;

	y = 0;
	while (y < c.th)
	{
		x = 0;
		while (x < c.tw)
		{
			s_ptr = src + (((y * c.tw) + x) * 4);
			d_ptr = dst + (((c.y + y) * c.fw + (c.x + x)) * 4);
			if (*(unsigned int *)s_ptr != 0x00FF00FF)
				*(unsigned int *)d_ptr = *(unsigned int *)s_ptr;
			x++;
		}
		y++;
	}
}

void	sl_push_bkgrnd_to_frame(t_imgdata *d, t_imgdata *s)
{
	int		max_w;
	int		max_h;
	char	*d_ptr;
	char	*s_ptr;

	max_h = d -> h;
	if (d -> h > s -> h)
		max_h = s -> h;
	max_h--;
	while (max_h >= 0)
	{
		max_w = d -> w;
		if (d -> w > s -> w)
			max_w = s -> w;
		max_w--;
		while (max_w >= 0)
		{
			d_ptr = d -> addr + (max_h * d -> bpr) + (max_w * (d -> bpx / 8));
			s_ptr = s -> addr + (max_h * s -> bpr) + (max_w * (s -> bpx / 8));
			*(unsigned int *)d_ptr = *(unsigned int *)s_ptr;
			max_w--;
		}
		max_h--;
	}
}
