/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsodini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:35:43 by lsodini           #+#    #+#             */
/*   Updated: 2024/01/30 17:35:46 by lsodini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s2;

	s2 = NULL;
	while (*s)
	{
		if (*s == (char)c)
			s2 = (char *)s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (s2);
}
/*
#include <stdio.h>

int	main()
{
	const char s[] = "ciao sono luca";
	int c = 'a';
	printf("%s\n", ft_strrchr(s, c));
	return (0);
}*/
