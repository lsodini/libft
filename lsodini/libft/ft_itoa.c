/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsodini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:26:30 by lsodini           #+#    #+#             */
/*   Updated: 2024/01/15 12:26:36 by lsodini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t   contatore_lunghezza(int n)
{
        size_t  i;

        i = 0;
        if (n < 0)
        {
                i++;
                n *= -1;
        }
        else if (n < 10)
                return (1);
        while (n != 0)
        {
                n /= 10;
                i++;
        }
        return (i);
}
char    *ft_itoa(int n)
{
        char    *str;
        size_t  i;

        i = contatore_lunghezza(n);
        if (n == -2147483648)
                return (ft_strdup("-2147483648"));
        str = ft_calloc(i + 1, sizeof(char));
        if (!str)
                return (NULL);
        if (n < 0)
        {
                *str = '-';
                n *= -1;
        }
        while (n > 9)
        {
                str[i - 1] = n % 10 + '0';
                n /= 10;
                i--;
        }
        str[i - 1] = n + '0';
        return (str);
}
/*
#include <stdio.h>
int main()
{
	int n = -2147483648;
	printf("%s\n", ft_itoa(n));
}*/