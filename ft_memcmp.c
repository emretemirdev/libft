/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:29:57 by emtemir           #+#    #+#             */
/*   Updated: 2023/07/07 19:31:35 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int memcmp(const void *ptr1, const void *ptr2, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        if (((unsigned char *)ptr1)[i] != ((unsigned char *)ptr2)[i])
            return (((unsigned char *)ptr1)[i] - ((unsigned char *)ptr2)[i]);
        i++;
    }
    return (0);
}

#include <stdio.h>

int main()
{
    char *str1 = "Hello Worlc";
    char *str2 = "Hello World";
    int n = 13;
    printf("%d\n", memcmp(str1, str2, n));
    return 0;
}