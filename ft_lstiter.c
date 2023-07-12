/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:50:31 by emtemir           #+#    #+#             */
/*   Updated: 2023/07/12 21:27:12 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
#include <stdio.h>
void	print_content(void *content)
{
    printf("%s\n", (char *)content);
}

int main()
{
    t_list *list = ft_lstnew(strdup("Node 1"));
    ft_lstadd_front(&list, ft_lstnew(strdup("Node 2")));
    ft_lstadd_front(&list, ft_lstnew(strdup("Node 3")));
    ft_lstiter(list, print_content);
    return (0);
}