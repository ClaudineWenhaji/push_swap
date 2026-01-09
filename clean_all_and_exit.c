/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_exit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 17:07:00 by clwenhaj          #+#    #+#             */
/*   Updated: 2026/01/09 17:16:23 by clwenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	clean_all_and_exit(char **split, t_list *a)
{
	free_split(split);
	free_stack(a);
	print_error_and_exit();
}
