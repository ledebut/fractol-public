/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   deal_key_split.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ledebut <ledebut@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/12 11:02:24 by ledebut      #+#   ##    ##    #+#       */
/*   Updated: 2019/12/12 11:05:55 by ledebut     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fractol.h"

void	ft_quit(t_e *e)
{
	mlx_clear_window(e->mlx_ptr, e->win_ptr);
	mlx_destroy_window(e->mlx_ptr, e->win_ptr);
	exit(0);
}

void	swap_fract(int key, t_e *e)
{
	if (e->name == 'j')
	{
		e->name = 'm';
		ft_print_fract(e);
	}
	else if (e->name == 'm')
	{
		e->name = 'b';
		ft_print_fract(e);
	}
	else if (e->name == 'b')
	{
		e->name = 'j';
		e->button = "on";
		ft_print_fract(e);
	}
}

void	deal_key_split(int key, t_e *e)
{
	if (key == 53)
		ft_quit(e);
	if (key == 69)
	{
		e->i_max = e->i_max + 2;
		ft_print_fract(e);
	}
	if (key == 78 && e->i_max > 2)
	{
		e->i_max = e->i_max - 2;
		ft_print_fract(e);
	}
	if (key == 76)
		swap_fract(key, e);
	if (key == 15)
	{
		e->zoom = 16;
		e->n = 200;
		e->hauteur = 2.5;
		e->largeur = 2.5;
		ft_print_fract(e);
	}
}
