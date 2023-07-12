/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:02:32 by emtemir           #+#    #+#             */
/*   Updated: 2023/07/12 17:13:58 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t num)
{
	char	*d;
	char	*s;

	d = (char *)destination;
	s = (char *)source;
	if (destination == source)
	{
		return (destination);
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
int main()
{
	char src[] = "Emre King";
	char dst[15];
	ft_memmove(dst,src,2); 
	printf("%s", dst); 
}