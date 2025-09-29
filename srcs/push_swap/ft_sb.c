/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 16:48:30 by mhidani           #+#    #+#             */
/*   Updated: 2025/09/29 00:40:01 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sb(t_dlist **stack_b)
{
	t_dnode	*old_head;
	t_dnode	*next_old_head;

	if (!stack_b || !(*stack_b)->head || !(*stack_b)->head->next)
		return ;
	old_head = (*stack_b)->head;
	next_old_head = (*stack_b)->head->next;
	old_head->next = next_old_head->next;
	if (next_old_head->next)
		next_old_head->next->prev = old_head;
	else
		(*stack_b)->tail = old_head;
	next_old_head->prev = NULL;
	next_old_head->next = old_head;
	(*stack_b)->head = next_old_head;
	old_head->prev = next_old_head;
}
