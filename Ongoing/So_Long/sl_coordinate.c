/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_coordinate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 21:41:33 by lde-san-          #+#    #+#             */
/*   Updated: 2025/11/21 21:14:24 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

void	sl_coordinate(t_cord *vessel, int c_unit, t_game *g, int ctrl)
{
	if (c_unit == 1)
	{
		vessel -> fw = g -> w;
		vessel -> th = TSZ;
		vessel -> tw = TSZ;
		vessel -> x = ctrl;
	}
	if (c_unit == 2)
	{
		vessel -> fw = g -> w;
		vessel -> th = g -> h;
		vessel -> tw = g -> w;
		vessel -> x = ctrl;
		vessel -> y = ctrl;
	}
	if (c_unit == 3)
	{
		vessel -> fw = g -> w;
		vessel -> th = TSZ;
		vessel -> tw = TSZ;
		vessel -> x = g -> plyr.x * TSZ;
		vessel -> y = g -> plyr.y * TSZ;
	}
	if (c_unit == 4)
	{
		vessel -> fw = g -> w;
		vessel -> th = DSZ;
		vessel -> tw = DSZ;
		vessel -> x = g -> exit_x * TSZ;
		vessel -> y = g -> exit_y * TSZ;
	}
	if (c_unit == 5)
	{
		vessel -> fw = g -> w;
		vessel -> th = TSZ;
		vessel -> tw = CSZ;
		vessel -> x = ctrl + (CSZ / 2);
	}
	return ;
}
