/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 10:46:04 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/30 10:29:22 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

typedef struct s_coords
{
	int	x;
	int	y;
}				t_coords;

typedef struct s_map
{
	char		empty;
	char		obstacle;
	char		full;
	t_coords	dimensions;
	int			*heat_map;
}				t_map;

#endif //MAP_H
