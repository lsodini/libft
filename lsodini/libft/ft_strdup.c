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

char	*ft_strdup(const char *src)
{
	size_t	lunghezza;
	char	*duplica;

	if (src == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	lunghezza = strlen(src);
	duplica = (char *)malloc((lunghezza + 1) * sizeof(char));
	if (duplica == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	strcpy(duplica, src);
	return (duplica);
}
