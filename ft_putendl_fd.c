/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:22:56 by emtemir           #+#    #+#             */
/*   Updated: 2023/07/14 17:23:12 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}

#include <fcntl.h>
#include <stdio.h>

int main()
{
	int fd = open("Emre.txt", O_CREAT | O_RDWR, 0777);
	char *s = "EmreTemir";
	ft_putendl_fd(s,fd);
}
