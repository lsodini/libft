/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsodini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:28:16 by lsodini           #+#    #+#             */
/*   Updated: 2024/01/15 12:28:19 by lsodini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*str;
	size_t	inizio;
	size_t	fine;

	inizio = 0;
	fine = ft_strlen(s1);
	while (ft_strchr(set, (int) s1[inizio]) && inizio <= fine)
		inizio++;
	while (ft_strchr(set, (int) s1[fine]) && inizio < fine)
		fine--;
	str = ft_calloc(fine - inizio + 2, sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, (char *)s1 + inizio, fine - inizio + 2);
	return (str);
}
/*#include <stdio.h>

int	main()
{
	const char s1[]="ciao mondo";
	const char set[]="c""o";
	char *result = ft_strtrim(s1, set);
	printf("%s\n", result);
	free(result);
	return(0);
}*/
