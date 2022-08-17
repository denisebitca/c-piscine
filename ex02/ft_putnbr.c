/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 09:15:19 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/11 13:54:31 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nbr)
{
	int			j;
	long int	nbrl;
	char		res[32];

	j = 0;
	nbrl = nbr;
	if (nbr < 0)
		nbrl = -nbrl;
	while (nbrl >= 10)
	{
		res[j++] = (nbrl % 10) + '0';
		nbrl /= 10;
	}
	res[j] = nbrl + '0';
	if (nbr < 0)
		write(1, "-", 1);
	while (j != -1)
		write(1, &res[j--], 1);
}
