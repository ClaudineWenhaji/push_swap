#include "push_swap.h"

void	sort_two(t_list **a)
{
	if (!a || !(*a) || !(*a)->next)
		return;
	if ((*a)->index > (*a)->next->index)
		sa(a);
}
