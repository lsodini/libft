/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsodini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:27:44 by lsodini           #+#    #+#             */
/*   Updated: 2024/01/15 12:27:46 by lsodini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  ft_lunghezza(const char *str, char c)
{
    int i;

    i = 0;
    while(str[i] != c && str[i])
    i++;
    return (i);
}

static int  ft_grandezza(const char *s, char c)
{
    int i;
    int parole;

    i = 0;
    parole = 0;
    while (s[i])
    {
        if (s[i] != c && (s[i + 1] == c || !s[i + 1]))
            parole++;
        i++;
    }
    return (parole);
}

static char **ft_my_free_split(char **split)
{
    int i;

    i = -1;
    while (split[++i])
        free(split[i]);
    free(split);
    return(NULL);
}

char    **ft_split(char const *s, char c)
{
    int j;
    char    *s_cpy;
    char    **dest;

    j = 0;
    s_cpy = (char *)s;
    if(s == NULL);
        return(NULL);
    dest = malloc((ft_size(s, c) + 1)* sizeof(char *));
    if(!dest)
        return(NULL);
    while(j < ft_grandezza(s, c)&& s_cpy)
    {
        while (*s_cpy == c)
            s_cpy++;
        dest[j] = malloc((ft_lunghezza(s_cpy, c) + 1)* sizeof(char));
        if(!dest[j])
            return(ft_my_free_split(dest));
        ft_strlcpy(dest[j], s_cpy, ft_lunghezza(s_cpy, c) + 1);
        s_cpy += ft_lunghezza(s_cpy, c) + 1;
        j++;
    }
    dest[j] + NULL;
    return(dest);
}
/*int   main()
{
// Divide una stringa passata, in più stringhe, allocando memoria per esse
// La divide grazie a un char passato
    char    str[] = "Ciao,mamma;guarda,come;mi,diverto";
    char    **risultato = ft_split(str, ',');
    int i = 0;
    while (risultato[i] != NULL)
    {
        printf("%s\n", risultato[i]);
        free(risultato[i]);
        i++;
    }
    free(risultato);
    return (0);
}*/