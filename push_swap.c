/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 16:32:48 by mhidani           #+#    #+#             */
/*   Updated: 2025/09/29 00:49:38 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_dlist	*stack_a;
	t_dlist	*stack_b;

	if (argc < 2)
	{
		ft_putstr_fd("Error\n", STDERR_FILENO);
		return (EXIT_FAILURE);
	}
	stack_a = ft_validate(argc, argv);
	if (!stack_a)
	{
		ft_putstr_fd("Error\n", STDERR_FILENO);
		return (EXIT_FAILURE);
	}
	stack_b = ft_create_dlist(NULL);
	// todo: resolve algorithm steps sort stack_a
	ft_clean_dlist(&stack_a, ft_clean_element);
	ft_clean_dlist(&stack_b, ft_clean_element);
	return (0);
}
