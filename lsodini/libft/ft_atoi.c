/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsodini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:03:29 by lsodini           #+#    #+#             */
/*   Updated: 2023/12/18 14:03:58 by lsodini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	n;
	int	i;
	int	segno;

	n = 0;
	i = 0;
	segno = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || (nptr[i] == 32))
	{
		i++;
	}
	while (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			segno = -segno;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		n = (n * 10) + nptr[i] - '0';
		i++;
	}
	n = n * segno;
	return (n);
}
