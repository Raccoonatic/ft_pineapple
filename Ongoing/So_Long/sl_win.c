/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_win.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 19:30:27 by lde-san-          #+#    #+#             */
/*   Updated: 2025/11/22 20:44:59 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.c"

void	sl_win(t_game *g)
{
	char		*thanks;
	t_imgdata	img;
	int			x;
	long long	rec;

	thanks = THXS;
	img.main = mlx_xpm_file_to_image(g -> mlx, thanks, &img.w, &img.h);
	if (!img.main)
		sl_kill_the_game(g, 1, 0, 0);
	img.addr = mlx_get_data_addr(img.main, &img.bpx, &img.bpr, &img.e);
	x = (g -> w / 2) - (img.w / 2);
	rec = sl_now();
	sl_win_loop(g, &img, x, rec);
	mlx_destroy_image(g->mlx, img.main);
	sl_kill_the_game(g, 1, 0, 0);
}

static void sl_win_loop(t_data *g, t_imgdata *img, int x, long long rec)
{
	int		middle_top;
	double	y;
	int		delay;

	middle_top = (g -> h / 2) - (img -> h / 2);
	y = g -> h + 1;

	while(sl_now() - rec < 7000)
	{
		delay = 0;
		if (y > middle_top)
		{
			mlx_put_image_to_window(g -> mlx, g -> win, img -> main, x, (int)y);
			y -= 0.33;
		}
	}
	return ;
}

