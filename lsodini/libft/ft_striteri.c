/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsodini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:27:50 by lsodini           #+#    #+#             */
/*   Updated: 2024/01/15 12:27:54 by lsodini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void  ft_striteri(char *s, void (*f)(unsigned int, char *))
{
      unsigned int  i;

      i = 0;
      while (s[i])
      {
              f(i, s + i);
              i++;
      }
}
/*#include <stdio.h>

void my_toupper(unsigned int i, char *c)
{
	*c = ft_toupper(*c);
}
int main()
{
	char s[]= "abcd";
	ft_striteri(s, &my_toupper);
	printf("%s\n", s);	
}*/
