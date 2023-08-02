/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 19:41:44 by emtemir           #+#    #+#             */
/*   Updated: 2023/07/09 19:48:16 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

/*
#include <stdio.h>

int main(void)
{
    int *ip, id;

    ip = (int *) calloc(10, sizeof(int));
    id = 0;

    while (id < 10)
    {
        id++;
        *(ip+id) = (id+1) * 5;
        printf("%p adresindeki değer: %d\n", (ip+id), *(ip+id));
    }

    free(ip);
}
*/
