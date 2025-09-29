/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 17:11:01 by mhidani           #+#    #+#             */
/*   Updated: 2025/09/29 00:38:17 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pb(t_dlist **stack_a, t_dlist **stack_b)
{
	t_dnode	*head_a;

	if (!stack_a || !(*stack_a)->head)
		return ;
	head_a = (*stack_a)->head;
	(*stack_a)->head = head_a->next;
	if ((*stack_a)->head)
		(*stack_a)->head->prev = NULL;
	else
		(*stack_a)->tail = NULL;
	if ((*stack_b)->head)
	{
		head_a->next = (*stack_b)->head;
		(*stack_b)->head->prev = head_a;
		(*stack_b)->head = head_a;
	}
	else
	{
		(*stack_b)->head = head_a;
		(*stack_b)->tail = head_a;
		head_a->next = NULL;
	}
	(*stack_b)->size++;
	(*stack_a)->size--;
}
