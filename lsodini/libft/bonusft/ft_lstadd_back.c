/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsodini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:02:14 by lsodini           #+#    #+#             */
/*   Updated: 2024/01/29 17:02:14 by lsodini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
		t_list	*last;

		if (new == NULL)
				return;
		if (*lst == NULL)
				*lst = new;
		else
		{
				last = ft_lstlast(*lst);
				last->next = new;
		}
}
/*
#include <stdio.h>

int	main()
{
	char str3[] = "hgjhgjhg";
	char str[] = "ciao sono luca";
	t_list *i = ft_lstnew(str3);
	t_list *j = ft_lstnew(str);
	t_list *str2 = NULL; //perche' e' l'inizio
	ft_lstadd_back (&str2, i);
	ft_lstadd_back (&str2, j);
	printf("%s\n", (char *)str2->content);
	printf("%s\n", (char *)str2->next->content);
	return(0);
}*/