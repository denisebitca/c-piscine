/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 09:15:19 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/22 10:06:03 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_checkbase(char *str);

int	ft_nbrlength(long int nbrl, int nbr, int i)
{
	int	j;

	j = 0;
	while (nbrl >= i)
	{
		j++;
		nbrl /= i;
	}
	if (nbr < 0)
		return (j + 2);
	return (j + 1);
}

void	ft_rev_str(char *str, int size)
{
	char	temp;
	int		i;

	i = 0;
	while (i < size)
	{
		temp = str[i];
		str[i++] = str[size - 1];
		str[size-- - 1] = temp;
	}
}

char	*ft_putnbr_base(int nbr, char *base)
{
	int			i;
	int			j;
	long int	nbrl;
	char		*res;

	j = 0;
	i = ft_checkbase(base);
	nbrl = nbr;
	if (nbr < 0)
		nbrl = -nbrl;
	res = malloc(sizeof(char) * (ft_nbrlength(nbrl, nbr, i)));
	while (nbrl >= i)
	{
		res[j++] = base[nbrl % i];
		nbrl /= i;
	}
	res[j++] = base[nbrl];
	if (nbr < 0)
		res[j++] = '-';
	res[j] = '\0';
	ft_rev_str(res, j);
	return (res);
}
