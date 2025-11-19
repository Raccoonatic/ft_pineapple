/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 20:51:10 by lde-san-          #+#    #+#             */
/*   Updated: 2025/11/19 23:14:23 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

void		sl_free_matrix(char **matrix);
static void	sl_imgdata_wipe(t_game *g, t_imgdata *i);
static void	sl_free_img_matrix(t_game *g, void **matrix);


void sl_frink(t_game *g)
{
	if (g -> buf.main || g -> buf.frm || g -> buf.frad)
		sl_imgdata_wipe(g, &g -> buf);
	if (g -> bgr.main || g -> bgr.frm || g -> bgr.frad)
		sl_imgdata_wipe(g, &g -> bgr);
	if (g -> pi.main || g -> pi.frm || g -> pi.frad)
		sl_imgdata_wipe(g, &g -> pi);
	if (g -> pr.main || g -> pr.frm || g -> pr.frad)
		sl_imgdata_wipe(g, &g -> pr);
	if (g -> pj.main || g -> pj.frm || g -> pj.frad)
		sl_imgdata_wipe(g, &g -> pj);
	if (g -> ci.main || g -> ci.frm || g -> ci.frad)
		sl_imgdata_wipe(g, &g -> ci);
	if (g -> co.main || g -> co.frm || g -> co.frad)
		sl_imgdata_wipe(g, &g -> co);
	if (g -> d.main || g -> d.frm || g -> d.frad)
		sl_imgdata_wipe(g, &g -> d);
	if (g -> gr.main || g -> gr.frm || g -> gr.frad)
		sl_imgdata_wipe(g, &g -> gr);
	return ;
}

static void	sl_imgdata_wipe(t_game *g, t_imgdata *i)
{
	if (i -> main)
		mlx_destroy_image(g -> mlx, i -> main);
	if (i -> frm)
		sl_free_img_matrix(g, i -> frm);
	if (i -> frad)
		free(i -> frad);
	i->main = NULL;
	i->frm = NULL;
	i->frad = NULL;
	return ;
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

static void	sl_free_img_matrix(t_game *g, void **matrix)
{
	int	guide;

	if (!matrix)
		return ;
	guide = 0;
	while (matrix[guide])
	{
		mlx_destroy_image(g -> mlx, matrix[guide]);
		guide++;
	}
	free(matrix);
}
