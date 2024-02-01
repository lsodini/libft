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
	int		i;
	char	*dup;

	i = 0;
	while (src[i])
		i++;
	dup = malloc(sizeof(char) * i + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*#include <stdio.h>

int main()
{
    char src[] = "ciao sono luca";
    char *duplicated_string = ft_strdup(src);

    if (duplicated_string) {
        printf("%s\n", duplicated_string);
        free(duplicated_string);  // Deallocazione della memoria
    } else {
        fprintf(stderr, "Errore durante l'allocazione di memoria.\n");
        return 1;
    }

    return 0;
}*/
