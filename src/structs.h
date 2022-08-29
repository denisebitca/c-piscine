/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 10:46:04 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/29 10:51:52 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

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
	t_coords	*obstacles;
}				t_map;

#endif
