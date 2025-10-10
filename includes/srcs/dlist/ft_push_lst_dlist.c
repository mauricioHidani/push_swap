/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_lst_dlist.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 19:16:21 by mhidani           #+#    #+#             */
/*   Updated: 2025/09/23 14:24:19 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dlist.h"

void	ft_push_lst_dlist(t_dlist *list, void *data)
{
	t_dnode	*node;

	if (!list)
		return ;
	node = ft_create_dnode(data);
	if (!node)
		return ;
	if (list->tail == NULL)
	{
		list->tail = node;
		list->head = node;
	}
	else
	{
		node->prev = list->tail;
		list->tail->next = node;
		list->tail = node;
	}
	list->size++;
}
