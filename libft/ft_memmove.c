/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:16:20 by atouati           #+#    #+#             */
/*   Updated: 2021/11/29 03:30:48 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*serc;

	serc = (char *)src;
	dest = (char *)dst;
	if (serc < dest)
	{
		while (len--)
		{
			dest[len] = serc[len];
		}
	}
	else
		ft_memcpy(dest, serc, len);
	return (dest);
}
