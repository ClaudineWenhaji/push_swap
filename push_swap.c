#include "push_swap.h"

void	push_swap(t_list **a, t_list **b)
{
	int	size;

	if (!a || !*a)
		return;
	if (is_sorted(*a))
	{
		free_stack(*a);
		free_stack(*b);
		return;
	}
	size = ft_lstsize(*a);
	if (size <= 5)
		sort_small(a, b);
	else
		radix_sort(a, b);
}
