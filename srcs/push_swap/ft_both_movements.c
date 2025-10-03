/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_both_movements.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 08:55:30 by mhidani           #+#    #+#             */
/*   Updated: 2025/10/03 08:59:49 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_swap(t_dlist **stk_a, t_dlist **stk_b)
{
	ft_swap(stk_a, NULL);
	ft_swap(stk_b, NULL);
	ft_putstrln_fd("ss", STDOUT_FILENO);
}

void	ft_rotate_rotate(t_dlist **stk_a, t_dlist **stk_b)
{
	ft_rotate(stk_a, NULL);
	ft_rotate(stk_b, NULL);
	ft_putstrln_fd("rr", STDOUT_FILENO);
}

void	ft_reverse_rotate_rotate(t_dlist **stk_a, t_dlist **stk_b)
{
	ft_reverse_rotate(stk_a, NULL);
	ft_reverse_rotate(stk_b, NULL);
	ft_putstrln_fd("rrr", STDOUT_FILENO);
}
