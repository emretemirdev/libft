/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:30:13 by emtemir           #+#    #+#             */
/*   Updated: 2023/07/14 13:33:07 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
#include <stdio.h>
int main()
{
	char *str = malloc(sizeof(char)*10);
	
	printf("%s\n",str);
	ft_memset(str,'A',4);
	printf("%s\n",str);
	ft_bzero(str,4);
	printf("%s\n",str);
}
*/
