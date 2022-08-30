/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_handling.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 11:41:45 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/29 16:39:17 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_HANDLING_H
# define MAP_HANDLING_H

# include "src/map.h"

int		map_parser(const char *contents, t_map *map);
int		map_printer(t_map map, t_coords tlcorner, int size, char **char_map);
int		fill_int_tab(const char **lines, t_map *map);
char	**splitter(const char *str);
int		atoin(const char *str, int size);
int		count_newlines(const char *str);
int		check_dupes(const char *str, int start, int end);

#endif //MAP_HANDLING_H
