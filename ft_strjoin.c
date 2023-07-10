/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:18:12 by emtemir           #+#    #+#             */
/*   Updated: 2023/07/10 18:14:31 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i;
	int		i2;

	new = malloc((sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (!new)
		return (NULL);
	i = 0;
	i2 = 0;
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[i2])
	{
		new[i] = s2[i2];
		i++;
		i2++;
	}
	new[i] = '\0';
	return (new);	
}