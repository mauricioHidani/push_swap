/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 16:35:33 by mhidani           #+#    #+#             */
/*   Updated: 2025/10/02 11:58:05 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char		**ft_collect_values(int argc, char **argv);
static void		ft_push_stack(t_dlist **stack, char *elm);
static size_t	ft_count_digits(int nbr);
static void		ft_check_equals(t_dlist **stack);

t_dlist	*ft_validate(int argc, char **argv)
{
	int		i;
	char	**tab;
	t_dlist	*stack;

	i = 0;
	tab = ft_collect_values(argc, argv);
	stack = ft_create_dlist(NULL);
	while (tab[i])
	{
		ft_push_stack(&stack, tab[i]);
		i++;
	}
	ft_clean_tab((void **)tab);
	ft_check_equals(&stack);
	return (stack);
}

static char	**ft_collect_values(int argc, char **argv)
{
	char	*tmp;
	char	*str;
	char	**tab;
	int		i;

	i = 1;
	str = ft_strdup("");
	while (i < argc)
	{
		tmp = str;
		str = ft_strjoin(str, argv[i]);
		free(tmp);
		tmp = NULL;
		if (i < (argc - 1))
		{
			tmp = str;
			str = ft_strjoin(str, " ");
			free(tmp);
			tmp = NULL;
		}
		i++;
	}
	tab = ft_split(str, ' ');
	free(str);
	return (tab);
}

static size_t	ft_count_digits(int nbr)
{
	size_t	count;

	if (nbr == 0)
		return (1);
	count = 0;
	if (nbr < 0)
	{
		nbr = (nbr / 10) * -1;
		count += 2;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

static void	ft_push_stack(t_dlist **stack, char *str)
{
	t_elm	*elm;

	elm = malloc(sizeof(t_elm));
	if (!elm)
	{
		ft_clean_dlist(stack, ft_clean_element);
		return ;
	}
	elm->rot_cost = -1;
	elm->closest_factor = 0;
	elm->is_mediam = 0;
	elm->value = ft_atoi(str);
	if (ft_count_digits(elm->value) != ft_strlen(str))
	{
		ft_clean_dlist(stack, ft_clean_element);
		return ;
	}
	ft_push_lst_dlist(*stack, elm);
}

static void	ft_check_equals(t_dlist **stack)
{
	t_dnode	*pvt;
	t_dnode	*ax;

	pvt = (*stack)->head;
	while (pvt)
	{
		ax = pvt->next;
		while (ax && ((t_elm *)ax->data)->value != ((t_elm *)pvt->data)->value)
			ax = ax->next;
		if (ax && ((t_elm *)ax->data)->value == ((t_elm *)pvt->data)->value)
		{
			ft_clean_dlist(stack, ft_clean_element);
			return ;
		}
		pvt = pvt->next;
	}
}
