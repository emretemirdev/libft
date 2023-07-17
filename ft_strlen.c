/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:42:53 by emtemir           #+#    #+#             */
/*   Updated: 2023/07/12 17:43:53 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *c)
{
	size_t	i;

		i = 0;
	while (c[i])
	{
		i++;
	}
	return (i);
}


#include <stdio.h>

int main()
{
	char str[] = "EmreTemir";
	printf("%zu\n",ft_strlen(str));
	
}
