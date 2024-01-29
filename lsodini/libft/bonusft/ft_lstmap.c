/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsodini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:22:51 by lsodini           #+#    #+#             */
/*   Updated: 2024/01/29 17:22:51 by lsodini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void*(*f)(void *), void (*del)(void *))
{
		t_list	*new;
		t_list	*save;

		if (!lst || !f || !del)
				return (0);
		new = ft_lstnew(f(lst->content));
		if(!new)
				return (0);
		save = new;
		lst = lst->next;
		while (lst)
		{
				new->next = ft_lstnew(f(lst->content));
				if (!new->next)
				{
						ft_lstclear(&save, del);
						return (0);
				}
				new = new ->next;
				lst = lst->next;
		}
		new->next = NULL;
		return (save);
}
/*#include <stdio.h>

void *modifica_contenuto(void *valore_nodo)
{
    int *valore = (int *)valore_nodo;
    *valore += 100;
    return valore_nodo;
}
void del(void *nodo)
{
	free(nodo);
}

int main()
{
	t_list *head;
	t_list *nodo;
	t_list *newhead;
	int x = 10;
	int y = 20;
	
	head = ft_lstnew(&x);
	nodo = ft_lstnew(&y);
	ft_lstadd_back(&head, nodo);
	newhead = ft_lstmap(head, modifica_contenuto, del);

	while(newhead)
	{
	 int *valore = (int *)newhead->content;
        printf("%d\n", *valore);
        newhead = newhead->next;
	}
	return (0);
}*/