/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 13:21:38 by emtemir           #+#    #+#             */
/*   Updated: 2023/07/09 13:24:14 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
    int		sign;
    int 	result;

    sign = 1;
    result = 0;
 
    while (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f'
            || *str == '\r' || *str == ' ')
        str++;
    if (*str == '-')
        sign = -1;
    if (*str == '+' || *str == '-')
        str++;
    while (*str && ft_isdigit(*str))
    {
        result = result * 10 + (*str - '0');
        str++;
    }
    return (sign * result);
}
#include <stdio.h>
int main()
{
    char str[] = "  -1234567890";
    printf("%d\n", ft_atoi(str));
    return (0);
}