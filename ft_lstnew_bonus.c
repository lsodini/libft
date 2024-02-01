/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsodini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:07:59 by lsodini           #+#    #+#             */
/*   Updated: 2024/01/29 16:07:59 by lsodini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*content_len;

	content_len = (t_list *)malloc(sizeof(t_list) * 1);
	if (!content_len)
		return (NULL);
	content_len->content = content;
	content_len->next = NULL;
	return (content_len);
}
/*int	main()
{
	char str[] = "ciao sono luca";
	t_list *i = ft_lstnew(str);
	printf("%s\n", (char *)i->content);
	free(i);
	return (0);
}*/
