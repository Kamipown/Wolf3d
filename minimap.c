/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minimap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelobbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/13 18:43:03 by pdelobbe          #+#    #+#             */
/*   Updated: 2016/04/13 18:43:04 by pdelobbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

static void	draw_square(t_env *e, int x, int y, char *buf)
{
	char	cell;
	int		full_width;
	int		t_x;
	int		t_y;

	cell = e->maps[e->active_map]->cells[x][e->maps[e->active_map]->height
		- y - 1];
	full_width = e->maps[e->active_map]->width * MINIMAP_S;
	x = (SCREEN_W - full_width - 10) + x * MINIMAP_S;
	y = y * MINIMAP_S + 10;
	t_x = x;
	while (t_x < x + MINIMAP_S)
	{
		t_y = y;
		while (t_y < y + MINIMAP_S)
		{
			draw_pixel(buf, t_x, t_y, get_color(cell, 1));
			++t_y;
		}
		++t_x;
	}
}

static void	draw_borders(int w, int h, char *buf)
{
	int		x;
	int		y;

	x = SCREEN_W - w - 11;
	y = 10;
	while (x < SCREEN_W - 9)
	{
		draw_pixel(buf, x, y - 1, BLACK);
		draw_pixel(buf, x, y + h, BLACK);
		++x;
	}
	while (y < h + 10)
	{
		draw_pixel(buf, x - 1, y, BLACK);
		draw_pixel(buf, x - w - 2, y, BLACK);
		++y;
	}
}

static void	draw_player(t_env *e, char *buf)
{
	int		x;
	int		y;

	x = SCREEN_W - (e->maps[e->active_map]->width * MINIMAP_S)
		- 10 + e->cam->pos_x * MINIMAP_S;
	y = 10 + (e->maps[e->active_map]->height - e->cam->pos_y) * MINIMAP_S;
	draw_pixel(buf, x, y, 0xff00ff);
	draw_pixel(buf, x + 1, y, 0xff00ff);
	draw_pixel(buf, x + 2, y, 0xff00ff);
	draw_pixel(buf, x - 1, y, 0xff00ff);
	draw_pixel(buf, x - 2, y, 0xff00ff);
	draw_pixel(buf, x, y + 1, 0xff00ff);
	draw_pixel(buf, x, y + 2, 0xff00ff);
	draw_pixel(buf, x, y - 1, 0xff00ff);
	draw_pixel(buf, x, y - 2, 0xff00ff);
}

void		draw_minimap(t_env *e, char *buf)
{
	int		full_width;
	int		full_height;
	int		x;
	int		y;

	y = 0;
	full_width = e->maps[e->active_map]->width * MINIMAP_S;
	full_height = e->maps[e->active_map]->height * MINIMAP_S;
	while (y < e->maps[e->active_map]->height)
	{
		x = 0;
		while (x < e->maps[e->active_map]->width)
		{
			draw_square(e, x, y, buf);
			++x;
		}
		++y;
	}
	draw_borders(full_width, full_height, buf);
	draw_player(e, buf);
}
