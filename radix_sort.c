#include "push_swap.h"

void	radix_sort(t_list **a, t_list **b)
{
	int	i;
	int	j;
	int	size;
	int	max_bits;

	if (!a || !*a)
		return;
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
