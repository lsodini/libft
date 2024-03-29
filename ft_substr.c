/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsodini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:28:24 by lsodini           #+#    #+#             */
/*   Updated: 2024/01/15 12:28:26 by lsodini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int		i;
	char				*str;

	i = 0;
	if (start >= ft_strlen(s))
	{
		start = ft_strlen(s);
		len = 0;
	}
	if (len + start > ft_strlen(s))
	{
		len = ft_strlen(s) - start;
	}
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (i < len && s[start + i])
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}
/*#include <stdio.h>

int	main()
{
	const char s[] = "ciao sono luca";
	unsigned int start = 3;
	size_t len = 11;
	char *result = ft_substr(s, start, len);
	printf("%s\n", result);
	free(result);
	return (0);
}*/
