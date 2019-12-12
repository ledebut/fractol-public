/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memset.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ledebut <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/06 18:27:06 by ledebut      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/12 17:43:28 by ledebut     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t i;

	i = 0;
	if (len == 0)
		return ((char*)b);
	while (len > 0)
	{
		(((char*)b)[i]) = ((unsigned char)c);
		i++;
		len--;
	}
	return (b);
}
