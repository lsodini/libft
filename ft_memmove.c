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

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*src2;
	char	*dest2;
	size_t	i;

	if (dest == NULL && src == NULL)
		return (NULL);
	src2 = (char *)src;
	dest2 = (char *)dest;
	i = 0;
	if (dest2 > src2)
		while (n-- > 0)
			dest2[n] = src2[n];
	else
	{
		while (i < n)
		{
			dest2[i] = src2[i];
			i++;
		}
	}
	return (dest);
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
