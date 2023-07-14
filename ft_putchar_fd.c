/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:04:00 by emtemir           #+#    #+#             */
/*   Updated: 2023/07/14 17:22:40 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

#include <stdio.h>
#include <fcntl.h>

/*
int main()
{
    int fd = open("test.txt", O_CREAT | O_RDWR, 0777);
	char c = 'a';
	ft_putchar_fd(c,fd);
}
*/