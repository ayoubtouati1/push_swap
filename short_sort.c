/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 10:01:33 by atouati           #+#    #+#             */
/*   Updated: 2022/06/23 20:34:38 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	index_of(int n, t_stk *stack)
{
	t_stk	*tmp;
	int		i;

	i = 1;
	tmp = stack;
	while (stack)
	{
		if (stack->num == n)
			break ;
		stack = stack->nxt;
		i++;
	}
	stack = tmp;
	return (i);
}

void	sort_5(t_stk **stack_a, t_stk **stack_b, int min)
{
	if ((*stack_a)->num == min)
	{
		pb_opearation(stack_a, stack_b);
		min = get_min(*stack_a);
		sort_4(stack_a, stack_b, min);
		pa_opearation(stack_b, stack_a);
	}
	else if (index_of(min, *stack_a) <= (len_of_stack(*stack_a) / 2) + 1)
	{
		while (index_of(min, *stack_a) != 1)
			ra_operation(*stack_a);
		pb_opearation(stack_a, stack_b);
		min = get_min(*stack_a);
		sort_4(stack_a, stack_b, min);
		pa_opearation(stack_b, stack_a);
	}
	else if (index_of(min, *stack_a) > (len_of_stack(*stack_a) / 2) + 1)
	{
		while (index_of(min, *stack_a) > len_of_stack(*stack_a) / 2)
			rra_operation(stack_a);
		pb_opearation(stack_a, stack_b);
		min = get_min(*stack_a);
		sort_4(stack_a, stack_b, min);
		pa_opearation(stack_b, stack_a);
	}
}

void	short_sort(t_struct *stack, t_stk **stack_a, t_stk **stack_b)
{
	int		min;

	min = get_min(*stack_a);
	if (stack->len == 2)
		sa_operation(stack_a);
	else if (stack->len == 3)
		sort_3(stack_a, min);
	else if (stack->len == 4)
		sort_4(stack_a, stack_b, min);
	else if (stack->len == 5)
		sort_5(stack_a, stack_b, min);
}
