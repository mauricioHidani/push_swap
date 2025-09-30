/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 23:20:25 by mhidani           #+#    #+#             */
/*   Updated: 2025/09/30 15:54:40 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "dlist.h"

typedef struct s_elm
{
	int		value;
	int		push_cost;
	int		closest_factor;
	char	is_mediam;
}	t_elm;

// Sort Algorithm ==============================================================
void	ft_stwo(t_dlist **stk);
void	ft_sthree(t_dlist **stk);

// Utils =======================================================================
// Checkers --------------------------------------------------------------------
char	ft_is_ascending(t_dlist *stack);
// Checkers end Builder --------------------------------------------------------
t_dlist	*ft_validate(int argc, char **argv);
// Cleaner ---------------------------------------------------------------------
void	ft_clean_element(void *ptr);

// Sort Algorithm ==============================================================
void	ft_sort_stacks(t_dlist *stack_a, t_dlist *stack_b);

// Operations ==================================================================
// Push ------------------------------------------------------------------------
void	ft_push(t_dlist **tgt, t_dlist **dst, char *dsp);
// Swap ------------------------------------------------------------------------
void	ft_swap(t_dlist **stk, char *dsp);
void	ft_swap_swap(t_dlist **stk_a, t_dlist **stk_b, char *dsp);
// Rotate ----------------------------------------------------------------------
void	ft_rotate(t_dlist **stk, char *dsp);
void	ft_rotate_rotate(t_dlist **stk_a, t_dlist **stk_b, char *dsp);
// Reverse Rotate --------------------------------------------------------------
void	ft_reverse_rotate(t_dlist **stk, char *dsp);
void	ft_reverse_rotate_rotate(t_dlist **stk_a, t_dlist **stk_b, char *dsp);

#endif
