/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 08:45:34 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/25 08:53:09 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	**ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char*))
{
	int		i;
	int		j;
	char	*t;

	i = 0;
	while (tab[i] != 0)
	{
		j = i + 1;
		while (tab[j] != 0)
		{
			if (cmp(tab[i], tab[j]) > 0)
			{
				t = tab[i];
				tab[i] = tab[j];
				tab[j] = t;
			}
			j++;
		}
		i++;
	}
}
