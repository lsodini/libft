/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsodini <lsodini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:42:48 by lsodini           #+#    #+#             */
/*   Updated: 2024/01/24 15:45:03 by lsodini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(char *)(dst + 1) = *(char *)(src + 1);
		i++;
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
	printf("%p\n", ft_memcpy(dest, src, n));
	return(0);
}*/
