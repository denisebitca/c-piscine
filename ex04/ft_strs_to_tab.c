/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:07:24 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/22 19:49:34 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

char	*ft_strdup(char *src)
{
	char	*duplicate;
	int		srcsize;
	int		i;

	srcsize = 1;
	i = -1;
	while (src[((srcsize++)) - 1])
		;
	duplicate = malloc(sizeof(char) * srcsize);
	if (duplicate == NULL)
		return (NULL);
	while (src[++i])
		duplicate[i] = src[i];
	duplicate[i] = '\0';
	return (duplicate);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	int			j;
	t_stock_str	*ret;

	ret = malloc(sizeof(t_stock_str) * (ac + 1));
	if (ret == NULL)
		return (ret);
	i = -1;
	j = 0;
	while (++i < ac)
	{
		j = 0;
		while (av[i][j++])
			;
		ret[i] = (t_stock_str){j, av[i], ft_strdup(av[i])};
	}
	ret[i] = (t_stock_str){0, 0, 0};
	return (ret);
}
