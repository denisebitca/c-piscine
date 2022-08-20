/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_rush_str.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-rom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 18:20:45 by aben-rom          #+#    #+#             */
/*   Updated: 2022/08/20 21:24:50 by aben-rom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	size(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_check_char(char c)
{
	if (c == ' ')
		return (1);
	if (c >= '1' && c <= '4')
		return (2);
	return (0);
}

void	adam()
{
	if (i == 0 || ft_check_char(str[i - 1]) == 1)
	{
		tab[j++] = ((int)(str[i] - '0'));
		continue ;
	}
	else
	{
		tab[0] = -1;
		return ;
	}
}

void	adam2()
{
	if (i == 0 || ft_check_char(str[i - 1]) == 1)
	{
		tab[j++] = ((int)(str[i] - '0'));
		continue ;
	}
	else
	{
		tab[0] = -1;
		return ;
	}
}

void	ft_split_rush_str(char *str, int *tab)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	if (size(str) != 31)
		tab[0] = -1;
	else
	{
		while (++i < 31)
		{
			if (ft_check_char(str[i]) == 2)
			{
				adam();
			}
			else if (ft_check_char(str[i]) == 1)
			{
				adam2();
			}
			else
			{
				tab[0] = -1;
				return ;
			}
		}
	}
}

int	main(int ac, char **av)
{
	int	*tab;
	int	i;

	tab = malloc(sizeof(int) * 16);
	i = 0;
	if (ac == 2)
	{
		ft_split_rush_str(av[1], tab);
		while (i < 16)
			printf("%i, ", tab[i++]);
		write(1, "\n", 1);
	}
	free(tab);
}
