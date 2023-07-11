/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:50:01 by emtemir           #+#    #+#             */
/*   Updated: 2023/07/11 16:56:55 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = (NULL);
	return (new);
}
#include <stdio.h>

int main()
{
    int value = 42;
    t_list *new_node = ft_lstnew(&value);
	int *content = (int *)(new_node->content);
    printf("Content of the new node: %d\n", *content);
    return 0;
}
