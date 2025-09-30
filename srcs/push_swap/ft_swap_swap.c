/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 16:51:43 by mhidani           #+#    #+#             */
/*   Updated: 2025/09/30 16:00:37 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_swap(t_dlist **stk_a, t_dlist **stk_b, char *dsp)
{
	ft_swap(stk_a,NULL);
	ft_swap(stk_b, NULL);
	ft_putstr_fd(dsp, STDOUT_FILENO);
}
