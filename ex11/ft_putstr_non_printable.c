/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 15:28:20 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/13 19:32:24 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_writehex(char c);
void	ft_hexloop(int quotient, int *i, char *hexnum);

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] < 32) || str[i] == 127)
		{
			ft_putchar('\\');
			ft_writehex(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_writehex(char c)
{
	int		quotient;
	int		i;
	char	hexnum[3];

	if (c >= 0 && c <= 9)
		ft_putchar(c + '0');
	else
	{
		i = 1;
		quotient = c;
		ft_hexloop(quotient, &i, hexnum);
		if (i != -1)
		{
			hexnum[0] = hexnum[1];
			hexnum[1] = '\0';
			write(1, hexnum, 2);
		}
		else
		{
			hexnum[2] = '\0';
			write(1, hexnum, 3);
		}
	}
}

void	ft_hexloop(int quotient, int *i, char *hexnum)
{
	int	temp;

	while (quotient != 0)
	{
		temp = quotient % 16;
		if (temp < 10)
			temp = temp + 48;
		else
			temp = temp + 55;
		hexnum[*i] = temp;
		*i = *i - 1;
		quotient = quotient / 16;
	}
}
