/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ledebut <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/16 15:17:39 by ledebut      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/19 19:28:30 by ledebut     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = ft_strlen((char*)s1);
	j = ft_strlen((char*)s2);
	k = 0;
	if (!(str = (char*)malloc(sizeof(char) * (i + j + 1))))
		return (NULL);
	while (*s1)
	{
		str[k++] = *s1;
		s1++;
	}
	while (*s2)
	{
		str[k++] = *s2;
		s2++;
	}
	str[k] = '\0';
	return (str);
}
