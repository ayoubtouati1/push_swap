/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 04:20:51 by atouati           #+#    #+#             */
/*   Updated: 2022/06/23 20:38:37 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotate_index(t_stk *stack_a)
{
	int	i;
	int	save;
	int	index;

	i = 0;
	index = (stack_a)->index;
	while (stack_a)
	{
		if (index > stack_a->index)
		{
			index = stack_a->index;
			save = i;
		}
		stack_a = stack_a->nxt;
		i++;
	}
	return (save);
}

void	norm(t_struct ptr, t_stk **stack_a, t_stk **stack_b)
{
	int	index;

	while (ptr.i <= ptr.max)
	{
		index = (*stack_a)->index;
		if (index >= ptr.min && index <= ptr.max)
		{
			if (index < ptr.med)
			{
				pb_opearation(stack_a, stack_b);
				rb_operation(*stack_b);
			}
			else
			{
				pb_opearation(stack_a, stack_b);
			}
			ptr.i++;
		}
		else if (rotate_index(*stack_a) > len_of_stack((*stack_a)) / 2)
			rra_operation(stack_a);
		else if (rotate_index(*stack_a) <= len_of_stack((*stack_a)) / 2)
			ra_operation(*stack_a);
	}
}

void	push_small_range(t_stk **stack_a, t_stk **stack_b)
{
	t_struct	ptr;

	ptr.size = len_of_stack(*stack_a);
	ptr.range_to_pushed = ((ptr.size - 5) / 4) + 1;
	ptr.min = 0;
	ptr.max = ptr.min + ptr.range_to_pushed - 1;
	ptr.med = (ptr.max + ptr.min) / 2;
	ptr.i = 0;
	while (ptr.size > 5)
	{
		ptr.i = ptr.min;
		norm(ptr, stack_a, stack_b);
		ptr.size -= ptr.range_to_pushed;
		ptr.range_to_pushed = ((ptr.size - 5) / 4) + 1;
		ptr.min = get_min_index(*stack_a);
		ptr.max = ptr.min + ptr.range_to_pushed - 1;
		ptr.med = (ptr.max + ptr.min) / 2;
	}
}

void	push_big_range(t_stk **stack_a, t_stk **stack_b)
{
	t_struct	ptr;

	ptr.size = len_of_stack(*stack_a);
	ptr.range_to_pushed = ((ptr.size - 1) / 2) + 1;
	ptr.min = 0;
	ptr.max = ptr.min + ptr.range_to_pushed - 1;
	ptr.med = (ptr.max + ptr.min) / 2;
	ptr.i = 0;
	while (ptr.size > 5)
	{
		ptr.i = ptr.min;
		norm(ptr, stack_a, stack_b);
		ptr.size -= ptr.range_to_pushed;
		ptr.range_to_pushed = ((ptr.size - 1) / 2) + 1;
		ptr.min = get_min_index(*stack_a);
		ptr.max = ptr.min + ptr.range_to_pushed - 1;
		ptr.med = (ptr.max + ptr.min) / 2;
	}
}

void	big_sort(t_stk **stack_a, t_stk **stack_b)
{
	int			min;

	if (len_of_stack(*stack_a) > 100)
		push_small_range(stack_a, stack_b);
	else
		push_big_range(stack_a, stack_b);
	min = get_min(*stack_a);
	sort_5(stack_a, stack_b, min);
	sorter2(stack_a, stack_b);
}
