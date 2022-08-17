/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 09:15:19 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/17 09:11:58 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_checkbase(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j++])
				return (0);
		}
		if (str[i] == ' ' || str[i] == '+' || str[i] == '-'
			|| (str[i] >= 9 && str[i] <= 13))
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			i;
	int			j;
	long int	nbrl;
	char		res[32];

	j = 0;
	i = ft_checkbase(base);
	if (!i)
		return ;
	nbrl = nbr;
	if (nbr < 0)
		nbrl = -nbrl;
	while (nbrl >= i)
	{
		res[j++] = base[nbrl % i];
		nbrl /= i;
	}
	res[j] = base[nbrl];
	if (nbr < 0)
		write(1, "-", 1);
	while (j != -1)
		write(1, &res[j--], 1);
}
