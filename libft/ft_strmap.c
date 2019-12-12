/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ledebut <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/15 21:15:19 by ledebut      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/19 19:11:21 by ledebut     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
		str[j] = (f)(s[j]);
		j++;
	}
	str[j] = '\0';
	return (str);
}
