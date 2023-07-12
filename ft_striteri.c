/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:47:49 by emtemir           #+#    #+#             */
/*   Updated: 2023/07/12 20:52:59 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include<stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (*s)
	{
		f(i, s);
		i++;
		s++;
	}
}
void my_func (unsigned int i, char *str)
{
    char str2;
    str2= *str;
    str2 -= 32;
    printf("%c\n",str2);
}


int main ()
{
    char *s = "deneme";
    ft_striteri(s,my_func);
}