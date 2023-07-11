/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:30:34 by emtemir           #+#    #+#             */
/*   Updated: 2023/07/11 11:33:57 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t	count_digits(int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
	{
		n = (n / 10) * -1;
		i += 2;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static size_t	ft_abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

static int	fill_string(char *str, int n)
{
	int	i;

	i = 0;
	if (n / 10 != 0)
		i = fill_string(str, n / 10);
	else if (n < 0)
	{
		str[i] = '-';
		i++;
	}
	str[i] = ft_abs(n % 10) + '0';
	i++;
	str[i] = '\0';
	return (i);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	size_t	len;

	len = count_digits(n);
	if (len == 0)
		len = 1;
	ptr = (char *) malloc ((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	fill_string(ptr, n);
	return (ptr);
}
