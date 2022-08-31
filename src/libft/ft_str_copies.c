/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_copies.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aronez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 11:20:10 by aronez            #+#    #+#             */
/*   Updated: 2022/08/29 11:20:10 by aronez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <malloc.h>

#include "src/libft/libft.h"

char	*ft_strncat(char *dest, const char *src, int n)
{
	int	len;
	int	i;

	len = 0;
	while (dest[len] != '\0')
		len++;
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[len + i] = '\0';
		i++;
	}
	return (dest);
}
