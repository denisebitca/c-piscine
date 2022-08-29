/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_int_tab_helper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:54:32 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/29 15:48:24 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

void	fill_int_tab_helper(const char **lines, int i, int y, t_map *map)
{
	int	x;

	while (++i < map->dimensions.x)
		map->heat_map[i] = -1;
	while (lines[++y])
	{
		x = -1;
		map->heat_map[i++] = -1;
		while (lines[y][++x])
		{
			if (lines[y][x] == map->empty)
				map->heat_map[i++] = 0;
			else
				map->heat_map[i++] = -1;
		}
		map->heat_map[i++] = -1;
	}
	while (i < x)
		map->heat_map[i++] = -1;
}
