/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_max_and_min.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 22:59:12 by atouati           #+#    #+#             */
/*   Updated: 2022/06/23 23:10:03 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

unsigned long long	ps_atoi(char *s)
{
	int					i;
	int					neg;
	unsigned long long	ret;

	i = 0;
	ret = 0;
	neg = 1;
	while (s[i] == '\t' || s[i] == '\n' || s[i] == '\r' || s[i] == '\v' || \
		s[i] == '\f' || s[i] == ' ')
		i++;
	if (s[i] == '-')
		neg = -1;
	if (s[i] == '-' || s[i] == '+')
		i++;
	while (s[i] >= '0' && s[i] <= '9')
	{
		ret = 10 * ret + s[i] - '0';
		i++;
	}
	ret = ret * neg;
	return (ret);
}

int	check_overflow(char *arg)
{
	long long	tmp;

	tmp = ps_atoi(arg);
	if (tmp >= INT_MIN && tmp <= INT_MAX)
		return (1);
	return (0);
}
