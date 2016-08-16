/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   text_a_to_e.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelobbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/13 20:34:24 by pdelobbe          #+#    #+#             */
/*   Updated: 2016/04/13 20:34:26 by pdelobbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

int		print_a(int x, int y, char *buf)
{
	draw_pixel(buf, x + 1, y + 3, BLACK);
	draw_pixel(buf, x + 2, y + 3, BLACK);
	draw_pixel(buf, x + 3, y + 3, BLACK);
	draw_pixel(buf, x + 4, y + 4, BLACK);
	draw_pixel(buf, x + 1, y + 5, BLACK);
	draw_pixel(buf, x + 2, y + 5, BLACK);
	draw_pixel(buf, x + 3, y + 5, BLACK);
	draw_pixel(buf, x + 4, y + 5, BLACK);
	draw_pixel(buf, x + 0, y + 6, BLACK);
	draw_pixel(buf, x + 4, y + 6, BLACK);
	draw_pixel(buf, x + 1, y + 7, BLACK);
	draw_pixel(buf, x + 2, y + 7, BLACK);
	draw_pixel(buf, x + 3, y + 7, BLACK);
	draw_pixel(buf, x + 4, y + 7, BLACK);
	return (6);
}

int		print_b(int x, int y, char *buf)
{
	draw_pixel(buf, x + 0, y + 0, BLACK);
	draw_pixel(buf, x + 0, y + 1, BLACK);
	draw_pixel(buf, x + 0, y + 2, BLACK);
	draw_pixel(buf, x + 0, y + 3, BLACK);
	draw_pixel(buf, x + 1, y + 3, BLACK);
	draw_pixel(buf, x + 2, y + 3, BLACK);
	draw_pixel(buf, x + 3, y + 3, BLACK);
	draw_pixel(buf, x + 0, y + 4, BLACK);
	draw_pixel(buf, x + 4, y + 4, BLACK);
	draw_pixel(buf, x + 0, y + 5, BLACK);
	draw_pixel(buf, x + 4, y + 5, BLACK);
	draw_pixel(buf, x + 0, y + 6, BLACK);
	draw_pixel(buf, x + 4, y + 6, BLACK);
	draw_pixel(buf, x + 0, y + 7, BLACK);
	draw_pixel(buf, x + 1, y + 7, BLACK);
	draw_pixel(buf, x + 2, y + 7, BLACK);
	draw_pixel(buf, x + 3, y + 7, BLACK);
	return (6);
}

int		print_c(int x, int y, char *buf)
{
	draw_pixel(buf, x + 1, y + 3, BLACK);
	draw_pixel(buf, x + 2, y + 3, BLACK);
	draw_pixel(buf, x + 3, y + 3, BLACK);
	draw_pixel(buf, x + 4, y + 3, BLACK);
	draw_pixel(buf, x + 0, y + 4, BLACK);
	draw_pixel(buf, x + 0, y + 5, BLACK);
	draw_pixel(buf, x + 0, y + 6, BLACK);
	draw_pixel(buf, x + 1, y + 7, BLACK);
	draw_pixel(buf, x + 2, y + 7, BLACK);
	draw_pixel(buf, x + 3, y + 7, BLACK);
	draw_pixel(buf, x + 4, y + 7, BLACK);
	return (6);
}

int		print_d(int x, int y, char *buf)
{
	draw_pixel(buf, x + 4, y + 0, BLACK);
	draw_pixel(buf, x + 4, y + 1, BLACK);
	draw_pixel(buf, x + 4, y + 2, BLACK);
	draw_pixel(buf, x + 4, y + 3, BLACK);
	draw_pixel(buf, x + 1, y + 3, BLACK);
	draw_pixel(buf, x + 2, y + 3, BLACK);
	draw_pixel(buf, x + 3, y + 3, BLACK);
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

int		print_e(int x, int y, char *buf)
{
	draw_pixel(buf, x + 1, y + 3, BLACK);
	draw_pixel(buf, x + 2, y + 3, BLACK);
	draw_pixel(buf, x + 3, y + 3, BLACK);
	draw_pixel(buf, x + 0, y + 4, BLACK);
	draw_pixel(buf, x + 4, y + 4, BLACK);
	draw_pixel(buf, x + 0, y + 5, BLACK);
	draw_pixel(buf, x + 1, y + 5, BLACK);
	draw_pixel(buf, x + 2, y + 5, BLACK);
	draw_pixel(buf, x + 3, y + 5, BLACK);
	draw_pixel(buf, x + 4, y + 5, BLACK);
	draw_pixel(buf, x + 0, y + 6, BLACK);
	draw_pixel(buf, x + 1, y + 7, BLACK);
	draw_pixel(buf, x + 2, y + 7, BLACK);
	draw_pixel(buf, x + 3, y + 7, BLACK);
	draw_pixel(buf, x + 4, y + 7, BLACK);
	return (6);
}
