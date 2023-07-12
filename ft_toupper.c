/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:42:31 by emtemir           #+#    #+#             */
/*   Updated: 2023/07/12 12:42:32 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_toupper(int b)
{
	if (b >= 'a' && b <= 'z')
	{
		b -= 32;
	}
	return (b);
}

int main()
{
	int a = 'b';
	printf("%c\n", ft_toupper(a));
	return (0);
}