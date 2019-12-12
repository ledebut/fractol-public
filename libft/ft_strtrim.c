/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ledebut <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/16 15:36:15 by ledebut      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/19 19:15:49 by ledebut     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int i;
	int j;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (s[i] == '\n' || s[i] == '\t' || s[i] == ' ')
		i++;
	if (s[i] == '\0')
		return (ft_strdup(((char*)s) + i));
	j = ft_strlen(s) - 1;
	while (s[j] == '\n' || s[j] == '\t' || s[j] == ' ')
		j--;
	return (ft_strsub(s, i, (j - i) + 1));
}
