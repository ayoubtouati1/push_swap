/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_min.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 10:04:10 by atouati           #+#    #+#             */
/*   Updated: 2022/06/18 00:05:26 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_min(t_stk *a)
{
	int		i;
	t_stk	*tmp;

	tmp = a;
	i = a->num;
	while (a)
	{
		if (a->num < i)
			i = a->num;
		a = a->nxt;
	}
	a = tmp;
	return (i);
}

int	get_min_index(t_stk	*stack)
{
	int	i;

	i = stack->index;
	while (stack)
	{
		if (i > stack->index)
			i = stack->index;
		stack = stack->nxt;
	}
	return (i);
}
