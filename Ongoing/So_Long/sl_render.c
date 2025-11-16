/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_render.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 17:29:23 by lde-san-          #+#    #+#             */
/*   Updated: 2025/11/16 22:26:32 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

void    sl_push_bkgrnd_to_frame(t_imgdata *dst, t_imgdata *src);

int	sl_main_renderer(t_game *game) 
{
	sl_push_bkgrnd_to_frame(&game -> buf, &game -> bgr);
	mlx_put_image_to_window(game -> mlx, game -> win, game -> buf.main, 0, 0);
	return (0);
}

void	sl_push_bkgrnd_to_frame(t_imgdata *dst, t_imgdata *src)
{
	int max_w;
	int max_h;
	char *d_ptr;
	char *s_ptr;

	max_h = dst -> h;
	if (dst -> h > src -> h)
		max_h = src -> h;
	max_h--;
	while (max_h >= 0)
	{
		max_w = dst -> w;
		if (dst -> w > src -> w)
			max_w = src -> w;
		max_w--;
		while (max_w >= 0)
		{
			d_ptr = dst -> addr + (max_h * dst -> bpr) + (max_w * (dst -> bpx / 8));
			s_ptr = src -> addr + (max_h * src -> bpr) + (max_w * (src -> bpx / 8));
			*(unsigned int *)d_ptr = *(unsigned int *)s_ptr;
			max_w--;
		}
		max_h--;
	}
}
