#include "push_swap.h"

void	sort_small(t_list **a, t_list **b)
{
	int	size;

	if (!a || !*a)
		return;
	size = ft_lstsize(*a);
	if (size < 2)
		return;
	if (size == 2)
		sort_two(a);
	else if (size == 3)
		sort_three(a);
	else if (size == 4)
		sort_four(a, b);
	else if (size == 5)
		sort_five(a, b);
}
