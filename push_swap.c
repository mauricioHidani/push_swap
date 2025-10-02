/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 16:32:48 by mhidani           #+#    #+#             */
/*   Updated: 2025/10/02 13:41:49 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_begin_step(int c, char **v, t_dlist **stk_a, t_dlist **stk_b);

int	main(int argc, char **argv)
{
	t_dlist	*stack_a;
	t_dlist	*stack_b;

	ft_begin_step(argc, argv, &stack_a, &stack_b);
	// todo: resolve algorithm steps sort stack_a
	if (ft_is_ascending(stack_a))
		return (EXIT_FAILURE);
	if (stack_a->size == 2)
		ft_stwo(&stack_a);
	if (stack_a->size == 3)
		ft_sthree(&stack_a);
	if (stack_a->size == 5)
		ft_sfive(&stack_a, &stack_b);
	ft_clean_dlist(&stack_a, ft_clean_element);
	ft_clean_dlist(&stack_b, ft_clean_element);
	return (EXIT_SUCCESS);
}

static void	ft_begin_step(int c, char **v, t_dlist **stk_a, t_dlist **stk_b)
{
	if (c < 2)
		exit(EXIT_SUCCESS);
	*stk_a = ft_validate(c, v);
	if (!*stk_a)
	{
		ft_putstr_fd("Error\n", STDOUT_FILENO);
		exit(EXIT_FAILURE);
	}
	*stk_b = ft_create_dlist(NULL);
	if (!*stk_b)
	{
		ft_putstr_fd("Error\n", STDOUT_FILENO);
		ft_clean_dlist(stk_a, ft_clean_element);
		exit(EXIT_FAILURE);
	}
}
