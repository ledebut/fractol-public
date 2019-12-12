/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_julia.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ledebut <ledebut@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/13 07:07:24 by ledebut      #+#   ##    ##    #+#       */
/*   Updated: 2019/12/12 11:27:44 by ledebut     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fractol.h"

void	ft_julia1(t_e *e, float x, float y)
{
	float t;

	while (e->i < e->i_max)
	{
		t = x;
		x = (x * x) - (y * y) + (e->xx - 300) * -0.003;
		y = ((2 * t * y)) + (e->yy - 300) * -0.003;
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

void	ft_julia(t_e *e)
{
	float x;
	float y;

	ft_reset(e);
	while (e->bb++ <= e->height)
	{
		e->b = 0;
		while (e->aa++ <= e->width)
		{
			e->a = 0;
			x = e->hauteur - (e->bb / e->n);
			y = -e->largeur + (e->aa / e->n);
			ft_julia1(e, x, y);
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
