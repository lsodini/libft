/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsodini <lsodini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:21:55 by lsodini           #+#    #+#             */
/*   Updated: 2024/01/24 15:35:02 by lsodini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*puntatore;
	size_t			i;

	i = 0;
	puntatore = (unsigned char *)s;
	while (i < n)
	{
		*(puntatore + i++) = (unsigned char)c;
	}
	return (s);
}
/*
#include <stdio.h>

int main()
{
	char s[] = "ciao mondo";
	int c = 'a';
	size_t n = 4;
	printf("%p\n", ft_memset(s, c, n));
	return(0);
}*/
