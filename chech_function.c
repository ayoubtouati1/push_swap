/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chech_function.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 22:25:49 by atouati           #+#    #+#             */
/*   Updated: 2022/06/23 23:02:23 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_dup(char **str)
{
	int	i;
	int	x;

	i = 0;
	while (str[i])
	{
		x = i;
		while (str[x])
		{
			if (ft_strcmp(str[i], str[x]) == 0 && i != x)
			{
				write(1, "Error\n", 6);
				exit (0);
			}
			x++;
		}
		i++;
	}
}

void	check_if_num(char **str)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (str[i])
	{
		x = 0;
		if (check_overflow(str[i]) == 0)
		{
			write(1, "Error\n", 6);
			exit(0);
		}
		while (str[i][x])
		{
			if ((str[i][x] > '9' || str[i][x] < '0')
				&& (str[i][x] != '-' && str[i][x] != '+'))
				exit (0);
			if ((str[i][x] == '-' || str[i][x] == '+')
				&& (str[i][x + 1] > '9' || str[i][x + 1] < '0'))
				exit (0);
			x++;
		}
		i++;
	}
}

int	check_len(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	**check_arg_and_add(char **av, int ac)
{
	char	**str;

	if (ac == 2)
	{
		str = ft_split(av[1], ' ');
		if (check_len(str) < 2)
			exit (0);
		return (str);
	}
	if (ac > 2)
		return (av + 1);
	return (NULL);
}

int	check_sort(t_stk *ptr)
{
	t_stk	*tmp;

	tmp = ptr;
	while (ptr && ptr->nxt != NULL)
	{
		if (ptr->num > ptr->nxt->num)
			return (1);
		ptr = ptr->nxt;
	}
	ptr = tmp;
	return (0);
}
