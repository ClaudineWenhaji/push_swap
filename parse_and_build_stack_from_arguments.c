/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_and_build_stack_from_arguments.c             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 14:42:07 by clwenhaj          #+#    #+#             */
/*   Updated: 2026/01/07 15:26:24 by clwenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*parse_and_build_stack_from_arguments(int ac, char **av)
{
	t_list	*a;
	int		i;

	a = NULL;
	i = 1;
	while (i < ac)
	{
		if (!is_number(av[i]))
		{
			free_stack(a);
			print_error_and_exit();
		}
		ft_lstadd_back(&a, ft_lstnew(ft_atoi(av[i])));
		i++;
	}
	return (a);
}
