/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 11:07:03 by mda-silv          #+#    #+#             */
/*   Updated: 2021/09/10 11:07:05 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	do_colors(t_fractal *f)
{
	if (f->i < f->it)
	{
		if (f->i < f->it / 2)
		{
			f->image_string[f->fi + 2] = f->i * 10;
			f->image_string[f->fi + 1] = 0;
			f->image_string[f->fi] = 127;
		}
		else
		{
			f->image_string[f->fi] = 127;
			f->image_string[f->fi + 1] = f->i * 2;
			f->image_string[f->fi + 2] = f->i * 4;
		}
	}
	else
	{
		f->image_string[f->fi] = 0;
		f->image_string[f->fi + 1] = 0;
		f->image_string[f->fi + 2] = 0;
	}
	f->fi += 4;
}

long double	absolute_ld(long double x)
{
	if (x < 0)
		return (x * -1);
	return (x);
}

void	iterate(t_fractal *f, long double addx, long double addy)
{
	if (f->type == 'm' || f->type == 'b')
	{
		addx = f->manx;
		addy = f->many;
	}
	else
	{
		addx = f->const_r;
		addy = f->const_i;
	}
	f->old_real = f->new_real;
	f->old_imag = f->new_imag;
	if (f->type == 'b')
	{
		f->new_real = absolute_ld(f->old_real * \
			f->old_real - f->old_imag * f->old_imag + f->manx);
		f->new_imag = absolute_ld(2 * f->old_real \
			* f->old_imag + f->many);
	}
	else
	{
		f->new_real = f->old_real * f->old_real - \
		f->old_imag * f->old_imag + addx;
		f->new_imag = 2 * f->old_real * f->old_imag + addy;
	}
}
