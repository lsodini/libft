/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsodini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:28:06 by lsodini           #+#    #+#             */
/*   Updated: 2024/01/15 12:28:08 by lsodini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
		size_t	i;
		char	*str;

		str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (!str)
				return (NULL);
		i = 0;
		while (s[i])
		{
				str[i] = (*f)(i, s[i]);
				i++;
		}
		str[i] = '\0';
		return (str);
}
/*#include <stdio.h>

char my_toupper(unsigned int i, char c)
{
	return (ft_toupper(c));
}
int main()
{
	char const s[]= "abcd";
	char *str = ft_strmapi(s, my_toupper);
	printf("%s\n", str);
	
}*/