/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 10:00:22 by atouati           #+#    #+#             */
/*   Updated: 2022/06/23 18:58:44 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	next_sort_4(t_stk **stack_a, t_stk **stack_b, int min)
{
	if ((*stack_a)->nxt->nxt->num == min)
	{
		rra_operation(stack_a);
		rra_operation(stack_a);
		if (check_sort(*stack_a) == 0)
			return ;
		pb_opearation(stack_a, stack_b);
		min = get_min(*stack_a);
		sort_3(stack_a, min);
		pa_opearation(stack_b, stack_a);
	}
	else if ((*stack_a)->nxt->nxt->nxt->num == min)
	{
		rra_operation(stack_a);
		if (check_sort(*stack_a) == 0)
			return ;
		pb_opearation(stack_a, stack_b);
		min = get_min(*stack_a);
		sort_3(stack_a, min);
		pa_opearation(stack_a, stack_b);
	}
}

void	sort_4(t_stk **stack_a, t_stk **stack_b, int min)
{
	if ((*stack_a)->num == min)
	{
		pb_opearation(stack_a, stack_b);
		min = get_min(*stack_a);
		sort_3(stack_a, min);
		pa_opearation(stack_b, stack_a);
	}
	else if ((*stack_a)->nxt->num == min)
	{
		sa_operation(stack_a);
		if (check_sort(*stack_a) == 0)
			return ;
		pb_opearation(stack_a, stack_b);
		min = get_min(*stack_a);
		sort_3(stack_a, min);
		pa_opearation(stack_b, stack_a);
	}
	else if ((*stack_a)->nxt->nxt->num == min)
		next_sort_4(stack_a, stack_b, min);
}
