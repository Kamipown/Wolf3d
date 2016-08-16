/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelobbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/09 12:13:28 by pdelobbe          #+#    #+#             */
/*   Updated: 2016/04/09 12:13:29 by pdelobbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void	init_map_0(t_map *map, t_camera *cam)
{
	map->name = ft_strdup("big square");
	map->width = 18;
	map->height = 18;
	map->cells = (char **)malloc(sizeof(char *) * (map->height + 1));
	map->cells[0] = ft_strdup("111111111111111111");
	map->cells[1] = ft_strdup("200000000000000002");
	map->cells[2] = ft_strdup("200000000000000002");
	map->cells[3] = ft_strdup("200000000000000002");
	map->cells[4] = ft_strdup("200000000000000002");
	map->cells[5] = ft_strdup("200000000000000002");
	map->cells[6] = ft_strdup("200000000000000002");
	map->cells[7] = ft_strdup("200000000000000002");
	map->cells[8] = ft_strdup("200000000000000002");
	map->cells[9] = ft_strdup("200000000000000002");
	map->cells[10] = ft_strdup("200000000000000002");
	map->cells[11] = ft_strdup("200000000000000002");
	map->cells[12] = ft_strdup("200000000000000002");
	map->cells[13] = ft_strdup("200000000000000002");
	map->cells[14] = ft_strdup("200000000000000002");
	map->cells[15] = ft_strdup("200000000000000002");
	map->cells[16] = ft_strdup("200000000000000002");
	map->cells[17] = ft_strdup("111111114411111111");
	map->cells[18] = NULL;
	cam->pos_x = 5;
	cam->pos_y = 5;
}

void	init_map_1(t_map *map, t_camera *cam)
{
	map->name = ft_strdup("symetric map");
	map->width = 18;
	map->height = 18;
	map->cells = (char **)malloc(sizeof(char *) * (map->height + 1));
	map->cells[0] = ft_strdup("222222222222222222");
	map->cells[1] = ft_strdup("200000000000000002");
	map->cells[2] = ft_strdup("200000000000000002");
	map->cells[3] = ft_strdup("200111000000222002");
	map->cells[4] = ft_strdup("200100000000002002");
	map->cells[5] = ft_strdup("200100000000002002");
	map->cells[6] = ft_strdup("200000000000000002");
	map->cells[7] = ft_strdup("200000000000000002");
	map->cells[8] = ft_strdup("200000003300000002");
	map->cells[9] = ft_strdup("200000003300000002");
	map->cells[10] = ft_strdup("200000000000000002");
	map->cells[11] = ft_strdup("200000000000000002");
	map->cells[12] = ft_strdup("200200000000001002");
	map->cells[13] = ft_strdup("200200000000001002");
	map->cells[14] = ft_strdup("200422000000111002");
	map->cells[15] = ft_strdup("200000000000000002");
	map->cells[16] = ft_strdup("200000000000000002");
	map->cells[17] = ft_strdup("222222222222222222");
	map->cells[18] = NULL;
	cam->pos_x = 10;
	cam->pos_y = 10;
}

void	init_map_2(t_map *map, t_camera *cam)
{
	map->name = ft_strdup("thousands pillars");
	map->width = 17;
	map->height = 17;
	map->cells = (char **)malloc(sizeof(char *) * (map->height + 1));
	map->cells[0] = ft_strdup("22222222222222222");
	map->cells[1] = ft_strdup("20000000000000002");
	map->cells[2] = ft_strdup("20102010201040102");
	map->cells[3] = ft_strdup("20000000000000002");
	map->cells[4] = ft_strdup("20201020102010202");
	map->cells[5] = ft_strdup("20000000000000002");
	map->cells[6] = ft_strdup("20102010201020102");
	map->cells[7] = ft_strdup("20000000000000002");
	map->cells[8] = ft_strdup("20201020102010202");
	map->cells[9] = ft_strdup("20000000000000002");
	map->cells[10] = ft_strdup("20102010201020102");
	map->cells[11] = ft_strdup("20000000000000002");
	map->cells[12] = ft_strdup("20201020102010202");
	map->cells[13] = ft_strdup("20000000000000002");
	map->cells[14] = ft_strdup("20102010201020102");
	map->cells[15] = ft_strdup("20000000000000002");
	map->cells[16] = ft_strdup("22222222222222222");
	map->cells[17] = NULL;
	cam->pos_x = 7.5;
	cam->pos_y = 7.5;
}

void	change_map(t_env *e)
{
	if (e->active_map < 2)
		++e->active_map;
	else
		e->active_map = 0;
	if (e->active_map == 0)
	{
		e->cam->pos_x = 5;
		e->cam->pos_y = 5;
	}
	else if (e->active_map == 1)
	{
		e->cam->pos_x = 6;
		e->cam->pos_y = 6;
	}
	else if (e->active_map == 2)
	{
		e->cam->pos_x = 7.5;
		e->cam->pos_y = 7.5;
	}
}
