/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:08:32 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/18 09:50:08 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

char	**ft_sort_char_tab(char **tab, int size)
{
	int		i;
	int		j;
	char	*t;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
			{
				t = tab[i];
				tab[i] = tab[j];
				tab[j] = t;
			}
			j++;
		}
		i++;
	}
	return (tab);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	j = 0;
	if (ac > 2)
	{
		av = &(av[1]);
		av = ft_sort_char_tab(av, ac - 1);
		i = -1;
		while (++i < (ac - 1))
		{
			while (av[i][j])
				write(1, &av[i][j++], 1);
			write(1, "\n", 1);
			j = 0;
		}
	}
	else if (ac == 2)
	{
		while (av[1][j])
			write(1, &av[1][j++], 1);
		write(1, "\n", 1);
	}
	return (0);
}
