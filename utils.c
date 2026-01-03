#include "push_swap.h"

int	find_index_of_min(t_list *a)
{
	int	min;
	
	if (!a)
		return (0);
	min = a->index;
	while (a)
	{
		if (a->index < min)
			min = a->index;
		a = a->next;
	}
	return (min);
}

int	get_position(t_list *a, int index)
{
	int	i;

	i = 0;
	while (a)
	{
		if (a->index == index)
			return (i);
		i++;
		a = a->next;
	}
	return (-1);
}

void	push_min_of_a_to_b(t_list **a, t_list **b)
{
	int	pos;
	int	size;

	if (!a || !(*a))
		return;
	size = ft_lstsize(*a);
	pos = get_position(*a, find_index_of_min(*a));
	if (pos <= size / 2)
	{
		while (pos-- > 0)
			ra(a);
				
	}
	else
	{
		while (pos++ < size)
			rra(a);
	}
	pb(a, b);
}

int	is_sorted(t_list *a)
{
	while (a && a->next)
	{
		if (a->index > a->next->index)
			return (0);
		a = a->next;
	}
	return (1);
}

void	free_stack(t_list *a)
{
	t_list	*tmp;

	while (a)
	{
		tmp = a->next;
		free(a);
		a = tmp;
	}
}

void	index_stack(t_list *a)
{
	t_list	*i;
	t_list	*j;
	int	idx;

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

t_list  *ft_lstlast(t_list *lst)
{
        if (!lst)
                return (0);
        while (lst->next)
                lst = lst->next;
        return (lst);
}

int     ft_lstsize(t_list *lst)
{
        int     counter;

        counter = 0;
        while (lst)
        {
                counter++;
                lst = lst->next;
        }
        return (counter);
}

void    ft_lstadd_back(t_list **lst, t_list *new)
{
        t_list  *last;

        if (!lst || !new)
                return ;
        if (*lst == NULL)
        {
                *lst = new;
                return ;
        }
        last = ft_lstlast(*lst);
        last->next = new;
}

t_list  *ft_lstnew(int value)
{
        t_list  *new;

        new = malloc(sizeof(t_list));
        if (!new)
                return (NULL);
        new->value = value;
	new->index = -1;
        new->next = NULL;
        return (new);
}

int	ft_atoi(char *str)
{
	long	num;
	int	sign;
	
	sign = 1;
	num = 0;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	if (!*str)
	{
		write(2, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			write(2, "Error\n", 6);
			exit(EXIT_FAILURE);
		}
		num = num * 10 + (*str - '0');
		if ((num * sign) > INT_MAX || (num * sign) < INT_MIN)
		{
			write(2, "Error\n", 6);
			exit(EXIT_FAILURE);
		}
		str++;
	}
	return ((int)(num * sign));
}
