/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ledebut <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/09 15:44:45 by ledebut      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/15 17:14:00 by ledebut     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;
	int j;

	j = ft_strlen((char*)s);
	i = 0;
	if (c == '\0')
		return (&((char*)s)[j]);
	while (s[i])
	{
		if (s[i] == ((char)c))
			return (&((char*)s)[i]);
		else
			i++;
	}
	return (NULL);
}
