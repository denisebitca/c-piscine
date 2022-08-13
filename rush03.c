/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 09:05:59 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/13 11:35:36 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_linepopulate(int x, int y, int i, int j);

/*
 * rush
 *
 * Return type: void
 * Arguments:
 * int x - length;
 * int y - height;
 *
 * Description: Writes a box of x length and y height
 *
 * Variables:
 * int i - iterator for height = 0;
 * int j - iterator for length = 0;
 *
 * For each row
 * 	For each column
 * 		Write the corresponding character to the current (x, y) point
 * 	Write a newline character
 * */
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

/*
 * ft_linepopulate
 *
 * Return type: void
 * Arguments:
 * int x - length;
 * int y - height;
 * int i - iterator for height;
 * int j - iterator for length;
 *
 * Description: Writes a character to the current (x, y) point
 *
 * If current row first or last:
 * If current column position first 
 *		write the 'A' character
 * If current column position is last:
 * 		write the 'C' character
 * 	Otherwise
 * 		write the 'B' character
 * */
void	ft_linepopulate(int x, int y, int i, int j)
{
	if (i == 0 || i == y - 1)
	{
		if (j == 0)
			ft_putchar('A');
		else if (j == x - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else
	{
		if (j == 0 || j == x - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}
