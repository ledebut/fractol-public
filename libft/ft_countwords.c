/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_countwords.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ledebut <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/25 17:05:21 by ledebut      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/25 17:36:37 by ledebut     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_countwords(char const *str, char c)
{
	int		i;
	int		count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i + 1] == c || str[i + 1])
			count += 1;
		i++;
	}
	return (count);
}
