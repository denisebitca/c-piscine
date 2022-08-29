/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_handling.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 11:41:45 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/29 11:45:24 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_HANDLING_H
# define MAP_HANDLING_H

# include "src/map.h"

int	map_parser(const char *contents, t_map *map);
int	map_printer(t_map *map, t_coords tlcorner, int size, char *char_map);

#endif //MAP_HANDLING_H
