/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 18:16:40 by emtemir           #+#    #+#             */
/*   Updated: 2023/07/10 18:24:13 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_counter(char const *s, char c)
{
	size_t	word_counter;

	word_counter = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{	
			word_counter++;
			while (*s && *s != c)
				s++;
		}
	}
	return (word_counter);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	size_t	word_size;
	size_t	letter_counter;

	word_size = word_counter(s, c);
	dst = (char **)malloc((word_size + 1) * sizeof(char *));
	if (!dst)
		return (NULL);
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			letter_counter = 0;
			while (*s && *s != c && ++letter_counter)
				s++;
			*dst++ = ft_substr(s - letter_counter, 0, letter_counter);
		}
	}
	*dst = 0;
	return (dst - word_size);
}
#include <stdio.h>

int main ()
{
    char **s;
    s = ft_split("1244272882", '2');
    while(*s)
        printf("%s\n", *(s++));
}
