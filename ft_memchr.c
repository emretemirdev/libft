/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:13:09 by emtemir           #+#    #+#             */
/*   Updated: 2023/07/12 18:45:30 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)str)[i] == (unsigned char)c)
			return ((void *)str + i);
			i++;
	}
	return (NULL);
}

#include <stdio.h>
int main()
{
	char str[] = "Hello World!";
	int c = 'o';
	void *result = ft_memchr(str,c,sizeof(str));
	printf("%s", (char*)result);
}