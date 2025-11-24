/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_player.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 20:58:45 by lde-san-          #+#    #+#             */
/*   Updated: 2025/11/23 23:46:21 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

void				sl_grounded_check(char **map, t_plyr *p, int y, int x);
static t_imgdata    *ls_get_pidx(t_game *g, t_state state);

t_imgdata   *ls_get_pst(t_game *g, int grnd, t_state *state)
{
	if(grnd && (((*state) == FLY || (*state) == JUMP) || ((*state) == LAND
		&& g -> pj.crnt_frm < 10)))
		*state = LAND;
	else if (grnd || g -> pj.crnt_frm >= 10)
		*state = IDLE;
	else if (!grnd && (((*state) != FLY && (*state) != JUMP)
		|| g -> pj.crnt_frm <= 2 || g -> pj.crnt_frm > 5))
		*state = JUMP;
	else
		*state = FLY;
	return (ls_get_pidx(g, *state));
}

static t_imgdata	*ls_get_pidx(t_game *g, t_state state)
{
	if (state == IDLE)
	{
		g -> pj.crnt_frm = 0;
		g -> pi.crnt_frm++;
		if (g -> pi.crnt_frm >= g -> pi.mx_index)
			g -> pi.crnt_frm = 0;
		return (&g -> pi);
	}
	g -> pj.crnt_frm++;
	if (state == FLY && g -> pj.crnt_frm > 5)
		g -> pj.crnt_frm = 3;
	return (&g -> pj);
}

void	sl_grounded_check(char **map, t_plyr *p, int y, int x)
{
	if (!map || !map[y])
		return ;
	if (map[y + 1][x] != '1')
		p -> grounded = 0;
	else 
		p -> grounded = 1;
	return ;
}
