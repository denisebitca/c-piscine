/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dupes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:34:45 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/29 16:38:52 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_dupes(const char *str, int start, int end)
{
	int	i;
	int	j;

	i = start;
	while (i < end - 1)
	{
		j = i;
		while (++j < end)
			if (str[i] == str[j])
				return (0);
		i++;
	}
	return (1);
}
