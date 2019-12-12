/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_getfirstword.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ledebut <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/25 17:11:07 by ledebut      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/25 17:12:22 by ledebut     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_getfirstword(const char *str)
{
	int		i;
	char	*res;
	int		len;
	int		pos;

	i = 0;
	len = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	pos = i;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
	{
		len++;
		i++;
	}
	res = ft_strsub(str, pos, len);
	return (res);
}
