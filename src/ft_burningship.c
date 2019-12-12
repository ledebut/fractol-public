/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_burningship.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ledebut <ledebut@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/13 07:06:20 by ledebut      #+#   ##    ##    #+#       */
/*   Updated: 2019/12/12 11:23:36 by ledebut     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fractol.h"

void	ft_burningship1(t_e *e, float x, float y)
{
	float t;

	while (e->i < e->i_max)
	{
		t = x;
		x = (x * x) - (y * y) + e->a;
		y = fabs((2 * t * y)) - e->b;
		if ((x * x) + (y * y) > 4 && e->aa < e->width && e->bb < e->height)
		{
			e->x = e->aa;
			e->y = e->bb;
			ft_put_pixel(e, e->i * 255 / e->i_max);
			break ;
		}
		e->i++;
	}
}

void	ft_burningship(t_e *e)
{
	float x;
	float y;

	ft_reset(e);
	while (e->bb++ <= e->height)
	{
		e->b = e->hauteur - (e->bb / e->n);
		while (e->aa++ <= e->width)
		{
			e->a = -e->largeur + (e->aa / e->n);
			x = 0;
			y = 0;
			ft_burningship1(e, x, y);
			if (e->i == e->i_max && e->aa < e->width && e->bb < e->height)
			{
				e->x = e->aa;
				e->y = e->bb;
				ft_put_pixel(e, 10);
			}
			e->i = 1;
		}
		e->aa = 0;
	}
	mlx_put_image_to_window(e->mlx_ptr, e->win_ptr, e->img_ptr, 0, 0);
	ft_options(e);
}
