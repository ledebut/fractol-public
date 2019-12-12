/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsplit.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ledebut <ledebut@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/16 17:58:24 by ledebut      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/25 17:29:40 by ledebut     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		k;
	char	**tab;

	i = 0;
	k = 0;
	if (!s || !c)
		return (NULL);
	if (!(tab = (char**)malloc(sizeof(tab) * ft_countwords(s, c) + 1)))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			tab[k] = ft_strsub(s, i, ft_lenghtword(s, c, i));
			k++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	tab[k] = 0;
	return (tab);
}
