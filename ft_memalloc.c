/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoloi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 13:03:17 by mmoloi            #+#    #+#             */
/*   Updated: 2019/06/11 13:05:57 by mmoloi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *q;

	q = malloc(size);
	if (q == NULL)
		return (NULL);
	ft_bzero(q, size);
	return (q);
}
