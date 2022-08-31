/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_printer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aronez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:06:15 by aronez            #+#    #+#             */
/*   Updated: 2022/08/30 12:29:11 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/map.h"
#include <stdlib.h>

int	populate_square(t_map map, t_coords tlcorner, int size, char **char_map)
{
	int	curline;
	int	curcol;
	int	i;

	i = -1;
	curline = 0;
	curcol = 0;
	(*char_map)[(map.dimensions.x + 1) * map.dimensions.y] = '\0';
	while ((*char_map)[++i])
	{
		if ((*char_map)[i] == '\n')
		{
			curline++;
			continue ;
		}
		curcol = i % (map.dimensions.x + 1);
		if (curline >= tlcorner.y && curcol >= tlcorner.x)
			if (curline - tlcorner.y < (size) && curcol - tlcorner.x < (size))
				(*char_map)[i] = map.full;
	}
	return (0);
}

int	map_printer(t_map map, t_coords tlcorner, int size, char **char_map)
{
	int	x;
	int	i;
	int	pos;
	int	curline;

	x = map.dimensions.x;
	i = x + 2;
	pos = 0;
	curline = 1;
	*char_map = malloc(sizeof(char) * (x + 1) * map.dimensions.y + 1);
	if (*char_map == NULL)
		return (-1);
	while (++i < ((x + 2) * (map.dimensions.y + 1)))
	{
		if (map.heat_map[i] == -1 && curline == (i + 1) / (x + 2))
			(*char_map)[pos++] = map.obstacle;
		else if (curline == (i + 1) / (x + 2))
			(*char_map)[pos++] = map.empty;
		else if (curline != (i + 1) / (x + 2))
		{
			curline = (i++ + 1) / (x + 2);
			(*char_map)[pos++] = '\n';
		}
	}
	return (populate_square(map, tlcorner, size, char_map));
}
