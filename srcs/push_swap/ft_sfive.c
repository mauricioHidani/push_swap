/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sfive.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:40:32 by mhidani           #+#    #+#             */
/*   Updated: 2025/10/02 17:00:39 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_dnode	*ft_get_min(t_dlist *stk, t_dnode *exc);
static void		ft_handle_mins(t_dlist **stk_a, t_dlist **stk_b);
static void		ft_move_rot(t_dlist **stk, t_dnode *tgt);

void	ft_sfive(t_dlist **stk_a, t_dlist **stk_b)
{
	ft_handle_mins(stk_a, stk_b);
	if (!ft_is_ascending(*stk_a))
		ft_sthree(stk_a);
	if (!ft_is_descending(*stk_b))
		ft_swap(stk_b, "sb\n");
	ft_push(stk_b, stk_a, "pa\n");
	ft_push(stk_b, stk_a, "pa\n");
}

static t_dnode	*ft_get_min(t_dlist *stk)
{
	int		crr_v;
	int		tgt_v;
	t_dnode	*min;
	t_dnode	*pvt;

	min = stk->head;
	pvt = stk->head->next;
	while (pvt)
	{
		crr_v = ((t_elm *)min->data)->value;
		tgt_v = ((t_elm *)pvt->data)->value;
		if (crr_v > tgt_v)
			min = pvt;
		pvt = pvt->next;
	}
	return (min);
}

static void	ft_handle_mins(t_dlist **stk_a, t_dlist **stk_b)
{
	int		i;
	t_dnode	*min;

	i = 0;
	min = ft_get_min(stk_a);
	while (i < 2)
	{
		if (min == (*stk_a)->head)
			ft_push(stk_a, stk_b, "pb");
		i++;
	}
}

static void	ft_move_rot(t_dlist **stk, t_dnode *tgt)
{
	int	count;

	count = 0;
	((t_elm *)tgt->data)->rot_cost = ft_rotate_cost(*stk, tgt);
	((t_elm *)tgt->data)->is_mediam = ft_is_mediam(*stk, tgt);
	while (count < ((t_elm *)tgt->data)->rot_cost)
	{
		if (((t_elm *)tgt->data)->is_mediam)
			ft_rotate(stk, "ra");
		else
			ft_reverse_rotate(stk, "rra");
		count++;
	}
}
