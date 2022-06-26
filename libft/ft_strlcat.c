/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 02:28:16 by atouati           #+#    #+#             */
/*   Updated: 2021/11/28 04:33:07 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_src;
	size_t	len_dst;
	size_t	res;
	char	*s;

	s = (char *)src;
	i = 0;
	if (!dst && !dstsize)
		return (ft_strlen(src));
	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	res = len_src + len_dst;
	if (dstsize <= len_dst)
		return (len_src + dstsize);
	while (s[i] && dstsize - 1 > len_dst)
	{
		dst[len_dst] = s[i];
		i++;
		len_dst++;
	}
	dst[len_dst] = '\0';
	return (res);
}
