/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_render.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 17:29:23 by lde-san-          #+#    #+#             */
/*   Updated: 2025/11/20 22:56:45 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

void	sl_push_bkgrnd_to_frame(t_imgdata *d, t_imgdata *s);
void    sl_push_tile_to_frame(char *dst, char *src, t_cord c);

int	sl_main_renderer(t_game *game) 
{
	t_cord	floor;

	sl_push_bkgrnd_to_frame(&game -> buf, &game -> bgr);
	sl_coordinate(&floor, 2, game, 0);
	sl_push_tile_to_frame(game -> buf.addr, game -> gr.addr, floor);
	mlx_put_image_to_window(game -> mlx, game -> win, game -> buf.main, 0, 0);
	mlx_do_sync(game -> mlx);
	return (0);
}

void	sl_push_tile_to_frame(char *dst, char *src, t_cord c)
{
	int		x;
	int		y;
	char	*d_ptr;
	char	*s_ptr;

	y = 0;
	while(y < c.th)
	{
		x = 0;
		while (x < c.tw)
		{
			s_ptr = src + (((y * c.tw) + x) * 4);
			d_ptr = dst + ((((c.y * TSZ) + y) * c.fw + ((c.x * TSZ) + x)) * 4);
			if (*(unsigned int *)s_ptr != 0x00FF00FF)
				*(unsigned int *)d_ptr = *(unsigned int *)s_ptr;
			x++;
		}
		y++;
	}
}

void	sl_push_bkgrnd_to_frame(t_imgdata *d, t_imgdata *s)
{
	int max_w;
	int max_h;
	char *d_ptr;
	char *s_ptr;

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
