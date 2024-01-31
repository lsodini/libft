/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsodini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 13:57:15 by lsodini           #+#    #+#             */
/*   Updated: 2023/12/18 13:58:21 by lsodini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	*s1_cpy;
	unsigned char	*s2_cpy;

	s1_cpy = (unsigned char *)s1;
	s2_cpy = (unsigned char *)s2;
	i = 0;
	if (!n)
		return (0);
	while (s1_cpy[i] == s2[i] && s1_cpy[i] && s2_cpy[i] && i < n)
		i++;
	if (i < n)
	{
		return (s1_cpy[i] - s2_cpy[i]);
	}
	else
	{
		return (0);
	}
}
