/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_square.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aronez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:04:27 by aronez            #+#    #+#             */
/*   Updated: 2022/08/29 16:04:27 by aronez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/map.h"

int	min(int a, int b, int c)
{
	if (a <= b)
	{
		if (a <= c)
			return (a);
		else
			return (c);
	}
	else
	{
		if (a <= c)
			return (c);
		else
			return (a);
	}
}

int	find_largest_square(t_map map, t_coords *tl_corner, int *square_size)
{
	int	i;
	int	j;
	int *cell;

	i = -1;
	while (++i < map.dimensions.x)
	{
		j = -1;
		while (++j < map.dimensions.y)
		{
			cell = &map.heat_map[(i + 1) + (j + 1) * (map.dimensions.x + 2)];
			if (*cell != -1)
			{
				*cell = 1 + min(
						map.heat_map[(i + 0) + (j + 0) * (map.dimensions.x + 2)],
						map.heat_map[(i + 0) + (j + 1) * (map.dimensions.x + 2)],
						map.heat_map[(i + 1) + (j + 0) * (map.dimensions.x + 2)]
				);
			}
		}
	}
	
	*square_size = 0;
	i = -1;
	while (++i < map.dimensions.x)
	{
		j = -1;
		while (++j < map.dimensions.y)
		{
			cell = &map.heat_map[(i + 1) + (j + 1) * (map.dimensions.x + 2)];
			if (*cell >= *square_size)
			{
				*square_size = *cell + 1;
				tl_corner->x = i - (*square_size - 1);
				tl_corner->y = j - (*square_size - 1);
			}
		}
	}
	
	if (*square_size == 0)
		return (-1);
	return (0);
}
