/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 17:27:52 by atouati           #+#    #+#             */
/*   Updated: 2022/06/23 23:20:03 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_num(t_stk **top, t_stk *tmp)
{
	t_stk	*temp;

	if (*top == NULL)
		*top = tmp;
	else
	{
		temp = *top;
		while (temp->nxt)
			temp = temp->nxt;
		temp->nxt = tmp;
	}
}

t_stk	*fill_stack(t_stk *stack_a, char **str)
{
	t_stk	*tmp;
	int		i;

	i = 0;
	tmp = NULL;
	while (str[i])
	{
		tmp = malloc(sizeof(t_stk));
		tmp->num = ft_atoi(str[i]);
		tmp->nxt = NULL;
		add_num(&stack_a, tmp);
		i++;
	}
	return (stack_a);
}
