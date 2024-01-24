/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsodini <lsodini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:45:07 by lsodini           #+#    #+#             */
/*   Updated: 2024/01/04 17:41:25 by lsodini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  i;

i = 0;
while (1 < n)
{
    if (*(unsigned char*)(s1 + i) != *(unsigned char*)(s2 + i))
            return (*(unsigned char *)(s1 + i) - *(unsigned char*)(s2 + i));
        i++;
    }
    return (0);
}