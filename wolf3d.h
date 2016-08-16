/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wolf3d.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelobbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/08 09:38:08 by pdelobbe          #+#    #+#             */
/*   Updated: 2016/04/08 09:38:10 by pdelobbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WOLF3D_H
# define WOLF3D_H

# include <stdlib.h>
# include <math.h>
# include <mlx.h>

# include "libft/includes/libft.h"

# define SCREEN_W 1920
# define SCREEN_H 1080

# define ESCAPE 53

# define MOV_SPEED 8
# define ROT_SPEED 5

# define UP 126
# define DOWN 125
# define LEFT 123
# define RIGHT 124

# define KEY_W 13
# define KEY_S 1
# define KEY_A 0
# define KEY_D 2
# define KEY_Z 6
# define KEY_Q 12

# define PAD_0 82

# define BROWN 0x826b49
# define DARK_BROWN 0x6d593d
# define BEIGE 0xece8d5
# define DARK_BEIGE 0xd4d0bf
# define RED 0xcc5555
# define DARK_RED 0xbb4444
# define BLUE 0x0099ff
# define DARK_BLUE 0x0088ee
# define BLACK 0x000000
# define FLOOR 0xbfdd9d
# define CEILING 0x1eccf3

# define MINIMAP_S 5

typedef struct		s_line
{
	int				height;
	int				start;
	int				end;
}					t_line;

typedef struct		s_ray
{
	double			cam_x;
	double			pos_x;
	double			pos_y;
	double			dir_x;
	double			dir_y;
	int				map_x;
	int				map_y;
	double			side_dist_x;
	double			side_dist_y;
	double			delta_x;
	double			delta_y;
	double			perp_wall_dist;
	int				step_x;
	int				step_y;
	int				hit;
	int				side;
}					t_ray;

typedef struct		s_camera
{
	double			pos_x;
	double			pos_y;
	double			dir_x;
	double			dir_y;
	double			plane_x;
	double			plane_y;
}					t_camera;

typedef struct		s_map
{
	char			*name;
	int				width;
	int				height;
	char			**cells;
}					t_map;

typedef struct		s_img
{
	void			*data;
	int				bpp;
	int				size;
	int				endian;
}					t_img;

typedef struct		s_env
{
	void			*mlx;
	void			*win;
	t_img			*img;
	int				active_map;
	t_map			**maps;
	t_camera		*cam;
	t_ray			*ray;
	t_line			*line;
}					t_env;

void				init(t_env *e);
int					expose_hook(t_env *e);
int					key_hook(int k, t_env *e);

void				move_forward(t_env *e);
void				move_backward(t_env *e);
void				rotate_left(t_camera *cam);
void				rotate_right(t_camera *cam);

void				init_map_0(t_map *map, t_camera *cam);
void				init_map_1(t_map *map, t_camera *cam);
void				init_map_2(t_map *map, t_camera *cam);
void				change_map(t_env *e);

int					get_color(char wall, int side);
void				draw_pixel(char *buf, int x, int y, int color);
void				draw_line(t_line *line, int color, int x, char *buf);
void				draw_image(t_env *e);
void				draw_skybox(int floor, int ceiling, char *buf);
void				draw_minimap(t_env *e, char *buf);
void				draw_text(char *text, int x, int y, char *buf);

int					print_a(int x, int y, char *buf);
int					print_b(int x, int y, char *buf);
int					print_c(int x, int y, char *buf);
int					print_d(int x, int y, char *buf);
int					print_e(int x, int y, char *buf);
int					print_f(int x, int y, char *buf);
int					print_g(int x, int y, char *buf);
int					print_h(int x, int y, char *buf);
int					print_i(int x, int y, char *buf);
int					print_j(int x, int y, char *buf);
int					print_k(int x, int y, char *buf);
int					print_l(int x, int y, char *buf);
int					print_m(int x, int y, char *buf);
int					print_n(int x, int y, char *buf);
int					print_o(int x, int y, char *buf);
int					print_p(int x, int y, char *buf);
int					print_q(int x, int y, char *buf);
int					print_r(int x, int y, char *buf);
int					print_s(int x, int y, char *buf);
int					print_t(int x, int y, char *buf);
int					print_u(int x, int y, char *buf);
int					print_v(int x, int y, char *buf);
int					print_w(int x, int y, char *buf);
int					print_x(int x, int y, char *buf);
int					print_y(int x, int y, char *buf);
int					print_z(int x, int y, char *buf);

void				raycasting(t_env *e, char *buf);

#endif
