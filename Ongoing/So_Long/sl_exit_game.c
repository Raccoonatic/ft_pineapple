/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_exit_game.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 19:17:21 by lde-san-          #+#    #+#             */
/*   Updated: 2025/11/15 21:58:36 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

void	sl_free_matrix(char **matrix);

void	sl_fail(int err_code, int exit_code, char *err_msg)
{
	if (err_code != 0)
		racc_print(2, BLOD"Error\n"RSET);
	if (err_code == 1)
		racc_print(2, PURP"%e %s\n", "racc", err_msg);
	if (err_code == 2)
	{
		racc_print(2, PURP"%e %s\n", "racc", err_msg);
		racc_print(1, BABY"Usage: "MINT"./so_long "NEOR"map_path"LIME".ber\n");
	}
	if (err_code == 0)
		racc_print(2, LIME"%e Congrats! %s\n", "racc", err_msg);
	racc_print(1, RSET);
	exit(exit_code);
}

void	sl_free_matrix(char **matrix)
{
	int	guide;

	if (!matrix)
		return ;
	guide = 0;
	while (matrix[guide])
	{
		free(matrix[guide]);
		guide++;
	}
	free(matrix);
}
