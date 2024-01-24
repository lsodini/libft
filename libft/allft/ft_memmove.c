/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsodini <lsodini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 18:01:09 by lsodini           #+#    #+#             */
/*   Updated: 2024/01/04 18:03:52 by lsodini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*src2;
	char	*dst2;
	size_t	i;

	if (dst == NULL && src == NULL)
		return (NULL);
	src2 = (char *)src;
	dst2 = (char *)dst;
	i = 0;
	if (dst2 > src2)
		while (n-- > 0)
			dst2[n] = src2[n];
	else
	{
		while (i < n)
		{
			dst2[i] = src2[i];
			i++;
		}
	}
	return (dst);
}
/*
#include <stdio.h>

int main()
{
	char dest[] = "ciao mondo";
	const char src[] = "aaaaaa";
	size_t n = 3;
	printf("%p\n", ft_memmove(dest, src, n));
	return(0);
}*/
