#include "push_swap.h"

void	sort_three(t_list **a)
{
	int	top;
	int	middle;
	int	bottom;

	if (!a || !(*a) || !(*a)->next || !(*a)->next->next)
		return;
	top = (*a)->index;
	middle = (*a)->next->index;
	bottom = (*a)->next->next->index;
	if (top > middle && middle < bottom && top < bottom)
		sa(a);
	else if (top > middle && middle > bottom && top > bottom)
	{
		sa(a);
		rra(a);
	}
	else if (top > middle && middle < bottom && top > bottom)
		ra(a);
	else if (top < middle && middle > bottom && top < bottom)
	{
		sa(a);
		ra(a);
	}
	else if (top < middle && middle > bottom && top > bottom)
		rra(a);
}
