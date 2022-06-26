/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_and_sort_tab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 20:23:25 by atouati           #+#    #+#             */
/*   Updated: 2022/06/23 23:20:16 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	*add_tab(int *tab, char **str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		tab[i] = ft_atoi(str[i]);
		i++;
	}
	return (tab);
}

void	sort_tab(int *tab, t_stk *stack_a)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < len_of_stack(stack_a) - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			j = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = j;
			i = -1;
		}
		i++;
	}
}
