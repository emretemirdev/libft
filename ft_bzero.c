/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:30:13 by emtemir           #+#    #+#             */
/*   Updated: 2023/07/12 16:07:42 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

#include <stdio.h>
int main()
{
	char *str = malloc(10);
	str = ft_memset(str, 'A', 5);
	printf("%s\n", str);
	size_t n = 10;
	ft_bzero(str,n);
	printf("%s\n", str);
}