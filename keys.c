#include "fractol.h"

int				deal_key(int key, t_fractal *f)
{
	if (key == 53)
		exit(1);
	if (key == LEFT)
		f->addx += 10 / f->z;
	if (key == RIGHT)
		f->addx -= 10 / f->z;
	if (key == UP)
		f->addy += 10 / f->z;
	if (key == DOWN)
		f->addy -= 10 / f->z;
	if (key == PLUS && f->it < 1000)
		f->it += 100;
	if (key == MINUS && f->it > 100)
		f->it -= 100;
	if (key == ZERO)
		set_fractal(f, f->type);
	mlx_clear_window(f->mlx, f->win);
	loops(f);
	return (0);
}

int				closing(void *param)
{
	(void)param;
	exit(0);
	return (0);
}

int				mouse_move(int x, int y, t_fractal *f)
{
	if (x > 0 && x < SCREEN_W && y > 0 && y < SCREEN_H && f->click)
	{
		f->const_r = 0.95 * x / SCREEN_W + 1.1;
		if (f->const_r > 1)
			f->const_r -= 2;
		else if (f->const_r < -1)
			f->const_r += 2;
		f->const_i = 0.95 * y / SCREEN_H + 1;
		if (f->const_i > 1)
			f->const_i -= 2;
		else if (f->const_i < -1)
			f->const_i += 2;
		mlx_clear_window(f->mlx, f->win);
		loops(f);
	}
	return (0);
}

int				mouse_press(int button, int x, int y, t_fractal *f)
{
	if (button == LEFT_CLICK)
	{
		if (f->click == 1)
			f->click = 0;
		else
			f->click = 1;
	}
	if (button == SCROLL_DOWN)
		f->z /= 1.5;
	if (button == SCROLL_UP)
	{
		f->z *= 1.5;
		f->addx += (x - SCREEN_W / 2) / f->z / 2;
		f->addy += (y - SCREEN_H / 2) / f->z / 2;
	}
	if (f->z < 0.05)
		f->z *= 1.5;
	mlx_clear_window(f->mlx, f->win);
	loops(f);
	return (0);
}
