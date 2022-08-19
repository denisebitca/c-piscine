/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 09:08:45 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/19 09:29:45 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*returnval;
	int	i;

	i = min;
	if (min >= max)
		return (NULL);
	returnval = malloc(sizeof(int) * (max - min));
	if (returnval == NULL)
		return (NULL);
	min--;
	while (++min < max)
		returnval[min - i] = min;
	return (returnval);
}
