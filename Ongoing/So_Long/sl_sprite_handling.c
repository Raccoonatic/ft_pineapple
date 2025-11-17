/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_sprite_handling.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 18:07:19 by lde-san-          #+#    #+#             */
/*   Updated: 2025/11/17 19:36:57 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

void	sl_ani_strip_alloc(int f_num, void **imgs, char **addrs)
{
	imgs = ft_calloc(f_num + 1, sizeof(void *));
	if (!imgs)
		sl_kill_the_game(g, 0, 1, 1);
	addrs = ft_calloc(f_num + 1, sizeof(char *));
	if (!addrs)
		sl_kill_the_game(g, 0, 1, 1);
	return ;
}

void	sl_strip_split(t_game g, t_imgdata *i, int f_num, int f_w)
{
	int	guide;
	int	*bpx;
	int *bpr;
	int *e;

	bpx = i -> fbpx;
	bpr = i -> fbpr;
	e = i -> fe;
	guide = 0;
	while (guide < f_num)
	{
		i -> frm[guide] = mlx_new_image(g -> mlx, f_w, TSZ);
		if (!img -> frm[guide])
			sl_kill_the_game(g, 0, 1, 1);
		i -> frad[guide] = mlx_get_data_addr(i -> frm[guide], bpx, bpr, e);
		sl_push_sprite_to_frame(guide, i -> frad[guide], i -> addr, f_w);
		guide++;
	}
	frm[guide] = NULL;
	frad[guide] = NULL;
	return ;
}

void	sl_push_sprite_to_frame(int y, char *dst, char *src, int f_w);
{
	char *d_ptr;
	char *s_ptr;

}
