/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:50:17 by emtemir           #+#    #+#             */
/*   Updated: 2023/07/07 18:55:44 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    while (s[0] != c && s[0] != '\0')
        s++;
    if (s[0] == '\0')
        return NULL;
    else
        return (char *)s;
}
#include <stdio.h>
int main()
{
	char *str = "Hello World";
	char *ptr;

	ptr = ft_strchr(str, 'W');
	printf("%s\n", ptr);
	return 0;
}
