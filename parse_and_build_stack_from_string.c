/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_and_build_stack_from_string.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 14:42:07 by clwenhaj          #+#    #+#             */
/*   Updated: 2026/01/07 16:15:39 by clwenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*parse_and_build_stack_from_string(char *str)
{
	t_list	*a;
	int		i;
	char	**split;

	a = NULL;
	split = NULL;
	if (!arg_has_space(str))
		print_error_and_exit();
	split = ft_split(str);
	if (!split || !split[0])
		print_error_and_exit();
	i = 0;
	while (split[i])
	{
		if (!is_number(split[i]))
		{
			if (split)
				free_split(split);
			if(a)
				free_stack(a);
			print_error_and_exit();
		}
		ft_lstadd_back(&a, ft_lstnew(ft_atoi(split[i])));
		i++;
	}
	free_split(split);
	return (a);
}
