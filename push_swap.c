/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 14:06:20 by clwenhaj          #+#    #+#             */
/*   Updated: 2026/01/03 14:39:44 by clwenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;
	int		i;

	a = 0;
	b = 0;
	if (ac == 2)
		print_error_and_exit();
	i = 1;
	while (i < ac)
	{
		ft_lstadd_back(&a, ft_lstnew(ft_atoi(av[i])));
		i++;
	}
	if (is_duplicated(a))
		print_error_and_exit();
	index_stack(a);
	sort_all(&a, &b);
	free_stack(a);
	free_stack(b);
	return (0);
}
