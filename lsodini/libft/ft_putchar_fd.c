/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsodini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:26:44 by lsodini           #+#    #+#             */
/*   Updated: 2024/01/15 12:26:53 by lsodini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putchar_fd(char c, int fd)
{
        write(fd, &c, 1)
}
/*
#include <stdio.h>

int main ()
{
	
	int fd = 1;
	char c = 'p';
	ft_putchar_fd(c, fd);
	return(0);
}*/