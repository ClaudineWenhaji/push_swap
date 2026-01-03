#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;
	int	i;

	a = 0;
	b = 0;
	if (ac >= 2)
	{
		i = 1;
		while (i < ac)
		{
			ft_lstadd_back(&a, ft_lstnew(ft_atoi(av[i])));
			i++;
		}
		index_stack(a);
		push_swap(&a, &b);
		free_stack(a);
		free_stack(b);
	}
	return (0);
}
