/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 14:06:30 by clwenhaj          #+#    #+#             */
/*   Updated: 2026/01/03 14:50:35 by clwenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}			t_list;

void	sa(t_list **a);
void	sb(t_list **b);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	ra(t_list **a);
void	rra(t_list **a);

void	sort_two(t_list **a);
void	sort_three(t_list **a);
void	sort_four(t_list **a, t_list **b);
void	sort_five(t_list **a, t_list **b);
void	sort_small(t_list **a, t_list **b);
void	radix_sort(t_list **a, t_list **b);
void	sort_all(t_list **a, t_list **b);

t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int value);
void	ft_lstadd_back(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
int		ft_atoi(char *str);
int		is_duplicated(t_list *a);
void	print_error_and_exit(void);

void	index_stack(t_list *a);
int		find_index_of_min(t_list *a);
int		get_position(t_list *a, int index);
void	push_min_of_a_to_b(t_list **a, t_list **b);

int		is_sorted(t_list *a);
void	free_stack(t_list *a);

int		get_max_index(t_list *a);
int		get_max_bits(t_list *a);

#endif
