/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelobbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/13 20:22:26 by pdelobbe          #+#    #+#             */
/*   Updated: 2016/04/13 20:22:30 by pdelobbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

static int	print_text_a_to_g(char c, int x, int y, char *buf)
{
	if (c == 'a')
		return (print_a(x, y, buf));
	else if (c == 'b')
		return (print_b(x, y, buf));
	else if (c == 'c')
		return (print_c(x, y, buf));
	else if (c == 'd')
		return (print_d(x, y, buf));
	else if (c == 'e')
		return (print_e(x, y, buf));
	else if (c == 'f')
		return (print_f(x, y, buf));
	else if (c == 'g')
		return (print_g(x, y, buf));
	return (0);
}

static int	print_text_h_to_n(char c, int x, int y, char *buf)
{
	if (c == 'h')
		return (print_h(x, y, buf));
	else if (c == 'i')
		return (print_i(x, y, buf));
	else if (c == 'j')
		return (print_j(x, y, buf));
	else if (c == 'k')
		return (print_k(x, y, buf));
	else if (c == 'l')
		return (print_l(x, y, buf));
	else if (c == 'm')
		return (print_m(x, y, buf));
	else if (c == 'n')
		return (print_n(x, y, buf));
	return (0);
}

static int	print_text_o_to_u(char c, int x, int y, char *buf)
{
	if (c == 'o')
		return (print_o(x, y, buf));
	else if (c == 'p')
		return (print_p(x, y, buf));
	else if (c == 'q')
		return (print_q(x, y, buf));
	else if (c == 'r')
		return (print_r(x, y, buf));
	else if (c == 's')
		return (print_s(x, y, buf));
	else if (c == 't')
		return (print_t(x, y, buf));
	else if (c == 'u')
		return (print_u(x, y, buf));
	return (0);
}

static int	print_text_v_to_z(char c, int x, int y, char *buf)
{
	if (c == 'v')
		return (print_v(x, y, buf));
	else if (c == 'w')
		return (print_w(x, y, buf));
	else if (c == 'x')
		return (print_x(x, y, buf));
	else if (c == 'y')
		return (print_y(x, y, buf));
	else if (c == 'z')
		return (print_z(x, y, buf));
	return (0);
}

void		draw_text(char *text, int x, int y, char *buf)
{
	int		i;

	i = 0;
	while (text[i])
	{
		if (text[i] >= 'a' && text[i] <= 'g')
			x += print_text_a_to_g(text[i], x, y, buf);
		else if (text[i] >= 'h' && text[i] <= 'n')
			x += print_text_h_to_n(text[i], x, y, buf);
		else if (text[i] >= 'o' && text[i] <= 'u')
			x += print_text_o_to_u(text[i], x, y, buf);
		else if (text[i] >= 'v' && text[i] <= 'z')
			x += print_text_v_to_z(text[i], x, y, buf);
		else if (text[i] == ' ')
			x += 4;
		++i;
	}
}
