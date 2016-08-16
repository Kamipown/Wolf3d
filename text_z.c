/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   text_z.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelobbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/13 20:46:44 by pdelobbe          #+#    #+#             */
/*   Updated: 2016/04/13 20:46:46 by pdelobbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

int		print_z(int x, int y, char *buf)
{
	draw_pixel(buf, x + 0, y + 3, BLACK);
	draw_pixel(buf, x + 1, y + 3, BLACK);
	draw_pixel(buf, x + 2, y + 3, BLACK);
	draw_pixel(buf, x + 3, y + 3, BLACK);
	draw_pixel(buf, x + 4, y + 3, BLACK);
	draw_pixel(buf, x + 3, y + 4, BLACK);
	draw_pixel(buf, x + 2, y + 5, BLACK);
	draw_pixel(buf, x + 1, y + 6, BLACK);
	draw_pixel(buf, x + 0, y + 7, BLACK);
	draw_pixel(buf, x + 1, y + 7, BLACK);
	draw_pixel(buf, x + 2, y + 7, BLACK);
	draw_pixel(buf, x + 3, y + 7, BLACK);
	draw_pixel(buf, x + 4, y + 7, BLACK);
	return (6);
}
