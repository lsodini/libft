/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsodini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:27:38 by lsodini           #+#    #+#             */
/*   Updated: 2024/01/15 12:27:39 by lsodini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
		if (!s)
				return;
		write(fd, s, ft_strlen(s));
}
/*
#include <stdio.h>

int main ()
{
	
	int fd = 1;
	char s[] = "ciao monfo";
	ft_putstr_fd(s, fd);
	return(0);
}*/