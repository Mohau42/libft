/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_example.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoloi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 15:30:14 by mmoloi            #+#    #+#             */
/*   Updated: 2019/06/24 15:37:55 by mmoloi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

int		main()
{
	char str[50];

	ft_strcpy(str, "This is libft.h library function");
	printf("%s",str);

	ft_memset(str, '$', 7);
	printf("%s",str);

	return(0);
}
