/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 16:35:07 by mhidani           #+#    #+#             */
/*   Updated: 2025/09/29 00:39:31 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_dlist **stack_a)
{
	t_dnode	*old_head;
	t_dnode	*next_old_head;

	if (!stack_a || !(*stack_a)->head || !(*stack_a)->head->next)
		return ;
	old_head = (*stack_a)->head;
	next_old_head = (*stack_a)->head->next;
	old_head->next = next_old_head->next;
	if (next_old_head->next)
		next_old_head->next->prev = old_head;
	else
		(*stack_a)->tail = old_head;
	next_old_head->prev = NULL;
	next_old_head->next = old_head;
	(*stack_a)->head = next_old_head;
	old_head->prev = next_old_head;
}
