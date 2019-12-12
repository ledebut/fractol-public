/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_fract.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ledebut <ledebut@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/21 15:15:03 by ledebut      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/27 17:55:10 by ledebut     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fractol.h"

void	ft_print_fract(t_e *e)
{
	if (e->name == 'm')
		ft_mandelbrot(e);
	else if (e->name == 'b')
		ft_burningship(e);
	else if (e->name == 'j')
		ft_julia(e);
}
