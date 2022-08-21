/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:35:29 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/21 12:04:45 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	backtrack(int **i, int **e, int r, int c)
{
	int		next;
	int		***p[2];

	p[0] = i;
	p[1] = e;
	next = 0;
	if (row == 5)
		return (1);
	if (i[r][c])
	{
		if (c == 4)
		{
			if (backtrack(i, e, r + 1, 0))
				return (1);
		}
		else if (backtrack(i, e, r, c + 1))
			return (1);
		return (0);
	}
	while (++next < 5)
	{
		if (validation(next, pain, r, c))
		{
			i[r][c] = next;
			if (c == 4)
			{
				if (backtrack(i, e, r + 1, 0))
					return (1);
			}
			else if (backtrack(i, e, r, c + 1))
				return (1);
			i[r][c] = 0;
		}
	}
	return (0);
}
