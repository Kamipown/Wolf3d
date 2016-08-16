/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelobbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/11 15:29:03 by pdelobbe          #+#    #+#             */
/*   Updated: 2016/04/11 15:29:04 by pdelobbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void	move_forward(t_env *e)
{
	if (e->maps[e->active_map]->cells[(int)(e->cam->pos_x
		+ (e->cam->dir_x * 0.01 * MOV_SPEED))][(int)(e->cam->pos_y)] == '0')
		e->cam->pos_x += (e->cam->dir_x * 0.01 * MOV_SPEED);
	if (e->maps[e->active_map]->cells[(int)(e->cam->pos_x)]
		[(int)(e->cam->pos_y + (e->cam->dir_y * 0.01 * MOV_SPEED))] == '0')
		e->cam->pos_y += (e->cam->dir_y * 0.01 * MOV_SPEED);
	if (e->maps[e->active_map]->cells[(int)(e->cam->pos_x
		+ (e->cam->dir_x * 0.01 * MOV_SPEED))][(int)(e->cam->pos_y)] == '4')
		change_map(e);
	if (e->maps[e->active_map]->cells[(int)(e->cam->pos_x)]
		[(int)(e->cam->pos_y + (e->cam->dir_y * 0.01 * MOV_SPEED))] == '4')
		change_map(e);
}

void	move_backward(t_env *e)
{
	if (e->maps[e->active_map]->cells[(int)(e->cam->pos_x
		- (e->cam->dir_x * 0.01 * MOV_SPEED))][(int)(e->cam->pos_y)] == '0')
		e->cam->pos_x -= (e->cam->dir_x * 0.01 * MOV_SPEED);
	if (e->maps[e->active_map]->cells[(int)(e->cam->pos_x)]
		[(int)(e->cam->pos_y - (e->cam->dir_y * 0.01 * MOV_SPEED))] == '0')
		e->cam->pos_y -= (e->cam->dir_y * 0.01 * MOV_SPEED);
}

void	rotate_left(t_camera *cam)
{
	double old_dir_x;
	double old_plane_x;

	old_dir_x = cam->dir_x;
	cam->dir_x = cam->dir_x * cos(0.01 * ROT_SPEED)
	- cam->dir_y * sin(0.01 * ROT_SPEED);
	cam->dir_y = old_dir_x * sin(0.01 * ROT_SPEED)
	+ cam->dir_y * cos(0.01 * ROT_SPEED);
	old_plane_x = cam->plane_x;
	cam->plane_x = cam->plane_x * cos(0.01 * ROT_SPEED)
	- cam->plane_y * sin(0.01 * ROT_SPEED);
	cam->plane_y = old_plane_x * sin(0.01 * ROT_SPEED)
	+ cam->plane_y * cos(0.01 * ROT_SPEED);
}

void	rotate_right(t_camera *cam)
{
	double old_dir_x;
	double old_plane_x;

	old_dir_x = cam->dir_x;
	cam->dir_x = cam->dir_x * cos(-0.01 * ROT_SPEED)
	- cam->dir_y * sin(-0.01 * ROT_SPEED);
	cam->dir_y = old_dir_x * sin(-0.01 * ROT_SPEED)
	+ cam->dir_y * cos(-0.01 * ROT_SPEED);
	old_plane_x = cam->plane_x;
	cam->plane_x = cam->plane_x * cos(-0.01 * ROT_SPEED)
	- cam->plane_y * sin(-0.01 * ROT_SPEED);
	cam->plane_y = old_plane_x * sin(-0.01 * ROT_SPEED)
	+ cam->plane_y * cos(-0.01 * ROT_SPEED);
}
