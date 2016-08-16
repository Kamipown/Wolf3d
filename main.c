/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelobbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/08 09:37:11 by pdelobbe          #+#    #+#             */
/*   Updated: 2016/04/08 09:37:12 by pdelobbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

static void	check(void)
{
	if (SCREEN_W < 1 || SCREEN_H < 1)
		exit(0);
}

int			main(void)
{
	t_env	e;

	check();
	init(&e);
	mlx_expose_hook(e.win, expose_hook, &e);
	mlx_hook(e.win, 2, (1L << 0), key_hook, &e);
	mlx_loop(e.mlx);
	return (0);
}
