/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ledebut <ledebut@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/14 15:55:50 by ledebut      #+#   ##    ##    #+#       */
/*   Updated: 2019/12/12 10:44:26 by ledebut     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fractol.h"

void	ft_bad_argument(void)
{
	ft_putstr("Options : Enter\n- Mandelbrot\n- Julia\n- Burningship\n");
	exit(0);
}

void	ft_wich_fractal(t_e *e, char **argv)
{
	if (argv[1][0] == 'M' || argv[1][0] == 'm')
		e->name = 'm';
	else if (argv[1][0] == 'B' || argv[1][0] == 'b')
		e->name = 'b';
	else if (argv[1][0] == 'J' || argv[1][0] == 'j')
		e->name = 'j';
	else
		ft_bad_argument();
}

int		motion_notify(int x, int y, t_e *e)
{
	if (e->name == 'j' && (strcmp(e->button, "on") == 0))
	{
		e->xx = x;
		e->yy = y;
		ft_julia(e);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	t_e param;
	t_e *e;

	e = &param;
	e->color1 = 2;
	e->color2 = 2;
	e->color3 = 0;
	if (argc == 2)
	{
		ft_wich_fractal(e, argv);
		ft_init_window_and_image(e);
		ft_print_fract(e);
		mlx_mouse_hook(e->win_ptr, deal_mouse, e);
		mlx_hook(e->win_ptr, 2, 0L, deal_key, e);
		mlx_hook(e->win_ptr, 6, 1L << 6, motion_notify, e);
		mlx_loop(e->mlx_ptr);
		return (0);
	}
	else
		ft_bad_argument();
	return (0);
}
