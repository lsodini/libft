/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsodini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:29:25 by lsodini           #+#    #+#             */
/*   Updated: 2024/01/29 16:29:25 by lsodini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = (lst)->next;
	}
	return (i);
}
/*
#include <stdio.h>

int	main()
{
	t_list *i = (t_list *)malloc(sizeof(t_list));
	t_list *j = (t_list *)malloc(sizeof(t_list));
	t_list *k = (t_list *)malloc(sizeof(t_list));
	i->content = "a";
	j->content = "b";
	k->content = "c";
	i->next = j;
	j->next = k;
	k->next = h;
	h->next = NULL;
	if (ft_lstsize(i) != 0)
	{
	printf("%d\n", ft_lstsize(i));
	}
	else
	{
		printf("La lista è vuota.\n");
	}
	return(0);
}*/
