/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsodini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 13:50:06 by lsodini           #+#    #+#             */
/*   Updated: 2023/12/20 13:50:09 by lsodini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include "libft.h"*/
#include <stdio.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;

	if (*to_find == '\0' || len == 0)
		return ((char *)str);
	while (*str != '\0' && len > 0)
	{
		i = 0;
		while (i < len && str[i] == to_find[i] && to_find[i] != '\0')
		{
			i++;
		}
		if (to_find[i] == '\0')
		{
			return ((char *)str);
		}
		str++;
		len--;
	}
	return (NULL);
}
