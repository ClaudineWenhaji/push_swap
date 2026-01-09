/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 14:06:41 by clwenhaj          #+#    #+#             */
/*   Updated: 2026/01/09 16:14:06 by clwenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// INDEX: Real values are replaced by normalized indices
// so that problems with negative numbers are avoided
// get_max_index: find the max index value
// get_max_bits: calculate the number of bits necessary (for the max number)
// radix_sort: sort Bucket using a BINARY approach

#include "push_swap.h"

void	radix_sort(t_list **a, t_list **b)
{
	int	i;
	int	j;
	int	size;
	int	max_bits;

	if (!a || !*a)
		return ;
	size = ft_lstsize(*a);
	max_bits = get_max_bits(*a);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if (((*a)->index >> i) & 1)
				ra(a);
			else
				pb(a, b);
			j++;
		}
		while (*b)
			pa(a, b);
		i++;
	}
}
