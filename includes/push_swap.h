/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 23:20:25 by mhidani           #+#    #+#             */
/*   Updated: 2025/10/02 16:25:09 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "dlist.h"

typedef struct s_elm
{
	int		value;
	int		rot_cost;
	int		closest_factor;
	char	is_mediam;
}	t_elm;

// Sort Algorithm ==============================================================
void	ft_stwo(t_dlist **stk);
void	ft_sthree(t_dlist **stk);
void	ft_sfive(t_dlist **stk_a, t_dlist **stk_b);
// Calc Cost -------------------------------------------------------------------
void	ft_calc_cost(t_dlist *stk, t_dnode *tgt);
// Utils Calc Cost -------------------------------------------------------------
char	ft_is_mediam(t_dlist *stk, t_dnode *tgt);
int		ft_rotate_cost(t_dlist *stk, t_dnode *tgt);
int		ft_closest_factor(t_dnode *target, int check);

// Utils =======================================================================
// Checkers Order --------------------------------------------------------------
char	ft_is_ascending(t_dlist *stk);
char	ft_is_descending(t_dlist *stk);
// Checkers end Builder --------------------------------------------------------
t_dlist	*ft_validate(int argc, char **argv);
// Cleaner ---------------------------------------------------------------------
void	ft_clean_element(void *ptr);

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
