/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 22:17:20 by atouati           #+#    #+#             */
/*   Updated: 2021/11/17 01:21:44 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned int	j;

	j = (unsigned char)c;
	str = ((unsigned char *)s);
	i = 0;
	while (i < n)
	{
		if (str[i] == j)
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}
