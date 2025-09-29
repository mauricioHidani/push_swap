/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 00:41:45 by mhidani           #+#    #+#             */
/*   Updated: 2025/09/29 00:41:56 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rrb(t_dlist **stack_b)
{
	t_dnode	*old_tail;

	if (!stack_b || !(*stack_b)->head || !(*stack_b)->tail)
		return ;
	if ((*stack_b)->head == (*stack_b)->tail)
		return ;
	old_tail = (*stack_b)->tail;
	(*stack_b)->tail = old_tail->prev;
	(*stack_b)->tail->next = NULL;
	(*stack_b)->head->prev = old_tail;
	old_tail->next = (*stack_b)->head;
	(*stack_b)->head = old_tail;
}
