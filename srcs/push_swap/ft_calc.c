/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 11:20:57 by mhidani           #+#    #+#             */
/*   Updated: 2025/10/02 12:37:20 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_calc_cost(t_dlist *stk, t_dnode *tgt)
{
	t_dnode	*pvt;
	int		vtgt;

	vtgt = ((t_elm *)tgt->data)->value;
	pvt = stk->head;
	while (pvt)
	{
		((t_elm *)pvt->data)->is_mediam = ft_is_mediam(stk, tgt);
		((t_elm *)pvt->data)->rot_cost = ft_rotate_cost(stk, tgt);
		((t_elm *)pvt->data)->closest_factor = ft_closest_factor(pvt, vtgt);
		pvt = pvt->next;
	}
}
