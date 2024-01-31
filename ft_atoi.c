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

int	ft_atoi(const char *str)
{
	int	n;
	int	i;
	int	sign;

	n = 0;
	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = (n * 10) + str[i] - '0';
		i++;
	}
	n = n * sign;
	return (n);
}
/*#include <stdio.h>

int main() {
    const char *input1 = "123";
    const char *input2 = "-456";
    const char *input3 = "   +789";
    const char *input4 = "  -42abc";

    int result1 = ft_atoi(input1);
    int result2 = ft_atoi(input2);
    int result3 = ft_atoi(input3);
    int result4 = ft_atoi(input4);

    printf("Input: \"%s\", Result: %d\n", input1, result1);
    printf("Input: \"%s\", Result: %d\n", input2, result2);
    printf("Input: \"%s\", Result: %d\n", input3, result3);
    printf("Input: \"%s\", Result: %d\n", input4, result4);

    return 0;
}*/
