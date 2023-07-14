/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:43:03 by emtemir           #+#    #+#             */
/*   Updated: 2023/07/14 16:15:23 by emtemir          ###   ########.fr       */
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
	char *str = malloc(sizeof(char)*10);
	printf("%s\n",str);
	ft_memset(str,'A',4);
	printf("%s",str);
}
*/

