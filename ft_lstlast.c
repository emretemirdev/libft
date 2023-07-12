/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:33:27 by emtemir           #+#    #+#             */
/*   Updated: 2023/07/12 21:18:54 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
#include <stdio.h>
int main()
{
    t_list *list = NULL;

    t_list *node1 = ft_lstnew("Node 1");
    ft_lstadd_front(&list, node1);

    t_list *node2 = ft_lstnew("Node 2");
    ft_lstadd_front(&list, node2);

    t_list *node3 = ft_lstnew("Node 3");
    ft_lstadd_front(&list, node3);

    t_list *last_node = ft_lstlast(list);
    printf("Last node content: %s\n", (char *)last_node->content);
    return (0);
}
