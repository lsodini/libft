/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsodini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:08:35 by lsodini           #+#    #+#             */
/*   Updated: 2024/01/29 17:08:35 by lsodini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
		if(lst != NULL)
		{
				if (del != NULL &&  lst->content != NULL)
						(del)(lst->content);
				free(lst);
				lst = NULL;
		}
}
/*
#include <stdio.h>
void del(void *content)
{
        free (content);
}

int	main()
{
    t_list *lista = NULL;
    char *str = ft_strdup("ciao");
    t_list *nodo = ft_lstnew(str);
    ft_lstadd_back(&lista, nodo);
    ft_lstdelone(nodo, del);
    printf("%p\n", (char *)lista->content);
    return (0);
}*/