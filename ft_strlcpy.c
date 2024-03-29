/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsodini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 13:52:06 by lsodini           #+#    #+#             */
/*   Updated: 2023/12/18 13:53:14 by lsodini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;

	x = 0;
	i = 0;
	while (src[x])
		x ++;
	if (size < 1)
		return (x);
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src [i];
		i++;
	}
	dst[i] = '\0';
	return (x);
}
/* int main()
{
	char destination[20];
	char source[] = "Hello, World!";
	unsigned int size = sizeof(destination);

	unsigned int result = ft_strlcpy(destination, source, size);

	printf("Result: %u\n", result);
	printf("Copied String: %s\n", destination);

	return 0;
} */