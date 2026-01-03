/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 14:06:53 by clwenhaj          #+#    #+#             */
/*   Updated: 2026/01/03 14:25:03 by clwenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_all(t_list **a, t_list **b)
{
	int	size;

	if (!a || !*a)
		return ;
	if (is_sorted(*a))
		return ;
	size = ft_lstsize(*a);
	if (size <= 5)
		sort_small(a, b);
	else
		radix_sort(a, b);
}
/*	{
		free_stack(*a);
		free_stack(*b);
		return;
	}*/
