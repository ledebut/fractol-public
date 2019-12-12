/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   deal_key.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ledebut <ledebut@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/16 08:20:14 by ledebut      #+#   ##    ##    #+#       */
/*   Updated: 2019/12/12 11:05:51 by ledebut     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fractol.h"

void	deal_arrows_vertical(int key, t_e *e)
{
	float	i;

	i = 15;
	if (key == 125)
	{
		e->hauteur = e->hauteur - i / e->n;
		ft_print_fract(e);
	}
	if (key == 126)
	{
		e->hauteur = e->hauteur + i / e->n;
		ft_print_fract(e);
	}
	if (key == 13)
	{
		e->hauteur = e->hauteur + 100 / e->n;
		ft_print_fract(e);
	}
	if (key == 1)
	{
		e->hauteur = e->hauteur - 100 / e->n;
		ft_print_fract(e);
	}
}

void	deal_arrows_horizontal(int key, t_e *e)
{
	float	i;

	i = 15;
	if (key == 123)
	{
		e->largeur = e->largeur + i / e->n;
		ft_print_fract(e);
	}
	if (key == 124)
	{
		e->largeur = e->largeur - i / e->n;
		ft_print_fract(e);
	}
	if (key == 0)
	{
		e->largeur = e->largeur + 100 / e->n;
		ft_print_fract(e);
	}
	if (key == 2)
	{
		e->largeur = e->largeur - 100 / e->n;
		ft_print_fract(e);
	}
}

int		deal_key(int key, t_e *e)
{
	float j;

	j = 0.01;
	if (key == 49)
	{
		if (strcmp(e->button, "on") == 0)
		{
			e->button = "off";
			e->block = 1;
		}
		else
		{
			e->button = "on";
			e->block = 0;
		}
		ft_print_fract(e);
	}
	deal_key_split(key, e);
	deal_arrows_vertical(key, e);
	deal_arrows_horizontal(key, e);
	deal_change_color(key, e);
	return (key);
}
