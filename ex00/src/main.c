/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopenas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 23:17:57 by dopenas-          #+#    #+#             */
/*   Updated: 2022/08/28 16:42:29 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "itow.h"
#include "libft.h"
#include "parser.h"
#include <stdlib.h>
#include <unistd.h>

int	main	(int ac, char **av)
{
	char			*nbr;
	unsigned int	num;
	int				i;
	char			*dict;
	t_list			*list;

	i = 0;
	if (ac == 2)
	{
		nbr = av[1];
		dict = "./dic/numbers.dict";
	}
	else if (ac == 3)
	{
		nbr = av[2];
		dict = av[1];
	}
	else
		return (1);
	list = NULL;
	ac = rush_parser(dict, &list, i);
	if(ac <= 0)
	{
		ft_free_whole_list(&list);
		write(1, "Dict Error\n", 11);
		return (1);
	}
	if (ft_atoi(nbr) > 0)
		num = (unsigned int) ft_atoi(nbr);
	else
	{
		ft_free_whole_list(&list);
		write(1, "Error\n", 6);
		return (1);
	}
	if(!ft_check_itow(num, list))
	{
		ft_free_whole_list(&list);
		write(1, "Dict Error\n", 11);
		return (1);
	}
	ft_itow(num, list);
	return (0);
}
