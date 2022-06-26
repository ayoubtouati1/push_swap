/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_operation.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 23:25:55 by atouati           #+#    #+#             */
/*   Updated: 2022/06/26 16:53:18 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ra_operation(t_stk *node)
{
	int		tmp1;
	int		tmp2;
	t_stk	*ptr;

	if ((node) == NULL)
		return ;
	ptr = node;
	tmp1 = node->num;
	tmp2 = node->index;
	while (node->nxt)
	{
		node->num = node->nxt->num;
		node->index = node->nxt->index;
		node = node->nxt;
	}
	node->num = tmp1;
	node->index = tmp2;
	node = ptr;
	write(1, "ra\n", 3);
}

void	rb_operation(t_stk *node)
{
	int		tmp1;
	int		tmp2;
	t_stk	*ptr;

	if ((node) == NULL)
		return ;
	ptr = node;
	tmp1 = node->num;
	tmp2 = node->index;
	while (node->nxt)
	{
		node->num = node->nxt->num;
		node->index = node->nxt->index;
		node = node->nxt;
	}
	node->num = tmp1;
	node->index = tmp2;
	node = ptr;
	write(1, "rb\n", 3);
}

void	rr_operation(t_stk	*stack_a, t_stk *stack_b)
{
	ra_operation(stack_a);
	rb_operation(stack_b);
}
