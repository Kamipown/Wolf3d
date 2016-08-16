/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   text_f_to_j.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelobbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/13 20:45:52 by pdelobbe          #+#    #+#             */
/*   Updated: 2016/04/13 20:45:54 by pdelobbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

int		print_f(int x, int y, char *buf)
{
	draw_pixel(buf, x + 3, y + 0, BLACK);
	draw_pixel(buf, x + 4, y + 0, BLACK);
	draw_pixel(buf, x + 5, y + 0, BLACK);
	draw_pixel(buf, x + 2, y + 1, BLACK);
	draw_pixel(buf, x + 2, y + 2, BLACK);
	draw_pixel(buf, x + 0, y + 3, BLACK);
	draw_pixel(buf, x + 1, y + 3, BLACK);
	draw_pixel(buf, x + 2, y + 3, BLACK);
	draw_pixel(buf, x + 3, y + 3, BLACK);
	draw_pixel(buf, x + 4, y + 3, BLACK);
	draw_pixel(buf, x + 2, y + 4, BLACK);
	draw_pixel(buf, x + 2, y + 5, BLACK);
	draw_pixel(buf, x + 2, y + 6, BLACK);
	draw_pixel(buf, x + 2, y + 7, BLACK);
	return (6);
}

int		print_g(int x, int y, char *buf)
{
	draw_pixel(buf, x + 1, y + 3, BLACK);
	draw_pixel(buf, x + 2, y + 3, BLACK);
	draw_pixel(buf, x + 3, y + 3, BLACK);
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
	draw_pixel(buf, x + 4, y + 8, BLACK);
	draw_pixel(buf, x + 0, y + 9, BLACK);
	draw_pixel(buf, x + 1, y + 9, BLACK);
	draw_pixel(buf, x + 2, y + 9, BLACK);
	draw_pixel(buf, x + 3, y + 9, BLACK);
	return (6);
}

int		print_h(int x, int y, char *buf)
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
	draw_pixel(buf, x + 4, y + 7, BLACK);
	return (6);
}

int		print_i(int x, int y, char *buf)
{
	draw_pixel(buf, x + 0, y + 0, BLACK);
	draw_pixel(buf, x + 0, y + 2, BLACK);
	draw_pixel(buf, x + 0, y + 3, BLACK);
	draw_pixel(buf, x + 0, y + 4, BLACK);
	draw_pixel(buf, x + 0, y + 5, BLACK);
	draw_pixel(buf, x + 0, y + 6, BLACK);
	return (2);
}

int		print_j(int x, int y, char *buf)
{
	draw_pixel(buf, x + 1, y + 0, BLACK);
	draw_pixel(buf, x + 1, y + 2, BLACK);
	draw_pixel(buf, x + 1, y + 3, BLACK);
	draw_pixel(buf, x + 1, y + 4, BLACK);
	draw_pixel(buf, x + 1, y + 5, BLACK);
	draw_pixel(buf, x + 1, y + 6, BLACK);
	draw_pixel(buf, x + 0, y + 7, BLACK);
	return (3);
}
