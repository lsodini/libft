/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsodini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 11:52:10 by lsodini           #+#    #+#             */
/*   Updated: 2023/12/20 11:52:13 by lsodini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, (count * size));
	return (ptr);
}
/*int main()
{
    // Esempio di utilizzo di ft_calloc per allocare un array di 5 interi
    size_t count = 7;
    size_t size = sizeof(int);

    int *arr = (int *)ft_calloc(count, size);

    if (arr == NULL) {
        fprintf(stderr, "Errore nell'allocazione di memoria.\n");
        return 1;
    }

    // Inizializzazione degli elementi dell'array con un while
    size_t i = 0;
    while (i < count) {
        arr[i] = i + 1;
        i++;
    }

    // Stampa degli elementi dell'array con un while
    printf("Array dopo l'inizializzazione:\n");
    i = 0;
    while (i < count) {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");

    // Deallocazione dell'array
    free(arr);

    return 0;
}*/
