/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_parser.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 10:58:02 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/29 16:40:39 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "src/libft/libft.h"
#include "src/map.h"
#include "map_handling.h"

int	chars_in_map_charset(const char *s, t_map *map)
{
	int	i;

	i = -1;
	while (s[++i])
		if (s[i] != map->empty && s[i] != map->obstacle)
			return (0);
	return (1);
}

int	parse_all_lines(int lnum, const char **lines, t_map *map)
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
	if (len < 4 || len > 13)
		return (0);
	if (fline[i] < '0' || fline[i] > '9')
		return (0);
	while (fline[i] >= '0' && fline[i] <= '9' && i < (len - 3))
		i++;
	if (i != (len - 3))
		return (0);
	rlnum = atoin(fline, i);
	if (rlnum < 0)
		return (0);
	if (!check_dupes(fline, i, len))
		return (0);
	map->empty = fline[i++];
	map->obstacle = fline[i++];
	map->full = fline[i];
	return (rlnum);
}

int		free_lines(const char **lines)
{
	int	i;

	i = -1;
	while (lines[++i])
		free((void *) lines[i]);
	free(lines);
	return (-1);
}

int	map_parser(const char *contents, t_map *map)
{
	int			lnum;
	int			rlnum;
	const char	**lines;

	lines = (const char **) splitter(contents);
	lnum = -1;
	while (lines[++lnum])
		;
	if (lnum != count_newlines(contents))
		return (free_lines(lines));
	if (--lnum < 1)
		return (free_lines(lines));
	rlnum = parse_first_line(lines[0], map);
	if (!rlnum || lnum != rlnum)
		return (free_lines(lines));
	if (!parse_all_lines(lnum, lines, map))
		return (free_lines(lines));
	if (!fill_int_tab(lines, map))
		return (free_lines(lines));
	free_lines(lines);
	return (0);
}
