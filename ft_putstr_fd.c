/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:21:49 by emtemir           #+#    #+#             */
/*   Updated: 2023/07/14 17:32:18 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}

#include <fcntl.h>

int main()
{
	int fd = open("EmreTemiir.txt", O_CREAT | O_RDWR, 0777);
	char *s = "SELAMIN ALEYKÜM BEN EMRE TEMİR";
	ft_putstr_fd(s,fd);
}
