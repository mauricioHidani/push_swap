/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sthree.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:04:12 by mhidani           #+#    #+#             */
/*   Updated: 2025/09/30 16:05:34 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sthree(t_dlist **stk)
{
	t_dnode	*max;
	t_dnode	*pivot;

	pivot = (*stk)->head;
	max = (*stk)->head;
	while (pivot)
	{
		if (((t_elm *)max->data)->value < ((t_elm *)pivot->data)->value)
			max = pivot;
		pivot = pivot->next;
	}
	if (max == (*stk)->head)
	{
		ft_swap(stk, "sa\n");
		ft_reverse_rotate(stk, "rra\n");
	}
	else if (max == (*stk)->tail)
		ft_swap(stk, "sa\n");
	else
	{
		ft_reverse_rotate(stk, "rra\n");
		if (!ft_is_ascending((*stk)))
			ft_swap(stk, "sa\n");
	}
}

