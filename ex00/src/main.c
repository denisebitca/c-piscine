/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 23:17:57 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/28 09:36:08 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "itow.h"
#include <stdlib.h>

/*
	Readapted from dopenas-'s work
*/

int	main	(int ac, char **av)
{
	char			*nbr;
	unsigned int	num;
	char			*dict;
	t_list			*list;

	if (argc == 2)
	{
		nbr = argv[1];
		dict = "./dic/numbers.dict";
	}
	else if (argc == 3)
	{
		nbr = argv[2];
		dict = argv[1];
	}
	else
		return (1);
	list = NULL;
	if(!rush_parser(dict, &list))
	{
		ft_free_whole_list(&list);
		write(1, "Dict Error\n", 11);
		return (1);
	}
	num = ft_atoi(nbr);
	if(!ft_check_itow(num, list))
	{
		ft_free_whole_list(&list);
		write(1, "Dict Error\n", 11);
		return (1);
	}
	ft_itow(num, list);
	return (0);
}
