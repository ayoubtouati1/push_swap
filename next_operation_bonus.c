/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   next_operation_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 18:04:50 by atouati           #+#    #+#             */
/*   Updated: 2022/06/26 16:50:54 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_stk	*stack_a, t_stk *stack_b)
{
	ra(stack_a);
	rb(stack_b);
}

void	rra(t_stk **node)
{
	t_stk	*head;
	t_stk	*bottom;

	if ((*node) == NULL || (*node)->nxt == NULL)
		return ;
	head = *node;
	while ((*node)->nxt)
		*node = (*node)->nxt;
	bottom = *node;
	*node = head;
	while ((*node)->nxt->nxt)
		*node = (*node)->nxt;
	(*node)->nxt = NULL;
	bottom->nxt = head;
	(*node) = bottom;
}

void	rrb(t_stk **node)
{
	t_stk	*head;
	t_stk	*bottom;

	if ((*node) == NULL || (*node)->nxt == NULL)
		return ;
	head = *node;
	while ((*node)->nxt)
		*node = (*node)->nxt;
	bottom = *node;
	*node = head;
	while ((*node)->nxt->nxt)
		*node = (*node)->nxt;
	(*node)->nxt = NULL;
	bottom->nxt = head;
	(*node) = bottom;
}

void	rrr(t_stk **stack_a, t_stk **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
}

void	p(t_stk **stack_1, t_stk **stack_2)
{
	t_stk	*tmp;

	if (*stack_1 == NULL)
		return ;
	tmp = *stack_1;
	*stack_1 = (*stack_1)->nxt;
	tmp->nxt = *stack_2;
	*stack_2 = tmp;
}
