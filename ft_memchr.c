/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoloi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 09:59:25 by mmoloi            #+#    #+#             */
/*   Updated: 2019/06/01 10:04:11 by mmoloi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;

	while ( i < n )
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)s + 1);
		i++;
	}
	return (NULL);
}
