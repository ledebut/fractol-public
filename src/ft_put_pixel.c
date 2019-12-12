/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_put_pixel.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ledebut <ledebut@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/17 08:32:44 by ledebut      #+#   ##    ##    #+#       */
/*   Updated: 2019/12/11 09:25:05 by ledebut     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fractol.h"

void	ft_put_pixel(t_e *e, int bright)
{
	e->data_image[e->y * e->sl + e->x * 4 + 0] = (char)bright * e->color1;
	e->data_image[e->y * e->sl + e->x * 4 + 1] = (char)bright * e->color2;
	e->data_image[e->y * e->sl + e->x * 4 + 2] = (char)bright * e->color3;
	e->data_image[e->y * e->sl + e->x * 4 + 3] = 0;
}
