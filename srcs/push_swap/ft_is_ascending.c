/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_ascending.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 00:55:09 by mhidani           #+#    #+#             */
/*   Updated: 2025/09/29 01:24:09 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	ft_is_ascending(t_dlist *stack)
{
	t_dnode	*pvt;

	if (!stack || !stack->head || !stack->tail)
		return (0);
	pvt = stack->head;
	while (pvt->next)
	{
		if (((t_elm *)pvt->data)->value > ((t_elm *)pvt->next->data)->value)
			return (0);
		pvt = pvt->next;
	}
	return (1);
}
