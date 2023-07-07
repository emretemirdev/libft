/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:06:37 by emtemir           #+#    #+#             */
/*   Updated: 2023/07/07 19:09:07 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    size_t i;

    i = 0;
    while (str1[i] && str2[i] && str1[i] == str2[i] && i < n)
        i++;
    if (i == n)
        return (0);
    else
        return (str1[i] - str2[i]);
}

#include <stdio.h>
int main()
{
    char *str1 = "Hello World";
    char *str2 = "Hessllo World";
    int n = 5;
    printf("%d\n", ft_strncmp(str1, str2, n));
    return 0;
}