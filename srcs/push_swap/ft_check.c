/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:30:38 by mhidani           #+#    #+#             */
/*   Updated: 2025/09/30 15:53:32 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "push_swap.h"

// static char	ft_is_mediam(t_dlist *stack, t_dnode *target);
// static int	ft_closest_factor(t_dnode *target, int check);
// static int	ft_push_cost(t_dlist *stack_a, t_dlist *stack_b, t_dnode *target);
// static int	ft_sort_cost(t_dlist *stack, t_dnode *target);

// void	ft_check(t_dlist *stack_a, t_dlist *stack_b, int value)
// {
// 	t_dnode	*pvt;

// 	pvt = stack_a->head;
// 	while (pvt)
// 	{
// 		((t_elm *)pvt->data)->closest_factor = ft_closest_factor(pvt, value);
// 		((t_elm *)pvt->data)->is_mediam = ft_is_mediam(stack_a, pvt);
// 		((t_elm *)pvt->data)->push_cost = ft_push_cost(stack_a, stack_b, pvt);
// 		pvt = pvt->next;
// 	}
// }

// static char	ft_is_mediam(t_dlist *stack, t_dnode *target)
// {
// 	if (ft_indexof_dlist(stack, target) < (size_t)(stack->size / 2))
// 		return (1);
// 	return (0);
// }

// static int	ft_closest_factor(t_dnode *target, int check)
// {
// 	if (((t_elm *)target->data)->value < check)
// 		return (check - ((t_elm *)target->data)->value);
// 	return (((t_elm *)target->data)->value - check);
// }

// static int	ft_push_cost(t_dlist *stack_a, t_dlist *stack_b, t_dnode *target)
// {
// 	char	is_mediam;
// 	int		cost;
// 	t_dnode	*pvt;

// 	cost = 0;
// 	pvt = target;
// 	is_mediam = ((t_elm *)target->data)->is_mediam;
// 	if (is_mediam)
// 	{
// 		while (pvt && pvt != stack_a->head)
// 		{
// 			cost++;
// 			pvt = pvt->prev;
// 		}
// 	}
// 	else
// 	{
// 		while (pvt && pvt != stack_a->tail)
// 		{
// 			cost++;
// 			pvt = pvt->next;
// 		}
// 		cost++;
// 	}
// 	return (cost + ft_sort_cost(stack_b, target) + 1);
// }

// static int	ft_sort_cost(t_dlist *stack, t_dnode *target)
// {
// 	int		closest_factor;
// 	char	is_mediam;
// 	t_dnode	*pvt;

// 	if (((t_elm *)target->data)->value < ((t_elm *)stack->tail->data)->value)
// 		return (1);
// 	if (((t_elm *)target->data)->value > ((t_elm *)stack->head->data)->value)
// 		return (0);
// 	pvt = stack->head;
// 	while (pvt)
// 	{
// 		closest_factor = ft_closest_factor(pvt, ((t_elm *)target->data)->value);
// 		pvt = pvt = pvt->next;
// 	}
// 	is_mediam = ft_is_mediam(stack, target);
		
// 	((t_elm *)target->data)->value 
// }
