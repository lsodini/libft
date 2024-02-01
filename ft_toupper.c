/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsodini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 13:05:28 by lsodini           #+#    #+#             */
/*   Updated: 2023/12/20 13:05:31 by lsodini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
/* int main()
{
    char lowercase = 'a';
    char uppercase = ft_toupper(lowercase);

    printf("Lowercase: %c\n", lowercase);
    printf("Uppercase: %c\n", uppercase);

    return 0;
} */
