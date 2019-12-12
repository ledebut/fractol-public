/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrchr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ledebut <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/09 16:56:48 by ledebut      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/22 15:26:12 by ledebut     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int j;

	j = ft_strlen((char*)s);
	if (c == '\0')
		return (&(((char*)s)[j]));
	j--;
	while (j >= 0)
	{
		if (s[j] == ((char)c))
			return (&(((char*)s)[j]));
		else
			j--;
	}
	return (NULL);
}
