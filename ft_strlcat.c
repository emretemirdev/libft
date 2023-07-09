/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:12:16 by emtemir           #+#    #+#             */
/*   Updated: 2023/07/09 13:18:42 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t sourcesize;
    
    i = 0;
    sourcesize = 0;
    while (dst[i] && i < size)
        i++;
    while (src[sourcesize] && (i + sourcesize + 1) < size)
    {
        dst[i + sourcesize] = src[sourcesize];
        sourcesize++;
    }
    if (i != size)
        dst[i + sourcesize] = '\0';
    return (i + ft_strlen(src));
}

#include <stdio.h>
int main()
{
    char str1[20] = "Hello";
    char str2[20] = "World";
    size_t size = 10;
    printf("%zu\n", strlcat(str1, str2, size));
    printf("%s\n", str1);
    return (0);
}