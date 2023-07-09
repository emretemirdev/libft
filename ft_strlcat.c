/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:12:16 by emtemir           #+#    #+#             */
/*   Updated: 2023/07/09 16:39:53 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	sourcesize;

	i = 0;
	sourcesize = 0;
	while (dst[i] && i < size)
		i++;
	while (src[sourcesize] && (i + sourcesize + 1) < size)
	{
		dst[i + sourcesize] = src[sourcesize];
		sourcesize++;
	}
	if (i != size)
		dst[i + sourcesize] = '\0';
	return (i + ft_strlen(src));
}
