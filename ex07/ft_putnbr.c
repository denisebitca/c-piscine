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

int		ft_len(int nb);
void	ft_write(char c);

void	ft_putnbr(int nb)
{
	int	len;
	int	flag;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		flag = 0;
		if (nb < 0)
		{
			flag = 1;
			nb = nb * -1;
		}
		if (flag)
			ft_write('-');
		len = ft_len(nb);
		while (len > 1)
		{
			ft_write(nb / len + '0');
			nb = nb % len;
			len = len / 10;
		}
		ft_write(nb % 10 + '0');
	}
}

int	ft_len(int nb)
{
	int	multiplier;
	int	val;

	val = nb / 10;
	multiplier = 10;
	if (val == 0)
		return (1);
	else
	{
		while (val > 9)
		{
			multiplier = multiplier * 10;
			val = nb / multiplier;
		}
	}
	return (multiplier);
}

void	ft_write(char c)
{
	write(1, &c, 1);
}
