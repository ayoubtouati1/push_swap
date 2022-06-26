/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_opearation.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 10:03:03 by atouati           #+#    #+#             */
/*   Updated: 2022/06/26 16:54:43 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa_opearation(t_stk **stack_1, t_stk **stack_2)
{
	t_stk	*tmp;

	if (*stack_1 == NULL)
		return ;
	tmp = *stack_1;
	*stack_1 = (*stack_1)->nxt;
	tmp->nxt = *stack_2;
	*stack_2 = tmp;
	write (1, "pa\n", 3);
}

void	pb_opearation(t_stk **stack_1, t_stk **stack_2)
{
	t_stk	*tmp;

	if (*stack_1 == NULL)
		return ;
	tmp = *stack_1;
	*stack_1 = (*stack_1)->nxt;
	tmp->nxt = *stack_2;
	*stack_2 = tmp;
	write (1, "pb\n", 3);
}
