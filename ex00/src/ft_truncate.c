/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_truncate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoigoux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:14:11 by sgoigoux          #+#    #+#             */
/*   Updated: 2022/08/28 16:14:52 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int    ft_strlen(char *str)
{
    int    n;

    n = 0;
    while (str[n] != '\0')
    {
        n++;
    }
    return (--n); 
}

char    *ft_truncate (char *str)
{
    int    i;
    int    j;
    char    *chr;
    
    i = 0;
    j = 0;
    chr = malloc ((ft_strlen(str) + 1) * sizeof (char));
    if (!chr)
        return(NULL);
    while (str[i] == ' ')
    {
        i++;
    }
    while (str[i])
    {
        chr[j++] = str[i];
        i++;
    }
    chr[j] = 0;
    return (chr);
}
