/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 02:54:35 by atouati           #+#    #+#             */
/*   Updated: 2022/06/23 20:34:12 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_index_big(t_stk *stack_a)
{
	int		i;
	int		j;
	int		data;
	t_stk	*new;

	data = stack_a->index;
	new = stack_a;
	j = 0;
	i = 0;
	while (stack_a)
	{
		if (stack_a->index > data)
		{
			data = stack_a->index;
			j = i;
		}
		stack_a = stack_a->nxt;
		i++;
	}
	stack_a = new;
	return (j);
}

t_stk	*ft_lstlast(t_stk *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst -> nxt != 0)
		lst = lst -> nxt;
	return (lst);
}

void	sorter2(t_stk **stack_a, t_stk **stack_b)
{
	ft_lstlast(*stack_a)-> index = -1;
	while (*stack_b)
	{
		if ((*stack_a)->index - 1 == (*stack_b)->index)
			pa_opearation(stack_b, stack_a);
		else if (((*stack_b)->index < (*stack_a)->index)
			&& ((*stack_b)->index > ft_lstlast((*stack_a))->index))
		{
			pa_opearation(stack_b, stack_a);
			ra_operation((*stack_a));
		}
		else if ((*stack_a)->index - 1 == ft_lstlast((*stack_a))->index)
			rra_operation(stack_a);
		else if (get_index_big((*stack_b)) > len_of_stack((*stack_b)) / 2)
			rrb_operation(stack_b);
		else if (get_index_big((*stack_b)) <= len_of_stack((*stack_b)) / 2)
			rb_operation((*stack_b));
	}
	while (ft_lstlast((*stack_a))-> index < (*stack_a)->index
		&& ft_lstlast((*stack_a))->index > -1)
		rra_operation(stack_a);
}
