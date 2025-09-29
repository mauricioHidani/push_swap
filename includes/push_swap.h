/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 23:20:25 by mhidani           #+#    #+#             */
/*   Updated: 2025/09/29 00:43:12 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "dlist.h"

typedef struct s_elm
{
	int		index;
	int		value;
	int		push_cost;
	char	is_mediam;
	char	is_cheapset;
}	t_elm;

t_dlist	*ft_validate(int argc, char **argv);
void	ft_clean_element(void *ptr);

// Operations ==================================================================
// Push ------------------------------------------------------------------------
void	ft_pa(t_dlist **stack_a, t_dlist **stack_b);
void	ft_pb(t_dlist **stack_a, t_dlist **stack_b);
// Swap ------------------------------------------------------------------------
void	ft_sa(t_dlist **stack_a);
void	ft_sb(t_dlist **stack_b);
void	ft_ss(t_dlist **stack_a, t_dlist **stack_b);
// Rotate ----------------------------------------------------------------------
void	ft_ra(t_dlist **stack_a);
void	ft_rb(t_dlist **stack_b);
void	ft_rr(t_dlist **stack_a, t_dlist **stack_b);
// Reverse Rotate --------------------------------------------------------------
void	ft_rra(t_dlist **stack_a);
void	ft_rrb(t_dlist **stack_b);
void	ft_rrr(t_dlist **stack_a, t_dlist **stack_b);
// =============================================================================

#endif
