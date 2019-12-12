/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ledebut <ledebut@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/17 16:05:02 by ledebut      #+#   ##    ##    #+#       */
/*   Updated: 2019/12/11 10:05:55 by ledebut     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static char	*ft_fillstr(char *str, long i, long j, long sign)
{
	i--;
	str[i] = '\0';
	i--;
	while (i >= 0)
	{
		str[i] = (j % 10) + 48;
		j = j / 10;
		i--;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}

char		*ft_itoa(int n)
{
	long i;
	long j;
	long sign;
	char *str;

	j = ft_abs(n);
	i = 2;
	sign = 1;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		sign = -1;
		n = -n;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	if (sign == -1)
		i++;
	if (!(str = ((char*)malloc(sizeof(char) * i))))
		return (NULL);
	return (ft_fillstr(str, i, j, sign));
}
