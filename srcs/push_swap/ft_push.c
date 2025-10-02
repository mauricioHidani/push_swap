/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 16:57:05 by mhidani           #+#    #+#             */
/*   Updated: 2025/10/02 17:00:21 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_dlist **tgt, t_dlist **dst, char *dsp)
{
	t_dnode	*head_b;

	if (!tgt || !(*tgt)->head)
		return ;
	head_b = (*tgt)->head;
	(*tgt)->head = head_b->next;
	if ((*tgt)->head)
		(*tgt)->head->prev = NULL;
	else
		(*tgt)->tail = NULL;
	if ((*dst)->head)
	{
		head_b->next = (*dst)->head;
		(*dst)->head->prev = head_b;
		(*dst)->head = head_b;
	}
	else
	{
		(*dst)->head = head_b;
		(*dst)->tail = head_b;
		head_b->next = NULL;
	}
	(*dst)->size++;
	(*tgt)->size--;
	ft_putstrln_fd(dsp, STDOUT_FILENO);
}
