/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 22:07:27 by atouati           #+#    #+#             */
/*   Updated: 2021/11/29 03:54:08 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len_s1;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	len_s1 = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1[len_s1 - 1] && ft_strchr(set, s1[len_s1 - 1]) && len_s1 > i)
	{
		len_s1--;
	}
	str = (char *)malloc((len_s1 - i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (str)
		ft_strlcpy(str, &s1[i], len_s1 - i + 1);
	return (str);
}
