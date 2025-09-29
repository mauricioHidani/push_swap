/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 00:30:00 by mhidani           #+#    #+#             */
/*   Updated: 2025/09/29 00:41:16 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_dlist **stack_a)
{
	t_dnode	*old_tail;

	if (!stack_a || !(*stack_a)->head || !(*stack_a)->tail)
		return ;
	if ((*stack_a)->head == (*stack_a)->tail)
		return ;
	old_tail = (*stack_a)->tail;
	(*stack_a)->tail = old_tail->prev;
	(*stack_a)->tail->next = NULL;
	(*stack_a)->head->prev = old_tail;
	old_tail->next = (*stack_a)->head;
	(*stack_a)->head = old_tail;
}
