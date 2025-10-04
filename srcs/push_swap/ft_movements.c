/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_movements.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 08:49:43 by mhidani           #+#    #+#             */
/*   Updated: 2025/10/04 12:19:41 by mhidani          ###   ########.fr       */
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

void	ft_rotate(t_dlist **stk, char *dsp)
{
	t_dnode	*old_head;

	if (!stk || !(*stk)->head || !(*stk)->tail)
		return ;
	if ((*stk)->head == (*stk)->tail)
		return ;
	old_head = (*stk)->head;
	(*stk)->head = old_head->next;
	(*stk)->head->prev = NULL;
	old_head->next = NULL;
	old_head->prev = (*stk)->tail;
	(*stk)->tail->next = old_head;
	(*stk)->tail = old_head;
	ft_putstrln_fd(dsp, STDOUT_FILENO);
}

void	ft_reverse_rotate(t_dlist **stk, char *dsp)
{
	t_dnode	*old_tail;

	if (!stk || !(*stk)->head || !(*stk)->tail)
		return ;
	if ((*stk)->head == (*stk)->tail)
		return ;
	old_tail = (*stk)->tail;
	(*stk)->tail = old_tail->prev;
	(*stk)->tail->next = NULL;
	(*stk)->head->prev = old_tail;
	old_tail->next = (*stk)->head;
	(*stk)->head = old_tail;
	ft_putstrln_fd(dsp, STDOUT_FILENO);
}

void	ft_swap(t_dlist **stk, char *dsp)
{
	t_dnode	*old_head;
	t_dnode	*next_old_head;

	if (!stk || !(*stk)->head || !(*stk)->head->next)
		return ;
	old_head = (*stk)->head;
	next_old_head = (*stk)->head->next;
	old_head->next = next_old_head->next;
	if (next_old_head->next)
		next_old_head->next->prev = old_head;
	else
		(*stk)->tail = old_head;
	next_old_head->prev = NULL;
	next_old_head->next = old_head;
	(*stk)->head = next_old_head;
	old_head->prev = next_old_head;
	ft_putstrln_fd(dsp, STDOUT_FILENO);
}
