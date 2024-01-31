/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsodini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:30:16 by lsodini           #+#    #+#             */
/*   Updated: 2023/12/20 14:30:18 by lsodini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	char	*duplica;

	i = 0;
	while (src[i])
		i++;
	duplica = malloc(sizeof(char) * i + 1);
	if (!duplica)
		return (NULL);
	i = 0;
	while (src[i])
	{
		duplica[i] = src[i];
		i++;
	}
	duplica[i] = '\0';
	return (duplica);
}
/*
#include <stdio.h>

int main()
{
	char src[] = "ciao sono luca";
	printf("%s\n", ft_strdup(src));
	return(0);
}*/
