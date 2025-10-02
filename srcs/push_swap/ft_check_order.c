/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_order.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 00:55:09 by mhidani           #+#    #+#             */
/*   Updated: 2025/10/02 16:23:54 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	ft_is_ascending(t_dlist *stk)
{
	t_dnode	*pvt;

	if (!stk || !stk->head || !stk->tail)
		return (0);
	pvt = stk->head;
	while (pvt->next)
	{
		if (((t_elm *)pvt->data)->value > ((t_elm *)pvt->next->data)->value)
			return (0);
		pvt = pvt->next;
	}
	return (1);
}

char	ft_is_descending(t_dlist *stk)
{
	t_dnode	*pvt;

	if (!stk || !stk->head || !stk->tail)
		return (0);
	pvt = stk->head;
	while (pvt->next)
	{
		if (((t_elm *)pvt->data)->value < ((t_elm *)pvt->next->data)->value)
			return (0);
		pvt = pvt->next;
	}
	return (1);
}
