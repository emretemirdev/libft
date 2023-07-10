/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:42:32 by emtemir           #+#    #+#             */
/*   Updated: 2023/07/10 18:11:42 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_char_in_set(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, const char *set)
{
	char	*mystr;
	size_t	start;
	size_t	end;
	size_t	i;

	start = 0;
	while (s1[start] && ft_char_in_set(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_char_in_set(set, s1[end - 1]))
		end--;
	mystr = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!mystr)
		return (NULL);
	i = 0;
	while (start < end)
		mystr[i++] = s1[start++];
	mystr[i] = '\0';
	return (mystr);
}
