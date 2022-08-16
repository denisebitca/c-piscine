/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 09:15:19 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/16 10:44:37 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_checkbase(char *str)
{
	unsigned int	i;
	unsigned int	j;

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
		if (str[i] == ' ' || str[i] == '+' || str[i] == '-')
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}

void	ft_write_base(int nbr, char *base)
{
	write(1, &base[nbr], 1);
}

unsigned int	ft_multiplier(unsigned int nbr, unsigned int baselen)
{
	int	i;

	i = 1;
	while (nbr > baselen)
	{
		nbr /= baselen;
		i *= baselen;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	nbrunsigned;
	unsigned int	baselen;
	unsigned int	multiplier;

	baselen = ft_checkbase(base);
	if (!baselen)
		return ;
	if (nbr < 0)
	{
		nbrunsigned = -nbr;
		write(1, "-", 1);
	}
	else
		nbrunsigned = nbr;
	multiplier = ft_multiplier(nbrunsigned, baselen);
	while (nbrunsigned >= baselen || multiplier != 1)
	{
		ft_write_base(nbrunsigned / multiplier, base);
		nbrunsigned %= multiplier;
		multiplier /= baselen;
	}
	ft_write_base(nbrunsigned % baselen, base);
}
