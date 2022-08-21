/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_rush_str.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-rom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 18:20:45 by aben-rom          #+#    #+#             */
/*   Updated: 2022/08/21 11:20:10 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "rush.h"

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

int	ft_check_split(int *j, int i, char *str, int *tab)
{
	str = (char *) str;
	if (ft_check_char(str[i]) == 2)
	{
		if (i == 0 || ft_check_char(str[i - 1]) == 1)
		{
			tab[*j] = ((int)(str[i] - '0'));
			*j += 1;
			return (1);
		}
	}
	else if (ft_check_char(str[i]) == 1)
	{
		if (i > 0 || ft_check_char(str[i - 1]) == 2)
			return (1);
	}
	tab[0] = -1;
	return (0);
}

void	ft_split_rush_str(char *str, int *tab)
{
	int	i;
	int	j;
	int	res;

	i = -1;
	j = 0;
	if (size(str) != 31)
		tab[0] = -1;
	else
	{
		while (++i < 31)
		{
			res = ft_check_split(&j, i, str, tab);
			if (res)
				continue ;
			else
				return ;
		}
	}
}
