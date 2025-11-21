/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solong.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:21:23 by lde-san-          #+#    #+#             */
/*   Updated: 2025/11/21 20:58:32 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLONG_H
# define SOLONG_H

// Includes:
# include "./libft/includes/get_next_line_bonus.h"
# include "./libft/includes/libft.h"
# include <sys/time.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <stdio.h>
# include <math.h>
# include <mlx.h>

// Text Color:
# define RSET	"\033[0m" 
# define B_WI	"\033[1;37m"
# define LIME	"\033[38;2;0;255;0m"
# define BABY	"\033[38;2;0;255;247m"
# define BLOD	"\033[1;38;2;255;0;0m"
# define PURP	"\033[1;38;2;174;5;252m"
# define MINT	"\033[1;38;2;55;250;133m"
# define NEOR	"\033[3m\033[38;2;255;153;51m"

// Tile size definition:
# define TSZ	96
# define CSZ	48
# define DSZ	108

// Textures Path:
# define BKND	"./assets/background/Herculy.xpm"
# define GRND	"./assets/Ground/floor.xpm"
# define PLYI	"./assets/Character/fox_idle.xpm"
# define PLYJ   "./assets/Character/Fox_jump.xpm"
# define COIN	"./assets/Items/coin.xpm"
# define DOOR	"./assets/Items/door.xpm"

// Data type definitions
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

typedef struct s_plyr
{
	int		y;
	int		x;
	int		grounded;
}	t_plyr;

typedef struct s_cord
{
	int	fh;
	int	fw;
	int	th;
	int	tw;
	int	x;
	int	y;
}	t_cord;

typedef struct s_imgdata
{
	void	*main;
	char	*addr;
	int		bpx;
	int		bpr;
	int		e;
	int		h;
	int		w;
	void	**frm;
	char	**frad;
	int		fbpx;
	int		fbpr;
	int		fe;
	int		mx_index;
	int		crnt_frm;
}	t_imgdata;

typedef struct s_game
{
	void		*mlx;
	void		*win;
	char		*theme;
	char		**map;
	int			h;
	int			w;
	int			coins;
	int			victory;
	int			exit_y;
	int			exit_x;
	int			moves;
	t_imgdata	buf;
	t_imgdata	bgr;
	t_imgdata	pi;
	t_imgdata	pj;
	t_imgdata	ci;
	t_imgdata	d;
	t_imgdata	gr;
	t_plyr		plyr;
	long long	time_stamp;
}	t_game;

//		Function Prototypes:
// -- -- #	sl_flood_fill.c			# -- -- //
char	**sl_path_check(char **map, t_game *game);
// -- -- #	sl_map_init_utils.c		# -- -- //
char	sl_flast_char(char *str);
int		sl_count_rows(char **map);
int		sl_count_tiles(char **map, t_game *game, char tile);
// -- -- #	sl_text_to_map.c		# -- -- //
char	**sl_text_to_map(char *map_path);
// -- -- #	sl_layer_init.c			# -- -- //
void	sl_layer_init(t_game *game, int *bpx, int *bpr, int *e);
// -- -- #	sl_exit_game.c			# -- -- //
void	sl_fail(int err_code, int exit_code, char *err_msg);
void	sl_kill_the_game(t_game *game, int good, int err_code, int exit_code);
// -- -- #	sl_check_map.c			# -- -- //
char	**sl_check_map(char **map_file, t_game *game);
// -- -- #	sl_render.c				# -- -- //
void    sl_clear_buffer(t_imgdata *img, int h);
void    sl_main_renderer(t_game *game, t_imgdata *pst);
void	sl_push_bkgrnd_to_frame(t_imgdata *d, t_imgdata *s);
void	sl_push_tile_to_frame(char *dst, char *src, t_cord c);
// -- -- #	sl_terrain.c			# -- -- //
void	sl_build_terrain(t_game *g, char **map, t_imgdata *t);
void	sl_blackpink(t_imgdata *img, int h);
// -- -- #	sl_zeroing.c			# -- -- //
void	sl_zeroing(t_game *game);
// -- -- #	sl_sprite_handling.c	# -- -- //
void	sl_strip_split(t_game *g, t_imgdata *i, int f_num, int f_w);
void	sl_ani_strip_alloc(t_game *g, int f_num, void ***imgs, char ***addrs);
// -- -- #	sl_coordinate.c			# -- -- //
void	sl_coordinate(t_cord *vessel, int c_unit, t_game *g, int ctrl);
// -- -- #	sl_destroy.c			# -- -- //
void	sl_frink(t_game *g);
void	sl_free_matrix(char **matrix);
// -- -- #	sl_door.c				# -- -- //
void    sl_get_door_pos(char **map, int *y, int *x);
// -- -- #  sl_coin.c               # -- -- //
void    sl_render_coins(t_game *g, t_imgdata *coin, int index);
int		ls_get_c_frm_idx(t_imgdata *c);
// -- -- #  sl_player.c             # -- -- //

#endif
