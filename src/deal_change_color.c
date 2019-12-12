/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   deal_change_color.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ledebut <ledebut@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/11 09:27:33 by ledebut      #+#   ##    ##    #+#       */
/*   Updated: 2019/12/12 10:49:56 by ledebut     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fractol.h"

void	deal_change_color1(int key, t_e *e)
{
	if (key == 89)
	{
		e->color1 = 0;
		e->color2 = 10;
		e->color3 = -5;
		ft_print_fract(e);
	}
	if (key == 91)
	{
		e->color1 = -6;
		e->color2 = 3;
		e->color3 = -20;
		ft_print_fract(e);
	}
	if (key == 92)
	{
		e->color1 = 4;
		e->color2 = 4;
		e->color3 = 0;
		ft_print_fract(e);
	}
}

void	deal_change_color2(int key, t_e *e)
{
	if (key == 86)
	{
		e->color1 = 1;
		e->color2 = 1;
		e->color3 = 10;
		ft_print_fract(e);
	}
	if (key == 87)
	{
		e->color1 = -2;
		e->color2 = 3;
		e->color3 = 2;
		ft_print_fract(e);
	}
	if (key == 88)
	{
		e->color1 = 4;
		e->color2 = 2;
		e->color3 = 3;
		ft_print_fract(e);
	}
}

void	deal_change_color(int key, t_e *e)
{
	if (key == 83)
	{
		e->color1 = 1;
		e->color2 = 1;
		e->color3 = 1;
		ft_print_fract(e);
	}
	if (key == 84)
	{
		e->color1 = 2;
		e->color2 = 1;
		e->color3 = 1;
		ft_print_fract(e);
	}
	if (key == 85)
	{
		e->color1 = 2;
		e->color2 = 2;
		e->color3 = 1;
		ft_print_fract(e);
	}
	deal_change_color1(key, e);
	deal_change_color2(key, e);
}
