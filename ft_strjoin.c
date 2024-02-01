/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsodini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:27:59 by lsodini           #+#    #+#             */
/*   Updated: 2024/01/15 12:28:01 by lsodini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
/*#include <stdio.h>

int main()
{
    char const s1[] = "ciao so";
    char const s2[] = "no luca";
    char *result = ft_strjoin(s1, s2);

    if (result) {
        printf("%s\n", result);
        free(result);  // Deallocazione della memoria
    } else {
        fprintf(stderr, "Errore durante l'allocazione di memoria.\n");
        return 1;
    }

    return 0;
}*/
