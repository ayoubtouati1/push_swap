/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 09:59:19 by atouati           #+#    #+#             */
/*   Updated: 2022/06/21 04:46:29 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_stk **stack, int min)
{
	if (check_sort((*stack)) == 0)
		return ;
	if ((*stack)->nxt->num == min && (*stack)->num > (*stack)->nxt->nxt->num)
		ra_operation(*stack);
	else if ((*stack)->nxt->num == min
		&& (*stack)->num < (*stack)->nxt->nxt->num)
		sa_operation(stack);
	else if ((*stack)->num == min)
	{
		rra_operation(stack);
		sa_operation(stack);
	}
	else if ((*stack)->nxt->nxt->num == min
		&& ((*stack)->num < (*stack)->nxt->num))
		rra_operation(stack);
	else if ((*stack)->nxt->nxt->num == min
		&& ((*stack)->num > (*stack)->nxt->num))
	{
		sa_operation(stack);
		rra_operation(stack);
	}
	if (check_sort((*stack)) != 0)
		sort_3(stack, min);
}
