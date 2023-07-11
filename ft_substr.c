/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:39:11 by emtemir           #+#    #+#             */
/*   Updated: 2023/07/11 11:24:11 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		ptr = (char *) malloc (sizeof (char));
		if (!ptr)
			return (NULL);
		*ptr = '\0';
		return (ptr);
	}
	if (ft_strlen(s) - start > len)
		i = len + 1;
	else
		i = ft_strlen(s) - start + 2;
	ptr = (char *) malloc ((i) * sizeof (char));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s + start, i);
	return (ptr);
}
