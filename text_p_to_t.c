/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   text_p_to_t.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelobbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/13 20:46:18 by pdelobbe          #+#    #+#             */
/*   Updated: 2016/04/13 20:46:19 by pdelobbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

int		print_p(int x, int y, char *buf)
{
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
	draw_pixel(buf, x + 0, y + 8, BLACK);
	draw_pixel(buf, x + 0, y + 9, BLACK);
	return (6);
}

int		print_q(int x, int y, char *buf)
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
	draw_pixel(buf, x + 4, y + 9, BLACK);
	return (6);
}

int		print_r(int x, int y, char *buf)
{
	draw_pixel(buf, x + 0, y + 3, BLACK);
	draw_pixel(buf, x + 2, y + 3, BLACK);
	draw_pixel(buf, x + 3, y + 3, BLACK);
	draw_pixel(buf, x + 0, y + 4, BLACK);
	draw_pixel(buf, x + 1, y + 4, BLACK);
	draw_pixel(buf, x + 0, y + 5, BLACK);
	draw_pixel(buf, x + 0, y + 6, BLACK);
	draw_pixel(buf, x + 0, y + 7, BLACK);
	return (5);
}

int		print_s(int x, int y, char *buf)
{
	draw_pixel(buf, x + 1, y + 3, BLACK);
	draw_pixel(buf, x + 2, y + 3, BLACK);
	draw_pixel(buf, x + 3, y + 3, BLACK);
	draw_pixel(buf, x + 0, y + 4, BLACK);
	draw_pixel(buf, x + 1, y + 5, BLACK);
	draw_pixel(buf, x + 2, y + 5, BLACK);
	draw_pixel(buf, x + 3, y + 6, BLACK);
	draw_pixel(buf, x + 0, y + 7, BLACK);
	draw_pixel(buf, x + 1, y + 7, BLACK);
	draw_pixel(buf, x + 2, y + 7, BLACK);
	return (5);
}

int		print_t(int x, int y, char *buf)
{
	draw_pixel(buf, x + 0, y + 1, BLACK);
	draw_pixel(buf, x + 0, y + 2, BLACK);
	draw_pixel(buf, x + 0, y + 3, BLACK);
	draw_pixel(buf, x + 1, y + 3, BLACK);
	draw_pixel(buf, x + 2, y + 3, BLACK);
	draw_pixel(buf, x + 3, y + 3, BLACK);
	draw_pixel(buf, x + 0, y + 4, BLACK);
	draw_pixel(buf, x + 0, y + 5, BLACK);
	draw_pixel(buf, x + 0, y + 6, BLACK);
	draw_pixel(buf, x + 1, y + 7, BLACK);
	draw_pixel(buf, x + 2, y + 7, BLACK);
	draw_pixel(buf, x + 3, y + 7, BLACK);
	return (5);
}
