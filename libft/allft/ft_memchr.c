/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsodini <lsodini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:30:36 by lsodini           #+#    #+#             */
/*   Updated: 2024/01/04 18:00:15 by lsodini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	size_t	i;

	if (s == '\0')
		return (NULL);
	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (usnigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main()
{
	const char s[] = "ciao mondo";
	int c = 's';
	size_t n = 4;
	printf("%p\n", ft_memchr(s, c, n));
	return(0);
}*/
