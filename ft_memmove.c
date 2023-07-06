/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:02:32 by emtemir           #+#    #+#             */
/*   Updated: 2023/07/06 17:21:16 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *destination, const void *source, size_t num){
    
    char *d;
    char *s;
    
    d = (char *)destination;
    s = (char *)source;
    if(destination == source)
    {
        return(destination);
    }
   if (s < d)
	{
		while (num--)
			*(d + num) = *(s + num);
		return (destination);
	}
	while (num--)
		*d++ = *s++;
	return (destination);
}

#include <stdio.h>

int main ()
{
    char a[10] = "Kocaeli";
    const char b[] = "istanbul";
    ft_memmove(a,b,2);
    printf("%s\n%s",a,b);
}