/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 15:28:20 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/14 16:09:06 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_writehex(int c);
/*void	ft_hexloop(int quotient, int *i, char *hexnum);
char	*ft_strlowcase(char *str);*/

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = (unsigned char) str[i];
		if (c < 32 || c > 126)
		{
			ft_writehex(c);
		}
		else
			ft_putchar(c);
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_writehex(int c)
{
	char	*table;

	table = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(table[c / 16]);
	ft_putchar(table[c % 16]);
}
/*void	ft_writehex(char c)
{
	int		i;
	char	hexnum[3];

	if (c >= 0 && c <= 9)
	{
		hexnum[0] = '0';
		hexnum[1] = c + '0';
	}
	else
	{
		i = 1;
		ft_hexloop(c, &i, hexnum);
		if (i != -1)
			hexnum[0] = '0';
	}
	hexnum[2] = '\0';
	ft_strlowcase(hexnum);
	write(1, hexnum, 3);
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

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] - 'A' + 'a';
		i++;
	}
	return (str);
}*/
