/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_handling.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 11:41:45 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/29 15:51:34 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_HANDLING_H
# define MAP_HANDLING_H

# include "map.h"

int		map_parser(const char *contents, t_map *map);
int		map_printer(t_map map, t_coords tlcorner, int size, char **char_map);
void	fill_int_tab_helper(const char **lines, int i, int y, t_map *map);
char	**splitter(const char *str);
int		atoin(const char *str, int size);

#endif //MAP_HANDLING_H
