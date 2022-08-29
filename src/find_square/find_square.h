/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_square.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aronez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:47:15 by aronez            #+#    #+#             */
/*   Updated: 2022/08/29 13:47:15 by aronez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIND_SQUARE_H
# define FIND_SQUARE_H

# include "src/map.h"

int	find_largest_square(t_map map, t_coords *tl_corner, int *square_size);

#endif //FIND_SQUARE_H
