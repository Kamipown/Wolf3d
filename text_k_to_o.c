/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   text_k_to_o.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelobbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/13 20:46:06 by pdelobbe          #+#    #+#             */
/*   Updated: 2016/04/13 20:46:07 by pdelobbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

int		print_k(int x, int y, char *buf)
{
	draw_pixel(buf, x + 0, y + 0, BLACK);
	draw_pixel(buf, x + 0, y + 1, BLACK);
	draw_pixel(buf, x + 0, y + 2, BLACK);
	draw_pixel(buf, x + 0, y + 3, BLACK);
	draw_pixel(buf, x + 3, y + 3, BLACK);
	draw_pixel(buf, x + 0, y + 4, BLACK);
	draw_pixel(buf, x + 2, y + 4, BLACK);
	draw_pixel(buf, x + 0, y + 5, BLACK);
	draw_pixel(buf, x + 1, y + 5, BLACK);
	draw_pixel(buf, x + 2, y + 5, BLACK);
	draw_pixel(buf, x + 0, y + 6, BLACK);
	draw_pixel(buf, x + 3, y + 6, BLACK);
	draw_pixel(buf, x + 0, y + 7, BLACK);
	draw_pixel(buf, x + 4, y + 7, BLACK);
	return (6);
}

int		print_l(int x, int y, char *buf)
{
	draw_pixel(buf, x + 0, y + 0, BLACK);
	draw_pixel(buf, x + 0, y + 1, BLACK);
	draw_pixel(buf, x + 0, y + 2, BLACK);
	draw_pixel(buf, x + 0, y + 3, BLACK);
	draw_pixel(buf, x + 0, y + 4, BLACK);
	draw_pixel(buf, x + 0, y + 5, BLACK);
	draw_pixel(buf, x + 0, y + 6, BLACK);
	draw_pixel(buf, x + 1, y + 7, BLACK);
	draw_pixel(buf, x + 2, y + 7, BLACK);
	return (4);
}

int		print_m(int x, int y, char *buf)
{
	draw_pixel(buf, x + 0, y + 3, BLACK);
	draw_pixel(buf, x + 1, y + 3, BLACK);
	draw_pixel(buf, x + 2, y + 3, BLACK);
	draw_pixel(buf, x + 3, y + 3, BLACK);
	draw_pixel(buf, x + 4, y + 3, BLACK);
	draw_pixel(buf, x + 5, y + 3, BLACK);
	draw_pixel(buf, x + 0, y + 4, BLACK);
	draw_pixel(buf, x + 3, y + 4, BLACK);
	draw_pixel(buf, x + 6, y + 4, BLACK);
	draw_pixel(buf, x + 0, y + 5, BLACK);
	draw_pixel(buf, x + 3, y + 5, BLACK);
	draw_pixel(buf, x + 6, y + 5, BLACK);
	draw_pixel(buf, x + 0, y + 6, BLACK);
	draw_pixel(buf, x + 3, y + 6, BLACK);
	draw_pixel(buf, x + 6, y + 6, BLACK);
	draw_pixel(buf, x + 0, y + 7, BLACK);
	draw_pixel(buf, x + 3, y + 7, BLACK);
	draw_pixel(buf, x + 6, y + 7, BLACK);
	return (8);
}

int		print_n(int x, int y, char *buf)
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
	draw_pixel(buf, x + 4, y + 7, BLACK);
	return (6);
}

int		print_o(int x, int y, char *buf)
{
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
	return (6);
}
