/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_operation.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 23:25:23 by atouati           #+#    #+#             */
/*   Updated: 2022/06/26 16:53:52 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	rra_operation(t_stk **node)
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
	write(1, "rra\n", 4);
}

void	rrb_operation(t_stk **node)
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
	write(1, "rrb\n", 4);
}

void	rrr_operation(t_stk **stack_a, t_stk **stack_b)
{
	rra_operation(stack_a);
	rrb_operation(stack_b);
}
