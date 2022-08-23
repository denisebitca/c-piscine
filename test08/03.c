/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:43:27 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/23 11:46:37 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../08/ex03/ft_point.h"
#include <unistd.h>

void set_point(t_point *point)
{
	point->x = 42;
	point->y = 32;
}
		
int	main(void)
{
	t_point	point;
				
	set_point(&point);
	write(1, &point.x, 1);
	write(1, &point.y, 1);
	return (0);
}
