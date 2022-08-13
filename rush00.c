/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 09:05:59 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/13 09:41:36 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_linepopulate(int x, int y, int i, int j);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (y > i)
	{
		while (x > j)
		{
			ft_linepopulate(x, y, i, j);
			j++;
		}
		j = 0;
		i++;
		ft_putchar('\n');
	}
}

void	ft_linepopulate(int x, int y, int i, int j)
{
	if (i == 0 || i == y - 1)
	{
		if (j == 0 || j == x - 1)
			ft_putchar('o');
		else
			ft_putchar('-');
	}
	else
	{
		if (j == 0 || j == x - 1)
			ft_putchar('|');
		else
			ft_putchar(' ');
	}
}
