/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 09:05:59 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/13 11:04:35 by rbitca           ###   ########.fr       */
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
 * If length is larger than 0 (ever heard of a rectangle that's 0 wide?)
 * 	For each row
 * 		For each column
 * 			Write the corresponding character to the current (x, y) point
 * 		Write a newline character
 * */

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (x > 0)
	{
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
 * If current row first:
 * 	If current column position first:
 * 		write the first corner character
 * 	If current column position first:
 * 		Write the second corner character
 * 	Otherwise
 * 		write the * character
 *If current row last:
 * 	If current column position first:
 *		write the third corner character
 *	If current column position last:
 *		write the fourt corner character
 * Otherwise
 * 	If current column position first or last
 * 		write the * character
 * 	Otherwise
 * 		write the space character 
 * */
void	ft_linepopulate(int x, int y, int i, int j)
{
	if (i == 0)
	{
		if (j == 0)
			ft_putchar('/');
		else if (j == x - 1)
			ft_putchar('\\');
		else
			ft_putchar('*');
	}
	else if (i == y - 1)
	{
		if (j == 0)
			ft_putchar('\\');
		else if (j == x - 1)
			ft_putchar('/');
		else
			ft_putchar('*');
	}
	else
	{
		if (j == 0 || j == x - 1)
			ft_putchar('*');
		else
			ft_putchar(' ');
	}
}
