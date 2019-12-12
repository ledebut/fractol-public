/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ledebut <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/09 19:03:52 by ledebut      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/15 17:50:04 by ledebut     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	size_t lenght;

	i = 0;
	j = 0;
	lenght = ft_strlen(needle);
	if (lenght == 0)
		return ((char*)haystack);
	while (haystack[i] && len-- >= lenght)
	{
		while (needle[j] == haystack[i + j])
		{
			if (j == lenght - 1)
				return ((char*)haystack + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
