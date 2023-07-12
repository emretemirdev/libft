/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:43:03 by emtemir           #+#    #+#             */
/*   Updated: 2023/07/12 16:03:32 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)b;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*
#include <stdio.h>
 
 int main()
 {
	char *str = malloc(10);
	ft_memset(str,'A', 5);
	printf("%s",str);
 }
 */