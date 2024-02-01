/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsodini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 11:11:07 by lsodini           #+#    #+#             */
/*   Updated: 2023/12/20 11:11:24 by lsodini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n-- > 0)
		*p++ = 0;
}
/*int main()
{
	char s[] = "ciao";
	size_t n = 1;
	printf("Prima di bzero: %s\n", s);
	ft_bzero(s, n);
	printf("Dopo bzero: %s\n", s);
	return 0;
}*/