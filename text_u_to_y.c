/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   text_u_to_y.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelobbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/13 20:46:37 by pdelobbe          #+#    #+#             */
/*   Updated: 2016/04/13 20:46:38 by pdelobbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

int		print_u(int x, int y, char *buf)
{
	draw_pixel(buf, x + 0, y + 3, BLACK);
	draw_pixel(buf, x + 4, y + 3, BLACK);
	draw_pixel(buf, x + 0, y + 4, BLACK);
	draw_pixel(buf, x + 4, y + 4, BLACK);
	draw_pixel(buf, x + 0, y + 5, BLACK);
	draw_pixel(buf, x + 4, y + 5, BLACK);
	draw_pixel(buf, x + 0, y + 6, BLACK);
	draw_pixel(buf, x + 4, y + 6, BLACK);
	draw_pixel(buf, x + 1, y + 7, BLACK);
	draw_pixel(buf, x + 2, y + 7, BLACK);
	draw_pixel(buf, x + 3, y + 7, BLACK);
	draw_pixel(buf, x + 4, y + 7, BLACK);
	return (6);
}

int		print_v(int x, int y, char *buf)
{
	draw_pixel(buf, x + 0, y + 3, BLACK);
	draw_pixel(buf, x + 4, y + 3, BLACK);
	draw_pixel(buf, x + 0, y + 4, BLACK);
	draw_pixel(buf, x + 4, y + 4, BLACK);
	draw_pixel(buf, x + 0, y + 5, BLACK);
	draw_pixel(buf, x + 4, y + 5, BLACK);
	draw_pixel(buf, x + 1, y + 6, BLACK);
	draw_pixel(buf, x + 3, y + 6, BLACK);
	draw_pixel(buf, x + 2, y + 7, BLACK);
	return (6);
}

int		print_w(int x, int y, char *buf)
{
	draw_pixel(buf, x + 0, y + 3, BLACK);
	draw_pixel(buf, x + 6, y + 3, BLACK);
	draw_pixel(buf, x + 0, y + 4, BLACK);
	draw_pixel(buf, x + 3, y + 4, BLACK);
	draw_pixel(buf, x + 6, y + 4, BLACK);
	draw_pixel(buf, x + 0, y + 5, BLACK);
	draw_pixel(buf, x + 3, y + 5, BLACK);
	draw_pixel(buf, x + 6, y + 5, BLACK);
	draw_pixel(buf, x + 0, y + 6, BLACK);
	draw_pixel(buf, x + 2, y + 6, BLACK);
	draw_pixel(buf, x + 4, y + 6, BLACK);
	draw_pixel(buf, x + 6, y + 6, BLACK);
	draw_pixel(buf, x + 1, y + 7, BLACK);
	draw_pixel(buf, x + 5, y + 7, BLACK);
	return (8);
}

int		print_x(int x, int y, char *buf)
{
	draw_pixel(buf, x + 0, y + 3, BLACK);
	draw_pixel(buf, x + 4, y + 3, BLACK);
	draw_pixel(buf, x + 0, y + 4, BLACK);
	draw_pixel(buf, x + 4, y + 4, BLACK);
	draw_pixel(buf, x + 1, y + 5, BLACK);
	draw_pixel(buf, x + 2, y + 5, BLACK);
	draw_pixel(buf, x + 3, y + 5, BLACK);
	draw_pixel(buf, x + 0, y + 6, BLACK);
	draw_pixel(buf, x + 4, y + 6, BLACK);
	draw_pixel(buf, x + 0, y + 7, BLACK);
	draw_pixel(buf, x + 4, y + 7, BLACK);
	return (6);
}

int		print_y(int x, int y, char *buf)
{
	draw_pixel(buf, x + 1, y + 3, BLACK);
	draw_pixel(buf, x + 5, y + 3, BLACK);
	draw_pixel(buf, x + 1, y + 4, BLACK);
	draw_pixel(buf, x + 5, y + 4, BLACK);
	draw_pixel(buf, x + 1, y + 5, BLACK);
	draw_pixel(buf, x + 5, y + 5, BLACK);
	draw_pixel(buf, x + 2, y + 6, BLACK);
	draw_pixel(buf, x + 4, y + 6, BLACK);
	draw_pixel(buf, x + 3, y + 7, BLACK);
	draw_pixel(buf, x + 2, y + 8, BLACK);
	draw_pixel(buf, x + 0, y + 9, BLACK);
	draw_pixel(buf, x + 1, y + 9, BLACK);
	return (7);
}
