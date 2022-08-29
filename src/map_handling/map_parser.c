/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_parser.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 10:58:02 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/29 15:10:26 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "map.h"
#include "map_handling.h"

int	fill_int_tab(char **lines, t_map *map)
{
	int	x;
	int	y;
	int	i;

	i = -1;
	x = map->dimensions->x;
	y = map->dimensions->y;
	map->heat_map = malloc(sizeof(int) * (x + 2) * (y + 2));
	if (map->heat_map == NULL)
		return (0);
	y = 0;
	fill_int_tab_helper(lines, i, y, map);
	return (1);
}

int	chars_in_map_charset(char *s, t_map *map)
{
	int	i;

	i = -1;
	while (s[++i])
		if (s[i] != map->empty && s[i] != map->obstacle)
			return (0);
	return (1);
}

int	parse_all_lines(int lnum, char **lines, t_map *map)
{
	int	i;
	int	toplsize;
	int	cursize;

	i = 1;
	toplsize = ft_strlen(lines[i]);
	if (toplsize < 1)
		return (0);
	if (!chars_in_map_charset(lines[i], map))
		return (0);
	while (++i <= lnum)
	{
		cursize = ft_strlen(lines[i]);
		if (toplsize != cursize)
			return (0);
		if (!chars_in_map_charset(lines[i], map))
			return (0);
	}
	map->dimensions = (t_coords){toplsize, lnum};
	return (1);
}

int	parse_first_line(const char *fline, t_map *map)
{
	int	len;
	int	rlnum;
	int	i;

	i = 0;
	len = ft_strlen(fline);
	if (len < 4)
		return (0);
	if (fline[i] < 0 || fline[i] > 9)
		return (0);
	while (fline[i] >= 0 && fline[i] <= 9 && i < (len - 3))
		i++;
	if (i != (len - 3))
		return (0);
	rlnum = ft_atoin(fline, i);
	if (rlnum < 0)
		return (0);
	map->empty = fline[i++];
	map->obstacle = fline[i++];
	map->full = fline[i];
	return (rlnum);
}

int	map_parser(const char *contents, t_map *map)
{
	int			lnum;
	int			rlnum;
	int			i;
	const char	**lines;

	i = 0;
	lines = ft_split(contents, "\n");
	lnum = -1;
	while (lines[++lnum])
		;
	if (--lnum < 1)
		return (-1);
	rlnum = parse_first_line(lines[0], map);
	if (!rlnum || lnum != rlnum)
		return (-1);
	if (!parse_all_lines(lnum, lines, map))
		return (-1);
	if (!fill_int_tab(map))
		return (-1);
	while (lines[++i])
		free(lines[i]);
	free(lines);
	return (0);
}
