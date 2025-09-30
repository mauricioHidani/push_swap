/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate_rotate.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 00:42:12 by mhidani           #+#    #+#             */
/*   Updated: 2025/09/30 15:55:23 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate_rotate(t_dlist **stk_a, t_dlist **stk_b, char *dsp)
{
	ft_reverse_rotate(stk_a, NULL);
	ft_reverse_rotate(stk_b, NULL);
	ft_putstr_fd(dsp, STDOUT_FILENO);
}
