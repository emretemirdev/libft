/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:06:15 by emtemir           #+#    #+#             */
/*   Updated: 2023/07/14 12:19:16 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*str;
	char	*src2;
	size_t	i;

	i = 0;
	str = (char *)dst;
	src2 = (char *)src;
	if (dst == NULL && src == NULL)
	{
		return (NULL);
	}
	while (i < n)
	{
		str[i] = src2[i];
		i++;
	}
	return (dst);
}

#include<stdio.h>
int main()
{
	char src[] = "EmreKing";
	char dst[15];
	ft_memcpy(dst,src,14); 
	printf("%s", dst); 
}