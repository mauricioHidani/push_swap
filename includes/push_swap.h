/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 23:20:25 by mhidani           #+#    #+#             */
/*   Updated: 2025/10/04 11:55:47 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "dlist.h"

# define TRUE 0x01
# define FALSE 0x00

typedef char	t_bool;

typedef struct s_figure
{
	int		value;
	int		top_cost;
	int		closest_factor;
	t_bool	is_mediam;
}	t_figure;

// Sort Algorithm ==============================================================
void		ft_stwo(t_dlist **stk);
void		ft_sthree(t_dlist **stk);
void		ft_sfive(t_dlist **stk_a, t_dlist **stk_b);
// Handle Movement -------------------------------------------------------------
void		ft_handle_rotate(t_dlist **stk, t_dnode *tgt, char *aim);
void		ft_handle_bth_rotate(t_dlist **stk_a, t_dlist **stk_b, t_dnode *tb);
// Cost ------------------------------------------------------------------------
void		ft_build_cost(t_dlist *stk, t_dnode *tgt);
t_bool		ft_is_mediam(t_dlist *stk, t_dnode *tgt);
int			ft_to_top_cost(t_dnode *tgt);
int			ft_closest_factor(t_dnode *tgt, t_dnode *chk);

// Utils =======================================================================
// Checkers Order --------------------------------------------------------------
t_bool		ft_is_ascending(t_dlist *stk);
t_bool		ft_is_descending(t_dlist *stk);
// Checkers end Builder --------------------------------------------------------
t_dlist		*ft_validate(int argc, char **argv);
// Methods Element -------------------------------------------------------------
t_figure	*ft_figure(t_dnode *node);
void		ft_clean_figure(void *ptr);

// Movements Operations ========================================================
void		ft_push(t_dlist **tgt, t_dlist **dst, char *dsp);
void		ft_swap(t_dlist **stk, char *dsp);
void		ft_swap_swap(t_dlist **stk_a, t_dlist **stk_b);
void		ft_rotate(t_dlist **stk, char *dsp);
void		ft_rotate_rotate(t_dlist **stk_a, t_dlist **stk_b);
void		ft_reverse_rotate(t_dlist **stk, char *dsp);
void		ft_reverse_rotate_rotate(t_dlist **stk_a, t_dlist **stk_b);

#endif
