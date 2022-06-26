/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 18:01:21 by atouati           #+#    #+#             */
/*   Updated: 2022/06/26 16:01:48 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stk **node)
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
}

void	sb(t_stk **node)
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
}

void	ss(t_stk **stack_a, t_stk **stack_b)
{
	sa(stack_a);
	sb(stack_b);
}

void	ra(t_stk *node)
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
}

void	rb(t_stk *node)
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
}
