/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skybox.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelobbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/13 15:47:10 by pdelobbe          #+#    #+#             */
/*   Updated: 2016/04/13 15:47:13 by pdelobbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

static void	draw_floor(int start, int end, int color, char *buf)
{
	int		x;
	int		y;

	x = 0;
	while (x < SCREEN_W)
	{
		y = start;
		while (y < end)
		{
			draw_pixel(buf, x, y, color);
			++y;
		}
		++x;
	}
}

static void	draw_ceiling(int start, int end, int color, char *buf)
{
	int		x;
	int		y;

	x = 0;
	while (x < SCREEN_W)
	{
		y = start;
		while (y < end)
		{
			draw_pixel(buf, x, y, color);
			++y;
		}
		++x;
	}
}

void		draw_skybox(int floor, int ceiling, char *buf)
{
	draw_floor(SCREEN_H / 2, SCREEN_H, floor, buf);
	draw_ceiling(0, SCREEN_H / 2, ceiling, buf);
}
