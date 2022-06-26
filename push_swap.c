/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 15:23:24 by atouati           #+#    #+#             */
/*   Updated: 2022/06/23 23:06:02 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_index(int *tab, t_stk *stack_a)
{
	int		i;
	t_stk	*tmp;

	i = 0;
	tmp = stack_a;
	while (stack_a)
	{
		if (stack_a->num == tab[i])
		{
			stack_a->index = i;
			stack_a = stack_a->nxt;
			i = 0;
		}
		else
			i++;
	}
	stack_a = tmp;
}

char	**check_and_file(int ac, char **av, char **str, t_stk **stack_a)
{
	str = check_arg_and_add(av, ac);
	if (str == NULL)
		exit (0);
	else
		check_if_num(str);
	check_dup(str);
	*stack_a = fill_stack(*stack_a, str);
	if (check_sort(*stack_a) == 0)
		exit (0);
	return (str);
}

void	push_swap(int ac, char **av)
{
	t_struct	ptr;
	t_stk		*stack_a;
	t_stk		*stack_b;
	char		**str;
	int			*tab;

	stack_a = NULL;
	stack_b = NULL;
	str = check_and_file(ac, av, str, &stack_a);
	ptr.len = len_of_stack(stack_a);
	if (ptr.len <= 5)
		short_sort(&ptr, &stack_a, &stack_b);
	else
	{
		tab = malloc(sizeof(int) * len_of_stack(stack_a));
		if (!tab)
			exit (0);
		tab = add_tab(tab, str);
		sort_tab(tab, stack_a);
		add_index(tab, stack_a);
		big_sort(&stack_a, &stack_b);
	}
}
