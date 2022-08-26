/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 11:04:49 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/26 11:27:31 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *));

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while(s1[i] || s2[i])
	{
		if(s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	ft_strlencmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;

	while (s1[i++])
		;
	while (s2[j++])
		;
	if(i != j)
		return (i - j);
	return (0);
}

int	main(void)
{
	char *tab[10];

	tab[0] = "j2MI73a1VqJ";
	tab[1] = "3N6FTSG";
	tab[2] = "BuUbwON"; 
	tab[3] = "EimlXb";
	tab[4] = "6";
	tab[5] = "Uag";
	tab[6] = "yciW";
	tab[7] = "5NLmMtu";
	tab[8] = "WfB9";
	tab[9] = 0;
	
	ft_advanced_sort_string_tab(tab, &ft_strlencmp);

	int i = 0;
	printf("tab start\n");
	while (i < 9)
		printf("%s\n", tab[i++]);
	printf("tab end\n");

	ft_advanced_sort_string_tab(tab, &ft_strcmp);
	
	i = 0;
	printf("tab start\n");
	while (i < 9)
		printf("%s\n", tab[i++]);
	printf("tab end\n");
}
