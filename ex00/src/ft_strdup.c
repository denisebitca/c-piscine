/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 08:37:35 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/19 09:06:42 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*duplicate;
	int		srcsize;
	int		i;

	srcsize = 1;
	i = -1;
	while (src[((srcsize++)) - 1])
		;
	duplicate = malloc(sizeof(char) * srcsize);
	if (duplicate == NULL)
		return (NULL);
	while (src[++i])
		duplicate[i] = src[i];
	duplicate[i] = '\0';
	return (duplicate);
}
