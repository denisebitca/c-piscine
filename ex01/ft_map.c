/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 20:21:48 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/25 15:25:21 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*ret;

	i = -1;
	ret = malloc(sizeof(int) * length);
	if (ret == NULL)
		return (NULL);
	while (++i < length)
		ret[i] = f(tab[i]);
	return (ret);
}
