/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoigoux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:24:26 by sgoigoux          #+#    #+#             */
/*   Updated: 2022/08/28 14:36:48 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <limits.h>

long int    ft_atoi(char *str)
{
    long int    i;
    long int    neg;
    long int    nb;

    i = 0;
    neg = 1;
    nb = 0;
    while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
        || str[i] == '\v' || str[i] == '\r' || str[i] == '\f')
    {
        i++;
    }
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            neg *= -1;
        i++;
    }
    while (str[i] >= 48 && str[i] <= 57)
    {
        nb = nb * 10 + (str[i] - '0');
        i++;
    }
    nb = nb * neg;
    if (nb < 0 || nb > UINT_MAX)
        return (-1);
    else 
        return (nb);
}
