/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_coordinate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 21:41:33 by lde-san-          #+#    #+#             */
/*   Updated: 2025/11/19 19:22:18 by lde-san-         ###   ########.fr       */
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
	return ;
}
