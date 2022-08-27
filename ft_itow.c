/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itow.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 20:06:17 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/27 23:02:03 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "num.h"
#include "list.h"
#include <stdlib.h>

char	*ft_find_elem_parse(t_list *list, int magnitude)
{
	return (NULL);
}

int	ft_check(unsigned int val, unsigned int m, t_list *list)
{
	if (val / 100 != 0)
	{
		if (!ft_find_elem_parse(list, val / 100))
			return (0);
		if (!ft_find_elem_parse(list, 100))
			return (0);
	}
	if (val % 100 >= 20)
	{
		if (!ft_find_elem_parse(list, (val % 100) - (val % 10)))
			return (0);
		if (val % 10 > 0 && !ft_find_elem_parse(list, val % 10))
			return (0);
	}
	else if (val % 100 > 0 && !ft_find_elem_parse(list, val % 100))
			return (0);
	if (m != 1 && !ft_find_elem_parse(list, magnitude))
			return (0);
	return (1);
}

int	ft_check_itow(unsigned int nb, t_list *list)
{
	unsigned int	val;
	unsigned int	magnitude;

	magnitude = 1000000000;

	while (magnitude && nb)
	{
		val = nb / magnitude;
		if (val)
		{
			nb = nb % magnitude;
			if (!ft_check_itow(val, magnitude, list))
				return (0);			
		}
		magnitude /= 1000;
	}
	return (1);
}

void	ft_itow_helper(unsigned int val, unsigned int m, t_list *list)
{
	if (val / 100 != 0)
	{
		ft_putstr(ft_find_elem_parse(list, val / 100));
		//space
		ft_putstr(ft_find_elem_parse(list, 100));
	}
	if (val % 100 >= 20)
	{
		ft_putstr(ft_find_elem_parse(list, (val % 100) - (val % 10)));
		if (val % 10 > 0)
			//space
			ft_putstr(ft_find_elem_parse(list, val % 10));
	}
	else if (val % 100 > 0)
		//space
		ft_putstr(ft_find_elem_parse(list, val % 100));
	if (m != 1)
		//space
		ft_find_elem_parse(list, m);
}

int	ft_itow(unsigned int nb, t_list *list)
{
	unsigned int	val;
	unsigned int	magnitude;

	magnitude = 1000000000;

	while (magnitude && nb)
	{
		val = nb / magnitude;
		if (val)
		{
			nb = nb % magnitude;
			ft_itow_helper(val, magnitude, list);
		}
		magnitude /= 1000;
	}
	return (1);
}
