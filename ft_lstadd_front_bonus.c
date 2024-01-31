/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsodini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:17:56 by lsodini           #+#    #+#             */
/*   Updated: 2024/01/29 16:17:56 by lsodini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst)
	{
		new->next = *lst;
		*lst = new;
	}
	else
		*lst = new;
}
/*
#include <stdio.h>

int	main()
{
	char str3[] = "fofuygoudoytop";
	char str[] = "ciao sono luca";
	t_list *i = ft_lstnew(str3);
	t_list *j = ft_lstnew(str);
	t_list *str2 = NULL; //perchè è l'inizio
	ft_lstadd_front (&str2, i);
	ft_lstadd_front (&str2, j);
	printf("%s\n", (char *)str2->content);
	printf("%s\n", (char *)str2->next->content);
	return(0);
}*/
