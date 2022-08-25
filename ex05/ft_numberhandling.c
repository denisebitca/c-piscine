/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numberhandling.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 09:28:35 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/25 11:10:37 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_doop.h"

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

int	ft_set_good_start(int *sign, char **str)
{
	int	i;

	i = 0;
	while (((*str)[i] >= 9 && (*str)[i] <= 13) || (*str)[i] == ' ')
		i++;
	while ((*str)[i] == '-' || (*str)[i] == '+')
		if ((*str)[i++] == '-')
			*sign = -(*sign);
	(*str) = &((*str)[i]);
	i = -1;
	while ((*str)[++i])
		if ((*str)[i] < '0' || (*str)[i] > '9')
			break ;
	return (i);
}

int	ft_pow(int power)
{
	int	ret;

	ret = 1;
	while (--power)
		ret *= 10;
	return (ret);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	strlen;
	int	i;
	int	final;

	sign = 1;
	i = -1;
	final = 0;
	strlen = ft_set_good_start(&sign, &str);
	while (++i < strlen)
		final += (str[i] - '0') * ft_pow(strlen - i);
	return (final * sign);
}
