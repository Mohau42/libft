/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoloi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 16:44:05 by mmoloi            #+#    #+#             */
/*   Updated: 2019/06/27 15:39:02 by mmoloi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		get_digit(int n)
{
	int					d;
	unsigned long int	x;
	unsigned int		ln;

	x = 1;
	d = 0;
	ln = (n < 0 ? -n : n);
	if (n <= 0)
		d++;
	while (x <= ln)
	{
		x *= 10;
		d++;
	}
	return (d);
}

static	char	*get_num(char *sn, int n, int len)
{
	int				i;
	unsigned int	lns;

	i = len;
	lns = (n < 0 ? -n : n);
	while (i--)
	{
		if (i == 0 && n < 0)
			sn[i] = '-';
		else
			sn[i] = (lns % 10) + 48;
		lns /= 10;
	}
	return (sn);
}

char			*ft_itoa(int n)
{
	char	*sn;
	int		num;

	num = get_digit(n);
	sn = ft_strnew(num);
	if (sn == NULL)
		return (NULL);
	sn = get_num(sn, n, num);
	return (sn);
}
