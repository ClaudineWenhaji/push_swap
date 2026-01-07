/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 15:15:53 by clwenhaj          #+#    #+#             */
/*   Updated: 2026/01/06 16:18:37 by clwenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int	count_words(char *str)

{
	int	i;
	int	count_words;

	i = 0;
	count_words = 0;
	while (str[i])
	{
		while (str[i] && is_space(str[i]))
			i++;
		if (str[i])
		{
			count_words++;
			while (str[i] && !is_space(str[i]))
				i++;
		}
	}
	return (count_words);
}

char	*ft_strdup(char *str, int start, int end)
{
	char	*dup;
	int		i;

	i = 0;
	dup = malloc(sizeof(char) * (end - start + 1));
	if (!dup)
		return (NULL);
	while (start < end)
	{
		dup[i] = str[start];
		i++;
		start++;
	}
	dup[i] = '\0';
	return (dup);
}

char	**ft_split(char *str)
{
	int		i;
	int		j;
	int		start;
	char	**tab;

	i = 0;
	j = 0;
	tab = malloc(sizeof(char *) * (count_words(&str[i]) + 1));
	if (!tab)
		return (NULL);
	while (str[i])
	{
		while (str[i] && is_space(str[i]))
			i++;
		if (str[i])
		{
			start = i;
			while (str[i] && !is_space(str[i]))
				i++;
			tab[j++] = ft_strdup(str, start, i);
		}
	}
	tab[j] = NULL;
	return (tab);
}
