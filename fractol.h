/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 11:07:20 by mda-silv          #+#    #+#             */
/*   Updated: 2021/09/10 11:07:22 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "minilibx_macos/mlx.h"
# include "libft/libft.h"
# include <stdlib.h>

# define SCREEN_W		800
# define SCREEN_H		800

# define SCROLL_UP		5
# define SCROLL_DOWN	4
# define LEFT_CLICK		1

# define LEFT			123
# define RIGHT			124
# define DOWN			125
# define UP				126
# define PLUS			24
# define MINUS			27
# define ZERO			29
# define SPACEBAR		49

typedef struct			s_fractal
{
	int					fi;
	int					i;
	int					x;
	int					y;
	int					it;
	short				limit;
	long double			addx;
	long double			addy;
	long double			new_real;
	long double			new_imag;
	long double			old_real;
	long double			old_imag;
	long double			const_r;
	long double			const_i;
	long double			manx;
	long double			many;
	long double			z;
	int					click;
	void				*image;
	char				*image_string;
	void				*mlx;
	void				*win;
	char				type;
}						t_fractal;

int						deal_key(int key, t_fractal *f);
int						closing(void *param);
int						mouse_press(int button, int x, int y, t_fractal *f);
int						mouse_move(int x, int y, t_fractal *f);

void					set_fractal(t_fractal *f, char argument);
void					*loops(t_fractal *f);
void					start_image(t_fractal *f);
void					iterate(t_fractal *f, long double x, long double y);
void					do_colors(t_fractal *f);

long double				absolute_ld(long double x);

#endif
