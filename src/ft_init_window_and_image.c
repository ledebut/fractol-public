/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_init_window_and_image.c                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ledebut <ledebut@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/16 08:00:48 by ledebut      #+#   ##    ##    #+#       */
/*   Updated: 2019/12/12 11:24:18 by ledebut     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fractol.h"

void	ft_init_image(t_e *e)
{
	char	*get_image;
	int		put_image;
	int		endian;

	e->img_ptr = mlx_new_image(e->mlx_ptr, e->width, e->height);
	e->data_image =
	mlx_get_data_addr(e->img_ptr, &e->bpp, &e->sl, &e->endian);
	if (!(e->data_image))
	{
		exit(0);
	}
}

void	ft_init_window_and_image(t_e *e)
{
	e->block = 0;
	e->button = "on";
	e->zoom = 16;
	e->a = 0;
	e->b = 0;
	e->aa = 0;
	e->bb = 0;
	e->i = 0;
	e->n = 200;
	e->i_max = 30;
	e->hauteur = 2.5;
	e->largeur = 2.5;
	e->width = 1000;
	e->height = 1000;
	e->mlx_ptr = mlx_init();
	e->win_ptr =
	mlx_new_window(e->mlx_ptr, e->width, e->height, "fractol");
	ft_init_image(e);
}
