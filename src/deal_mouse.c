/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   deal_mouse.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ledebut <ledebut@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/16 09:18:27 by ledebut      #+#   ##    ##    #+#       */
/*   Updated: 2019/12/12 10:57:51 by ledebut     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fractol.h"

void	ft_reset2(t_e *e)
{
	mlx_destroy_image(e->mlx_ptr, e->img_ptr);
	e->img_ptr = mlx_new_image(e->mlx_ptr, e->width, e->height);
	ft_print_fract(e);
	mlx_put_image_to_window(e->mlx_ptr, e->win_ptr, e->img_ptr, 0, 0);
}

void	ft_split_deal_mouse(int mouse, int x, int y, t_e *e)
{
	if (mouse == 1)
	{
		e->i_max = e->i_max + 5;
		ft_print_fract(e);
	}
	else if (mouse == 2)
	{
		if (e->i_max < 10)
			e->i_max = 10;
		e->i_max = e->i_max - 5;
		ft_print_fract(e);
	}
}

int		mouse_4(t_e *e)
{
	float test;

	test = 1.1;
	if (e->zoom > 1)
		e->zoom--;
	if (e->n > 5)
	{
		e->n = e->n / test;
		e->hauteur = e->hauteur * test;
		e->largeur = e->largeur * test;
		ft_print_fract(e);
	}
	return (1);
}

int		deal_mouse(int mouse, int x, int y, t_e *e)
{
	float test;

	test = 1.1;
	if (mouse == 5)
	{
		e->zoom++;
		e->n = e->n * test;
		e->hauteur = e->hauteur / test;
		e->largeur = e->largeur / test;
		ft_print_fract(e);
		return (1);
	}
	else if (mouse == 4)
	{
		if (mouse_4(e) == 1)
			return (1);
	}
	return (0);
}
