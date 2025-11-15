/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solong.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:21:23 by lde-san-          #+#    #+#             */
/*   Updated: 2025/11/15 22:41:39 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLONG_H
# define SOLONG_H

# include "./libft/includes/get_next_line_bonus.h"
# include "./libft/includes/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <stdio.h>
# include <errno.h>
# include <math.h>
# include <mlx.h>


# define RSET	"\033[0m" 
# define B_WI	"\033[1;37m"
# define LIME	"\033[38;2;0;255;0m"
# define BABY	"\033[38;2;0;255;247m"
# define BLOD	"\033[1;38;2;255;0;0m"
# define PURP	"\033[1;38;2;174;5;252m"
# define MINT	"\033[1;38;2;55;250;133m"
# define NEOR	"\033[3m\033[38;2;255;153;51m"

typedef enum e_keys
{
	K_W = 119,
	K_A = 97,
	K_S = 115,
	K_D = 100,
	K_ESC = 65307,
	K_LEF = 65361,
	K_RGT = 65363,
	K_UP = 65362,
	K_DOW = 65364
}	t_keys;

typedef struct s_player
{
	void	*img;
	int		y;
	int		x;
	double		vy;
	double		vx;
	int		grounded;
}	t_player;

typedef struct s_game
{
	void		*mlx;
	void		*mlx_win;
	char		*bkgrnd_theme;
	char		**map;
	int			height;
	int			width;
	int			coins;
	t_player	player;
}	t_game;

char	**sl_text_to_map(char *map_path);
char	sl_flast_char(char *str);
int		sl_count_rows(char **map);
int		sl_count_tiles(char **map, t_game *game, char tile);
void	sl_fail(int err_code, int exit_code, char *err_msg);
void	sl_free_matrix(char **matrix);
char	**sl_check_map(char **map_file, t_game *game);
char	**sl_path_check(char **map, t_game *game);

#endif
