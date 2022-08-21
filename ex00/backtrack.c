/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:35:29 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/21 18:39:52 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	presolve_up(int **i, int **e)
{
	int	k;

	k = -1;
	while (++k < 4)
	{
		if (e[0][k] == 4)
		{
			i[0][k] = 1;
			i[1][k] = 2;
			i[2][k] = 3;
			i[3][k] = 4;
		}
		else if (e[0][k] == 1)
			i[0][k] = 4;
	}
}

void	presolve_down(int **i, int **e)
{
	int	k;

	k = -1;
	while (++k < 4)
	{
		if (e[1][k] == 4)
		{
			i[3][k] = 1;
			i[2][k] = 2;
			i[1][k] = 3;
			i[0][k] = 4;
		}
		else if (e[1][k] == 1)
			i[3][k] = 4;
	}
}

void	presolve_left(int **i, int **e)
{
	int	k;

	k = -1;
	while (++k < 4)
	{
		if (e[2][k] == 4)
		{
			i[k][0] = 1;
			i[k][1] = 2;
			i[k][2] = 3;
			i[k][3] = 4;
		}
		else if (e[2][k] == 1)
			i[k][0] = 4;
	}
}

void	presolve_right(int **i, int **e)
{
	int	k;

	k = -1;
	while (++k < 4)
	{
		if (e[3][k] == 4)
		{
			i[k][3] = 1;
			i[k][2] = 2;
			i[k][1] = 3;
			i[k][0] = 4;
		}
		else if (e[3][k] == 1)
			i[k][3] = 4;
	}
}

int	backtrack(int **i, int **e, int r, int c)
{
	int		next;
	int		**p[2];

	p[0] = i;
	p[1] = e;
	next = 0;
	if (r == 5)
		return (1);
	if (i[r][c] && c == 4)
		return (backtrack(i, e, r + 1, 0));
	else if (i[r][c])
		return (backtrack(i, e, r, c + 1));
	while (++next < 5)
	{
		if (validation(next, p, r, c))
		{
			i[r][c] = next;
			if (c == 4)
				return (backtrack(i, e, r + 1, 0));
			i[r][c] = 0;
			return (backtrack(i, e, r, c + 1));
		}
	}
	return (0);
}
