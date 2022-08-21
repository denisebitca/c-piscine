/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 11:47:09 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/21 11:30:02 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "rush.h"

int	ft_process_rush_tab(int *tab)
{
	int	i;

	i = 0;
	if (tab[i] == -1)
		return (0);
	while (i < 4)
	{
		if ((tab[i] == 1 || tab[i] == 3) && tab[i] == tab[i + 4])
			return (0);
		if ((tab[i] == 2 || tab[i] == 3) && tab[i + 4] == 4)
			return (0);
		i++;
	}
	i = 8;
	while (i < 12)
	{
		if ((tab[i] == 1 || tab[i] == 3) && tab[i] == tab[i + 4])
			return (0);
		if ((tab[i] == 2 || tab[i] == 3) && tab[i + 4] == 4)
			return (0);
		i++;
	}
	return (1);
}

void	ft_print_4x4_tab(int **tab)
{
	int		i;
	int		j;
	char	c;

	i = -1;
	while (++i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = (tab[i][j++] + '0');
			write(1, &c, 1);
			write(1, "\t", 1);
		}
		write(1, "\n", 1);
	}
}

void	rush(int **exterior, int **interior)
{
	ft_print_4x4_tab(exterior);
	write(1, "\n", 1);
	ft_print_4x4_tab(interior);
}

void	ft_populate(int **exterior, int **interior, int *tab)
{
	int	j;
	int	i;

	j = -1;
	i = 0;
	while (i < 4)
	{
		exterior[i] = malloc(sizeof(int) * 4);
		interior[i] = malloc(sizeof(int) * 4);
		i++;
	}
	i = 0;
	while (i < 16)
	{
		if (i % 4 == 0)
			j++;
		exterior[j][i % 4] = tab[i];
		interior[j][i % 4] = 0;
		i++;
	}
	rush(exterior, interior);
}

int	main(int ac, char **av)
{
	int	*exterior[4];
	int	*interior[4];
	int	tab[16];

	if (ac == 2)
	{
		ft_split_rush_str(av[1], tab);
		if (tab[0] != -1)
		{
			if (ft_process_rush_tab(tab))
			{
				ft_populate(exterior, interior, tab);
				ac = 0;
				while (ac < 4)
				{
					free(exterior[ac]);
					free(interior[ac++]);
				}	
			}
			else
				write(1, "Error\n", 6);
			return (0);
		}
	}
	write(1, "Error\n", 6);
}
