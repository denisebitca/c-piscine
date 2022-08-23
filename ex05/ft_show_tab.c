/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:39:20 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/23 14:24:15 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

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

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	write(1, str, i);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = -1;
	while (par[++i].str != 0)
	{
		write(1, par[i].str, par[i].size);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
	}
}
