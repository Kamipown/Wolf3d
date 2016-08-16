/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelobbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/08 09:48:56 by pdelobbe          #+#    #+#             */
/*   Updated: 2016/04/08 09:48:57 by pdelobbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

static void	clear_image(char *buf)
{
	int		i;
	int		j;

	i = 0;
	while (i < SCREEN_W)
	{
		j = 0;
		while (j < SCREEN_H)
		{
			draw_pixel(buf, i, j, 0x000000);
			++j;
		}
		++i;
	}
}

int			get_color(char wall, int side)
{
	if (wall == '1' && side != 1)
		return (BROWN);
	else if (wall == '1' && side == 1)
		return (DARK_BROWN);
	else if (wall == '2' && side != 1)
		return (BEIGE);
	else if (wall == '2' && side == 1)
		return (DARK_BEIGE);
	else if (wall == '3' && side != 1)
		return (RED);
	else if (wall == '3' && side == 1)
		return (DARK_RED);
	else if (wall == '4' && side != 1)
		return (BLUE);
	else if (wall == '4' && side == 1)
		return (DARK_BLUE);
	else
		return (FLOOR);
}

void		draw_pixel(char *buf, int x, int y, int color)
{
	if (x > 0 && x < SCREEN_W && y > 0 && y < SCREEN_H)
	{
		x *= 4;
		y *= 4;
		buf[(x++) + (y * SCREEN_W)] = color;
		buf[(x++) + (y * SCREEN_W)] = color >> 8;
		buf[(x) + (y * SCREEN_W)] = color >> 16;
	}
}

void		draw_line(t_line *line, int color, int x, char *buf)
{
	while (line->start < line->end)
	{
		draw_pixel(buf, x, line->start, color);
		++line->start;
	}
}

void		draw_image(t_env *e)
{
	char	*buf;

	buf = mlx_get_data_addr(
		e->img->data,
		&e->img->bpp,
		&e->img->size,
		&e->img->endian);
	clear_image(buf);
	raycasting(e, buf);
	mlx_put_image_to_window(e->mlx, e->win, e->img->data, 0, 0);
}
