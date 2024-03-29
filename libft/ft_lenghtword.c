/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lenghtword.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ledebut <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/25 17:08:28 by ledebut      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/25 17:38:32 by ledebut     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_lenghtword(char const *s, char c, int i)
{
	int j;

	j = 0;
	while (s[i] != c && s[i])
	{
		j++;
		i++;
	}
	return (j);
}
