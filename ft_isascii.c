/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoloi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 12:54:03 by mmoloi            #+#    #+#             */
/*   Updated: 2019/06/01 09:13:25 by mmoloi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_isascii(int c)
{
	if ( c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
