#include "push_swap.h"

void	sort_four(t_list **a, t_list **b)
{
	push_min_of_a_to_b(a, b);
	sort_three(a);
	pa(a, b);
}
