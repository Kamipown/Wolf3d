/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hooks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelobbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/08 09:46:44 by pdelobbe          #+#    #+#             */
/*   Updated: 2016/04/08 09:46:45 by pdelobbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

int		expose_hook(t_env *e)
{
	draw_image(e);
	return (0);
}

int		key_hook(int k, t_env *e)
{
	if (k == ESCAPE)
		exit(0);
	if (k == PAD_0)
		change_map(e);
	if (k == UP || k == KEY_W || k == KEY_Z)
		move_forward(e);
	if (k == DOWN || k == KEY_S)
		move_backward(e);
	if (k == LEFT || k == KEY_A || k == KEY_Q)
		rotate_left(e->cam);
	if (k == RIGHT || k == KEY_D)
		rotate_right(e->cam);
	expose_hook(e);
	return (0);
}
