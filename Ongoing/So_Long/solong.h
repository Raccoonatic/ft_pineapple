/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solong.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:21:23 by lde-san-          #+#    #+#             */
/*   Updated: 2025/11/17 19:36:39 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLONG_H
# define SOLONG_H

// Includes:
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
# define TSZ	64
# define HTSZ	32

// Textures Path:
#define BKND	"./assets/background/Herculy.xpm"
#define GRND	"./assets/Ground/floor.xpm"
#define PLYI	"./assets/Character/fox_idle.xpm"
#define PLYR    "./assets/Character/fox_run.xpm"
#define PLYJ    "./assets/Character/Fox_jump.xpm"
#define COIN	"./assets/Items/coin.xpm
#define COUT    "./assets/Items/coin_pickup.xpm"
#define DOOR	"./assets/Items/door.xpm"

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
	double	vy;
	double	vx;
	int		grounded;
}	t_plyr;

typedef struct s_imgdata
{
	void	*main;
	char    *addr;
	int     bpx;
	int     bpr;
	int     e;
	int     h;
	int     w;
	void    **frm;
	char    **frad;
	int     fbpx;
	int		fbpr;
	int		fe;
	int		index;
	int		x;
	int		y;
}	t_imgdata;

typedef struct s_game
{
	void		*mlx;
	void		*win;
	void		*frame;
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
	t_imgdata   pr;
	t_imgdata   pj;
	t_imgdata	ci;
	t_imgdata   co;
	t_imgdata   d;
	t_imgdata	gr;
	t_plyr		plyr;
}	t_game;

// Function Prototypes:
char	**sl_text_to_map(char *map_path);
char	sl_flast_char(char *str);
int		sl_count_rows(char **map);
int		sl_count_tiles(char **map, t_game *game, char tile);
void	sl_fail(int err_code, int exit_code, char *err_msg);
void	sl_free_matrix(char **matrix);
char	**sl_check_map(char **map_file, t_game *game);
char	**sl_path_check(char **map, t_game *game);
void	sl_layer_init(t_game *game, int *bpx, int *bpr, int *e);
void    sl_push_bkgrnd_to_frame(t_imgdata *dst, t_imgdata *src);
void    sl_kill_the_game(t_game *game, int good, int err_code, int exit_code);
void    sl_zeroing(t_game *game);
int		sl_main_renderer(t_game *game);

#endif
