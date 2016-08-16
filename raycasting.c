/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raycasting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelobbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/09 19:12:17 by pdelobbe          #+#    #+#             */
/*   Updated: 2016/04/09 19:12:19 by pdelobbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

static void		init_ray(t_ray *ray, t_camera *cam, int x)
{
	ray->cam_x = (double)(x * 2) / (double)SCREEN_W - 1;
	ray->pos_x = cam->pos_x;
	ray->pos_y = cam->pos_y;
	ray->dir_x = (cam->plane_x * ray->cam_x) + cam->dir_x;
	ray->dir_y = (cam->plane_y * ray->cam_x) + cam->dir_y;
	ray->map_x = (int)ray->pos_x;
	ray->map_y = (int)ray->pos_y;
	ray->delta_x = sqrt((ray->dir_y * ray->dir_y)
		/ (ray->dir_x * ray->dir_x) + 1);
	ray->delta_y = sqrt((ray->dir_x * ray->dir_x)
		/ (ray->dir_y * ray->dir_y) + 1);
	ray->hit = 0;
}

static void		calculate_step(t_ray *ray)
{
	if (ray->dir_x < 0)
	{
		ray->step_x = -1;
		ray->side_dist_x = (ray->pos_x - ray->map_x) * ray->delta_x;
	}
	else
	{
		ray->step_x = 1;
		ray->side_dist_x = (ray->map_x - ray->pos_x + 1) * ray->delta_x;
	}
	if (ray->dir_y < 0)
	{
		ray->step_y = -1;
		ray->side_dist_y = (ray->pos_y - ray->map_y) * ray->delta_y;
	}
	else
	{
		ray->step_y = 1;
		ray->side_dist_y = (ray->map_y - ray->pos_y + 1) * ray->delta_y;
	}
}

static void		perform_dda(t_map *map, t_ray *ray)
{
	while (ray->hit == 0)
	{
		if (ray->side_dist_x < ray->side_dist_y)
		{
			ray->side_dist_x += ray->delta_x;
			ray->map_x += ray->step_x;
			ray->side = 0;
		}
		else
		{
			ray->side_dist_y += ray->delta_y;
			ray->map_y += ray->step_y;
			ray->side = 1;
		}
		if (map->cells[ray->map_x][ray->map_y] - 48 > 0)
			ray->hit = 1;
	}
	if (ray->side == 0)
		ray->perp_wall_dist = (ray->map_x - ray->pos_x
			+ (1 - ray->step_x) / 2) / ray->dir_x;
	else
		ray->perp_wall_dist = (ray->map_y - ray->pos_y
			+ (1 - ray->step_y) / 2) / ray->dir_y;
}

static void		perform_line(t_env *e, int x, char *buf)
{
	char	wall;

	wall = e->maps[e->active_map]->cells[e->ray->map_x][e->ray->map_y];
	e->line->height = (int)(SCREEN_H / e->ray->perp_wall_dist);
	e->line->start = (-e->line->height / 2) + (SCREEN_H / 2);
	e->line->end = (e->line->height / 2) + (SCREEN_H / 2);
	if (e->line->start < 0)
		e->line->start = 0;
	if (e->line->end >= SCREEN_H)
		e->line->end = SCREEN_H - 1;
	draw_line(e->line, get_color(wall, e->ray->side), x, buf);
}

void			raycasting(t_env *e, char *buf)
{
	int		x;

	x = 0;
	draw_skybox(FLOOR, CEILING, buf);
	while (x < SCREEN_W)
	{
		init_ray(e->ray, e->cam, x);
		calculate_step(e->ray);
		perform_dda(e->maps[e->active_map], e->ray);
		perform_line(e, x, buf);
		++x;
	}
	draw_minimap(e, buf);
	draw_text(e->maps[e->active_map]->name, 10, 10, buf);
}
