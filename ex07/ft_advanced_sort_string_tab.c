/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 08:45:34 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/26 12:01:20 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char*))
{
	int		j;
	int		size;
	char	*t;

	size = 0;
	while (tab[++size] != 0)
		;
	while (size > 1)
	{
		j = -1;
		while (++j < size - 1)
		{
			if (cmp(tab[j], tab[j + 1]) > 0)
			{
				t = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = t;
			}
		}
		size--;
	}
}
