/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 14:07:43 by clwenhaj          #+#    #+#             */
/*   Updated: 2026/01/07 14:25:23 by clwenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	index_stack(t_list *a)
{
	t_list	*i;
	t_list	*j;
	int		idx;

	i = a;
	while (i)
	{
		idx = 0;
		j = a;
		while (j)
		{
			if (i->value > j->value)
				idx++;
			j = j->next;
		}
		i->index = idx;
		i = i->next;
	}
}

int	get_max_index(t_list *a)
{
	int	max;

	max = a->index;
	while (a)
	{
		if (a->index > max)
			max = a->index;
		a = a->next;
	}
	return (max);
}

int	get_max_bits(t_list *a)
{
	int	max;
	int	bits;

	if (!a)
		return (0);
	bits = 0;
	max = get_max_index(a);
	while ((max >> bits) != 0)
		bits++;
	return (bits);
}

int	is_duplicated(t_list *a)
{
	t_list	*current;
	t_list	*check;

	current = a;
	while (current)
	{
		check = current->next;
		while (check)
		{
			if (current->value == check->value)
				return (1);
			check = check->next;
		}
		current = current->next;
	}
	return (0);
}

int	ft_atoi(char *str)
{
	long	num;
	int		sign;

	sign = 1;
	num = 0;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	if (!*str)
		print_error_and_exit();
	while (*str)
	{
		if (*str < '0' || *str > '9')
			print_error_and_exit();
		num = num * 10 + (*str - '0');
		if ((sign == 1 && num > INT_MAX)
			|| (sign == -1 && num > (long)INT_MAX + 1))
			print_error_and_exit();
		str++;
	}
	return ((int)(num * sign));
}
