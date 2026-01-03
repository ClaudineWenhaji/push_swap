/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 14:07:24 by clwenhaj          #+#    #+#             */
/*   Updated: 2026/01/03 14:23:18 by clwenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_list **a)
{
	int	top;
	int	middle;
	int	bottom;

	if (!a || !(*a) || !(*a)->next || !(*a)->next->next)
		return ;
	top = (*a)->index;
	middle = (*a)->next->index;
	bottom = (*a)->next->next->index;
	if (top > middle && middle < bottom && top < bottom)
		sa(a);
	else if (top > middle && middle > bottom && top > bottom)
	{
		sa(a);
		rra(a);
	}
	else if (top > middle && middle < bottom && top > bottom)
		ra(a);
	else if (top < middle && middle > bottom && top < bottom)
	{
		sa(a);
		ra(a);
	}
	else if (top < middle && middle > bottom && top > bottom)
		rra(a);
}
