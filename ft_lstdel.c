/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoloi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 09:06:27 by mmoloi            #+#    #+#             */
/*   Updated: 2019/06/02 09:12:35 by mmoloi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;
	t_list *next;

	tmp = *alst;
	if(del != NULL)
	{
		while (tmp != NULL)
		{
			next = tmp->next;
			del(tmp->content, tmp->content_size);
			free(tmp);
		}
		*alst = NULL;
	}
}
