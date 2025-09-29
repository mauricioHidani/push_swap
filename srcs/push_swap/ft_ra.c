/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 00:11:35 by mhidani           #+#    #+#             */
/*   Updated: 2025/09/29 00:38:35 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_dlist **stack_a)
{
	t_dnode	*old_head;

	if (!stack_a || !(*stack_a)->head || !(*stack_a)->tail)
		return ;
	if ((*stack_a)->head == (*stack_a)->tail)
		return ;
	old_head = (*stack_a)->head;
	(*stack_a)->head = old_head->next;
	(*stack_a)->head->prev = NULL;
	old_head->next = NULL;
	old_head->prev = (*stack_a)->tail;
	(*stack_a)->tail->next = old_head;
	(*stack_a)->tail = old_head;
}
