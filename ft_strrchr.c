/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 18:56:18 by emtemir           #+#    #+#             */
/*   Updated: 2023/07/07 19:00:37 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;

    i = ft_strlen(s);
    while (s[i] != c && i >= 0)
        i--;
    if (i < 0)
        return NULL;
    else
        return (char *)s + i;
}

#include <stdio.h>

int main()
{
    char *str = "Emre Temir OO oo oo    qweqw ";
    char *ptr;

    ptr = ft_strrchr(str, 'o');
    printf("%s\n", ptr);
    return 0;
}