/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   fractol.h                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ledebut <ledebut@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/16 08:01:56 by ledebut      #+#   ##    ##    #+#       */
/*   Updated: 2019/12/12 11:21:05 by ledebut     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "../mlx/mlx.h"
# include "../libft/libft.h"
# include "../GNL/get_next_line.h"
# include <fcntl.h>
# include <stdio.h>
# include <math.h>

typedef struct	s_e
{
	void	*mlx_ptr;
	void	*win_ptr;
	int		width;
	int		height;
	int		bpp;
	int		sl;
	int		endian;
	char	*data_image;
	void	*img_ptr;
	char	*color;
	int		x;
	int		y;
	int		i_max;
	double	n;
	double	ix;
	double	iy;
	double	hauteur;
	double	largeur;
	char	name;
	int		aa;
	int		bb;
	float	a;
	float	b;
	int		i;
	float	xx;
	float	yy;
	int		zoom;
	char	*button;
	int		block;
	int		color1;
	int		color2;
	int		color3;
}				t_e;

void			ft_init_window_and_image(t_e *e);
int				deal_key(int key, t_e *e);
int				deal_mouse(int mouse, int x, int y, t_e *e);
void			ft_put_pixel(t_e *e, int bright);
void			ft_mandelbrot(t_e *e);
void			ft_burningship(t_e *e);
void			ft_julia(t_e *e);
int				motion_notify(int x, int y, t_e *e);
void			ft_reset(t_e *e);
void			ft_print_fract(t_e *e);
void			ft_options(t_e *e);
void			deal_change_color(int key, t_e *e);
void			deal_key_split(int key, t_e *e);

#endif
