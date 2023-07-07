/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:36:04 by emtemir           #+#    #+#             */
/*   Updated: 2023/07/07 19:39:50 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strnstr(const char *s1, const char *s2, size_t n)
{
    size_t i;
    size_t j;

    i = 0;
    if (s2[i] == '\0')
        return ((char *)s1);
    while (s1[i] && i < n)
    {
        j = 0;
        while (s1[i + j] == s2[j] && (i + j) < n)
        {
            if (s2[j + 1] == '\0')
                return ((char *)s1 + i);
            j++;
        }
        i++;
    }
    return (NULL);
}

#include <stdio.h>
int main()
{
    char *str1 = "Hello aWord";
    char *str2 = "Word";
    int n = 13;
    printf("%s\n", strnstr(str1, str2, n));
    return 0;
}