/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_operation.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 23:24:44 by atouati           #+#    #+#             */
/*   Updated: 2022/06/26 16:52:41 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	sa_operation(t_stk **node)
{
	int	i;
	int	j;

	if ((*node) == NULL || (*node)->nxt == NULL)
		return ;
	i = (*node)->nxt->num;
	j = (*node)->nxt->index;
	(*node)->nxt->num = (*node)->num;
	(*node)->nxt->index = (*node)->index;
	(*node)->num = i;
	(*node)->index = j;
	write(1, "sa\n", 3);
}

void	sb_operation(t_stk **node)
{
	int	i;
	int	j;

	if ((*node) == NULL || (*node)->nxt == NULL)
		return ;
	i = (*node)->nxt->num;
	j = (*node)->nxt->index;
	(*node)->nxt->num = (*node)->num;
	(*node)->nxt->index = (*node)->index;
	(*node)->num = i;
	(*node)->index = j;
	write(1, "sb\n", 3);
}

void	ss_operation(t_stk **stack_a, t_stk **stack_b)
{
	sa_operation(stack_a);
	sb_operation(stack_b);
}
