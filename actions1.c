/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 14:06:08 by clwenhaj          #+#    #+#             */
/*   Updated: 2026/01/03 15:03:26 by clwenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list **a)
{
	t_list	*prev;
	t_list	*last;

	if (!a || !*a || !(*a)->next)
		return ;
	prev = 0;
	last = *a;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = 0;
	last->next = *a;
	*a = last;
	write(1, "rra\n", 4);
}
