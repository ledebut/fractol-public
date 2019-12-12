/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ledebut <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/09 15:41:59 by ledebut      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/13 19:22:39 by ledebut     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned long i;
	unsigned long dstlen;
	unsigned long srclen;

	i = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen((char*)src);
	if (size <= dstlen)
		return (srclen + size);
	while (dst[i] && i < size - 1)
		i++;
	while (i < size - 1 && *src)
	{
		dst[i] = *src;
		src++;
		i++;
	}
	dst[i] = '\0';
	return (dstlen + srclen);
}
