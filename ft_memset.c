/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:05:52 by emtemir           #+#    #+#             */ 
/*   Updated: 2023/07/06 14:57:53 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t n)
{
    size_t i;
    char    *str;

    i = 0;
    str = (char *)b;
    while (i < n)
    {
        str[i] = (unsigned char)c;
        i++;
    }
    return (b);
}

int main() {
    char str[20] = "Hello, World!";
    printf("Önce: %s\n", str);

    ft_memset(str, 'A', 12);
    printf("Sonra: %s\n", str);

    return 0;
}