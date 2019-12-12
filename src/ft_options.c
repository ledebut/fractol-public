/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_options.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ledebut <ledebut@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/27 16:02:50 by ledebut      #+#   ##    ##    #+#       */
/*   Updated: 2019/12/12 11:25:25 by ledebut     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fractol.h"

void	ft_options_base(t_e *e)
{
	mlx_string_put(e->mlx_ptr, e->win_ptr, 10, 10, 0xFDEB77,
			"( Enter )");
	mlx_string_put(e->mlx_ptr, e->win_ptr, 10, 25, 0xFDEB77,
			"( - / + ) Iterations max =");
	mlx_string_put(e->mlx_ptr, e->win_ptr, 10, 40, 0xFDEB77,
			"(Molette) Zoom = x");
	mlx_string_put(e->mlx_ptr, e->win_ptr, 10, 55, 0xFDEB77,
			"( Space ) Mouse = ");
	mlx_string_put(e->mlx_ptr, e->win_ptr, 10, 70, 0xFDEB77,
			"( 1 - 9 ) Change color");
}

void	ft_options(t_e *e)
{
	char *name;
	char *i;
	char *zoom;

	if (e->name == 'b' || e->name == 'm')
		e->button = "off";
	if (e->name == 'j')
		name = "Julia";
	else if (e->name == 'm')
		name = "Mandelbrot";
	else if (e->name == 'b')
		name = "Burningship";
	ft_options_base(e);
	i = ft_itoa(e->i_max);
	zoom = ft_itoa(e->zoom);
	mlx_string_put(e->mlx_ptr, e->win_ptr, 110, 10, 0xFDEB77, name);
	mlx_string_put(e->mlx_ptr, e->win_ptr, 280, 25, 0xFDEB77, i);
	mlx_string_put(e->mlx_ptr, e->win_ptr, 200, 40, 0xFDEB77, zoom);
	mlx_string_put(e->mlx_ptr, e->win_ptr, 190, 55, 0xFDEB77, e->button);
	ft_strdel(&i);
	ft_strdel(&zoom);
}
