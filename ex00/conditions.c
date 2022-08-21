/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conditions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:24:44 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/21 16:17:33 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	verif_left_line(int *tab, int lcon)
{
	int	i;
	int	visbat;
	int	batplusgrand;

	batplusgrand = 0;
	i = -1;
	visbat = 0;
	if (tab[0] == 4)
		return (lcon == 1);
	while (++i < 4)
	{
		if (tab[i] == 4)
		{
			visbat++;
			break ;
		}
		else if (tab[i] > batplusgrand)
		{
			batplusgrand = tab[i];
			visbat++;
		}
	}
	return (lcon == visbat);
}

int	verif_right_line(int *tab, int rcon)
{
	int	i;
	int	visbat;
	int	batplusgrand;

	batplusgrand = 0;
	i = 5;
	visbat = 0;
	if (tab[3] == 4)
		return (rcon == 1);
	while (--i > -1)
	{
		if (tab[i] == 4)
		{
			visbat++;
			break ;
		}
		else if (tab[i] > batplusgrand)
		{
			batplusgrand = tab[i];
			visbat++;
		}
	}
	return (rcon == visbat);
}

int	verif_up_line(int **tab, int pos, int tcon)
{
	int	i;
	int	visbat;
	int	batplusgrand;

	batplusgrand = 0;
	i = -1;
	visbat = 0;
	if (tab[0][pos] == 4)
		return (tcon == 1);
	while (++i < 4)
	{
		if (tab[i][pos] == 4)
		{
			visbat++;
			break ;
		}
		else if (tab[i][pos] > batplusgrand)
		{
			batplusgrand = tab[i][pos];
			visbat++;
		}
	}
	return (tcon == visbat);
}

int	verif_down_line(int **tab, int pos, int bcon)
{
	int	i;
	int	visbat;
	int	batplusgrand;

	batplusgrand = 0;
	i = 5;
	visbat = 0;
	if (tab[3][pos] == 4)
		return (bcon == 1);
	while (--i > -1)
	{
		if (tab[i][pos] == 4)
		{
			visbat++;
			break ;
		}
		else if (tab[i][pos] > batplusgrand)
		{
			batplusgrand = tab[i][pos];
			visbat++;
		}
	}
	return (bcon == visbat);
}
