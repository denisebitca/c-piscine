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
	while (src[i] != '\0' && i < n)
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

int	ft_str_dup(const char *src, char **dest)
{
	int	src_len;
	int	i;

	src_len = ft_strlen(src);
	*dest = malloc(sizeof(char) * (src_len + 1));
	if (*dest == NULL)
		return (-1);
	i = 0;
	while (i < src_len + 1)
	{
		(*dest)[i] = src[i];
		i++;
	}
	return (0);
}
