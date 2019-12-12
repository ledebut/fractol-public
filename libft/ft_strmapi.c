/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmapi.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ledebut <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/15 21:49:50 by ledebut      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/22 12:46:48 by ledebut     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;
	int		j;

	if (s == NULL)
		return (NULL);
	i = ft_strlen(((char*)s));
	j = 0;
	str = (char*)malloc(sizeof(char) * i + 1);
	if (str == NULL)
		return (NULL);
	while (s[j])
	{
		str[j] = (f)(j, s[j]);
		j++;
	}
	str[j] = '\0';
	return (str);
}
