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

#include <stdio.h>
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
		if (b <= c)
			return (b);
		else
			return (c);
	}
}

void	compute_cell_value(int *heat_map, int line_length, int i, int j)
{
	int	*cell;
	int	upper_cell;
	int	upper_left_cell;
	int	left_cell;

	cell = &heat_map[(i + 1) * (line_length + 2) + (j + 1)];
	if (*cell != -1)
	{
		upper_cell = heat_map[(i + 0) * (line_length + 2) + (j + 1)];
		upper_left_cell = heat_map[(i + 0) * (line_length + 2) + (j + 0)];
		left_cell = heat_map[(i + 1) * (line_length + 2) + (j + 0)];
		*cell = min(upper_cell, upper_left_cell, left_cell) + 1;
	}
}

t_coords	find_max_value_pos(
		const int *heat_map,
		int line_length,
		int line_count
		)
{
	int			i;
	int			j;
	int			cell_value;
	int			max_value;
	t_coords	max_pos;

	max_value = -1;
	i = -1;
	while (++i < line_count)
	{
		j = -1;
		while (++j < line_length)
		{
			cell_value = heat_map[(i + 1) * (line_length + 2) + (j + 1)];
			if (cell_value > max_value)
			{
				max_value = cell_value;
				max_pos = (t_coords){.x = j, .y = i};
			}
		}
	}
	return (max_pos);
}

int	find_largest_square(t_map map, t_coords *tl_corner, int *square_size)
{
	int	i;
	int	j;

	i = -1;
	while (++i < map.dimensions.y)
	{
		j = -1;
		while (++j < map.dimensions.x)
			compute_cell_value(map.heat_map, map.dimensions.x, i, j);
	}
	*tl_corner = find_max_value_pos(
			map.heat_map,
			map.dimensions.x,
			map.dimensions.y
			);
	*square_size = map.heat_map[
		(tl_corner->y + 1) * (map.dimensions.x + 2) + (tl_corner->x + 1)
	] + 1;
	tl_corner->x -= *square_size - 1;
	tl_corner->y -= *square_size - 1;
	if (*square_size == 0)
		return (-1);
	return (0);
}
