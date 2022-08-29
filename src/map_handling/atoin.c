/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoin.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:32:13 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/29 15:43:34 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

int	atoin(const char *str, int size)
{
	long int	i;
	long int	nb;

	i = 0;
	nb = 0;
	while (i < size)
		nb = nb * 10 + (str[i++] - '0');
	if (nb > INT_MAX)
		return (-1);
	else
		return (nb);
}
