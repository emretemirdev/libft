/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:51:44 by emtemir           #+#    #+#             */
/*   Updated: 2023/07/12 21:29:55 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*buffer;
	t_list	*temp;

	if (lst == NULL || f == NULL)
		return (NULL);
	buffer = NULL;
	while (lst)
	{
		temp = ft_lstnew((*f)(lst->content));
		if (!temp)
		{
			ft_lstclear(&buffer, del);
			free(temp);
			return (NULL);
		}
		ft_lstadd_back(&buffer, temp);
		temp = temp->next;
		lst = lst->next;
	}
	return (buffer);
}

#include <stdio.h>

void	*add_one(void *content)
{
	int	*num;

	num = (int *)content;
	*num += 1;
	return (num);
}

void	del(void *content)
{
	free(content);
}

int main()
{
	t_list *list = ft_lstnew(ft_strdup("Node 1"));
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("Node 2")));
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("Node 3")));
	ft_lstmap(list, add_one, del);
	ft_lstclear(&list, del);
	return (0);
}
