/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 14:07:43 by clwenhaj          #+#    #+#             */
/*   Updated: 2026/01/03 15:09:40 by clwenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_index_of_min(t_list *a)
{
	int	min;

	if (!a)
		return (0);
	min = a->index;
	while (a)
	{
		if (a->index < min)
			min = a->index;
		a = a->next;
	}
	return (min);
}

int	get_position(t_list *a, int index)
{
	int	i;

	i = 0;
	while (a)
	{
		if (a->index == index)
			return (i);
		i++;
		a = a->next;
	}
	return (-1);
}

void	push_min_of_a_to_b(t_list **a, t_list **b)
{
	int	pos;
	int	size;

	if (!a || !(*a))
		return ;
	size = ft_lstsize(*a);
	pos = get_position(*a, find_index_of_min(*a));
	if (pos <= size / 2)
	{
		while (pos-- > 0)
			ra(a);
	}
	else
	{
		while (pos++ < size)
			rra(a);
	}
	pb(a, b);
}

int	is_sorted(t_list *a)
{
	while (a && a->next)
	{
		if (a->index > a->next->index)
			return (0);
		a = a->next;
	}
	return (1);
}

void	free_stack(t_list *a)
{
	t_list	*tmp;

	while (a)
	{
		tmp = a->next;
		free(a);
		a = tmp;
	}
}
