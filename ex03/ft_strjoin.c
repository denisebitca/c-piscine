/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 10:33:54 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/19 12:13:27 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_sizeall_strs(int size, char **strs, char *sep)
{
	int	sepsize;
	int	i;
	int	j;
	int	fullsize;

	if (size <= 0)
		return (0);
	sepsize = 0;
	i = -1;
	j = 0;
	fullsize = 0;
	while (sep[sepsize++])
		;
	while (++i < size)
	{
		while (strs[i][j++])
			;
		fullsize += j;
		j = 0;
	}
	return (fullsize + (sepsize * (size - 1)));
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*finalstr;
	int		i;
	int		j;
	int		cur;

	i = -1;
	j = -1;
	cur = 0;
	finalstr = malloc(sizeof(char) * (ft_sizeall_strs(size, strs, sep) + 1));
	if (finalstr == NULL || size <= 0)
		return (finalstr);
	while (++i < size)
	{
		while (strs[i][++j])
			finalstr[cur++] = strs[i][j];
		j = -1;
		while (sep[++j] && i < (size - 1))
			finalstr[cur++] = sep[j];
		j = -1;
	}
	finalstr[cur] = '\0';
	return (finalstr);
}
