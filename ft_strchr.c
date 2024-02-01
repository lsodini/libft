/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsodini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:52:49 by lsodini           #+#    #+#             */
/*   Updated: 2023/12/20 12:52:51 by lsodini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while ((char)c != *s)
	{
		if (!*s)
			return (NULL);
		s++;
	}
	return ((char *)s);
}
/* int main()
{
	const char str[] = "Hello, World!";
	int character_to_find = 'o';

	char *result = ft_strchr(str, character_to_find);

	if (result) {
		printf("Carattere trovato: %s\n", result);
	} else {
		printf("Carattere non trovato.\n");
	}

	return 0;
} */