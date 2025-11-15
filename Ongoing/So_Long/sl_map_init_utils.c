/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_map_init_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 20:08:46 by lde-san-          #+#    #+#             */
/*   Updated: 2025/11/15 13:25:47 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

char	sl_flast_char(char *str)
{
	int	guide;

	guide = 0;
	if(ft_strlen(str) > 1)
	{
		while (str[guide + 1])
			guide++
	}
	return(str[guide])
}
