/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsodini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:27:04 by lsodini           #+#    #+#             */
/*   Updated: 2024/01/15 12:27:05 by lsodini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putendl_fd(char *s, int fd)
{
        write(fd, s, ft_strlen(s));
        write(fd, "\n", 1);
}
/*int main ()
{
	
	int fd = 1;
	char s[] = "mollero' la 42";
	ft_putendl_fd(s, fd);
	return(0);
}*/