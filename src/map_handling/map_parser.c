/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_parser.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 10:58:02 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/29 11:45:40 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "map.h"


int parse_first_line(const char *fline, t_map *map)
{
	int	len;

	len = ft_strlen(fline);

}

int	map_parser(const char *contents, t_map *map)
{
	int			lnum;
	const char 	**lines;

	lines = ft_split(contents, "\n");
	lnum = ft_strslen(lines);
	if (lnum < 2)
		return (-1);
	if(!parse_first_line(lines[0], map))
		return (-1);
	if(!parse_all_lines(lnum - 1, lines))
		return (-1);
	
	return (0);
}
