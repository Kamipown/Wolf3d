/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelobbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/08 09:42:50 by pdelobbe          #+#    #+#             */
/*   Updated: 2016/04/08 09:42:53 by pdelobbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

static void	init_camera(t_camera *cam)
{
	cam->dir_x = -1;
	cam->dir_y = 0;
	cam->plane_x = 0;
	cam->plane_y = 0.66;
}

void		init(t_env *e)
{
	e->mlx = mlx_init();
	e->win = mlx_new_window(e->mlx, SCREEN_W, SCREEN_H, "Wolf3d");
	e->img = (t_img *)malloc(sizeof(t_img));
	e->img->data = mlx_new_image(e->mlx, SCREEN_W, SCREEN_H);
	e->cam = (t_camera *)malloc(sizeof(t_camera));
	init_camera(e->cam);
	e->active_map = 0;
	e->maps = (t_map **)malloc(sizeof(t_map *) * 3);
	e->maps[0] = (t_map *)malloc(sizeof(t_map));
	e->maps[1] = (t_map *)malloc(sizeof(t_map));
	e->maps[2] = (t_map *)malloc(sizeof(t_map));
	init_map_0(e->maps[0], e->cam);
	init_map_1(e->maps[1], e->cam);
	init_map_2(e->maps[2], e->cam);
	e->ray = (t_ray *)malloc(sizeof(t_ray));
	e->line = (t_line *)malloc(sizeof(t_line));
}
