/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 00:28:31 by mhidani           #+#    #+#             */
/*   Updated: 2025/09/30 15:35:20 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_rotate(t_dlist **stack_a, t_dlist **stack_b, char *dsp)
{
	ft_rotate(stack_a, NULL);
	ft_rotate(stack_b, NULL);
	ft_putstr_fd(dsp, STDOUT_FILENO);
}
