/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:48:04 by emtemir           #+#    #+#             */
/*   Updated: 2023/07/12 21:25:22 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!del || !lst || !*lst)
		return ;
	while (lst && *lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}

#include <stdio.h>

void	del(void *str)
{
    free(str);
}

int main()
{
    t_list *list = ft_lstnew(strdup("Node 1"));
    ft_lstadd_front(&list, ft_lstnew(strdup("Node 2")));
    ft_lstadd_front(&list, ft_lstnew(strdup("Node 3")));
    ft_lstclear(&list, del);
    return (0);
}
