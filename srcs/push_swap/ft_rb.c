/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 00:27:08 by mhidani           #+#    #+#             */
/*   Updated: 2025/09/29 00:38:49 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rb(t_dlist **stack_b)
{
	t_dnode	*old_head;

	if (!stack_b || !(*stack_b)->head || !(*stack_b)->tail)
		return ;
	if ((*stack_b)->head == (*stack_b)->tail)
		return ;
	old_head = (*stack_b)->head;
	(*stack_b)->head = old_head->next;
	(*stack_b)->head->prev = NULL;
	old_head->next = NULL;
	old_head->prev = (*stack_b)->tail;
	(*stack_b)->tail->next = old_head;
	(*stack_b)->tail = old_head;
}
