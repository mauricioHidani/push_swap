/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc_cost.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 11:20:57 by mhidani           #+#    #+#             */
/*   Updated: 2025/10/04 11:56:27 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_build_cost(t_dlist *stk, t_dnode *tgt)
{
	t_dnode	*pivot;

	pivot = stk->head;
	while (pivot)
	{
		ft_figure(pivot)->is_mediam = ft_is_mediam(stk, pivot);
		ft_figure(pivot)->top_cost = ft_to_top_cost(pivot);
		ft_figure(pivot)->closest_factor = ft_closest_factor(pivot, tgt);
		pivot = pivot->next;
	}
}

int	ft_to_top_cost(t_dnode *tgt)
{
	int		cost;
	t_bool	is_mediam;
	t_dnode	*pivot;

	cost = 0;
	is_mediam = ft_figure(tgt)->is_mediam;
	if (!is_mediam)
		cost++;
	pivot = tgt;
	while (pivot)
	{
		if (is_mediam)
			pivot = pivot->prev;
		else
			pivot = pivot->next;
		cost++;
	}
	return (cost);
}

t_bool	ft_is_mediam(t_dlist *stk, t_dnode *tgt)
{
	size_t	idx_pos;
	size_t	stk_mediam;

	idx_pos = ft_indexof_dlist(stk, tgt);
	stk_mediam = (size_t)(stk->size / 2);
	if (idx_pos <= stk_mediam)
		return (TRUE);
	return (FALSE);
}

int	ft_closest_factor(t_dnode *tgt, t_dnode *chk)
{
	int	value;
	int	checker_value;

	if (!chk)
		return (0);
	value = ft_figure(tgt)->value;
	checker_value = ft_figure(chk)->value;
	if (value < checker_value)
		return (checker_value - value);
	return (value - checker_value);
}
