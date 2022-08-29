/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_printer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aronez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:06:15 by aronez            #+#    #+#             */
/*   Updated: 2022/08/29 17:21:48 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/map.h"

int	map_printer(t_map map, t_coords tlcorner, int size, char **char_map)
{
	int	x;
	int	y;
	int	i;
	int	j;
	int	pos;

	x = map.dimensions.x;
	y = map.dimensions.y;
	i = 1;
	j = 1;
	*char_map = malloc(sizeof(char) * (x + 1) * (y + 1));
	if ((*char_map) == NULL)
		return (-1);
	return (0);
}
