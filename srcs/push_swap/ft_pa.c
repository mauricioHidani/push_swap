/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 16:57:05 by mhidani           #+#    #+#             */
/*   Updated: 2025/09/29 00:38:09 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_dlist **stack_a, t_dlist **stack_b)
{
	t_dnode	*head_b;

	if (!stack_b || !(*stack_b)->head)
		return ;
	head_b = (*stack_b)->head;
	(*stack_b)->head = head_b->next;
	if ((*stack_b)->head)
		(*stack_b)->head->prev = NULL;
	else
		(*stack_b)->tail = NULL;
	if ((*stack_a)->head)
	{
		head_b->next = (*stack_a)->head;
		(*stack_a)->head->prev = head_b;
		(*stack_a)->head = head_b;
	}
	else
	{
		(*stack_a)->head = head_b;
		(*stack_a)->tail = head_b;
		head_b->next = NULL;
	}
	(*stack_a)->size++;
	(*stack_b)->size--;
}
