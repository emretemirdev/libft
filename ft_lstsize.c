/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:02:58 by emtemir           #+#    #+#             */
/*   Updated: 2023/07/12 21:16:57 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	counter;

	counter = 0;
	while (lst)
	{
		++counter;
		lst = lst->next;
	}
	return (counter);
}
/*
#include <stdio.h>
int main()
{
    t_list *list = NULL;
    ft_lstadd_front(&list, ft_lstnew("Hello, world!"));
	ft_lstadd_front(&list, ft_lstnew("Hello, world!"));
	ft_lstadd_front(&list, ft_lstnew("Hello, world!"));
	int size = ft_lstsize(list);
    printf("List size: %d\n", size);
}
*/
