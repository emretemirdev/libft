/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:58:13 by emtemir           #+#    #+#             */
/*   Updated: 2023/07/12 21:15:47 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = (*lst);
	(*lst) = new;
}

/*
#include <stdio.h>

int main()
{
    t_list *list = NULL;
    ft_lstadd_front(&list, ft_lstnew("Hello, world!"));
    printf("%s\n", (char *)list->content);
}
*/