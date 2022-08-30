/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   splitter.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 08:24:43 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/29 15:51:10 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
 *
 * info[0] - word count
 * info[1] - start bool
 * info[2] - end bool
 * 
*/
int	word_counter(const char *str)
{
	int		info[3];
	int		i;

	i = -1;
	while (++i < 3)
		info[i] = 0;
	i = -1;
	while (str[++i])
	{
		if (str[i] != '\n')
		{
			if (i == 0 || str[i - 1] == '\n')
				info[1] = 1;
			if (!(str[i + 1]) || str[i + 1] == '\n')
				info[2] = 1;
		}
		if (info[1] && info[2])
		{
			info[0] += 1;
			info[1] = 0;
			info[2] = 0;
		}
	}
	return (info[0]);
}

int	write_word(char **ret, int *info, const char *str, int curpos)
{
	int	i;
	int	j;

	if (ret[info[3]] == NULL)
		return (0);
	i = curpos - info[0] + 1;
	j = 0;
	while (i <= curpos)
		ret[info[3]][j++] = str[i++];
	ret[info[3]++][j] = '\0';
	info[0] = 0;
	info[1] = 0;
	info[2] = 0;
	return (1);
}

/*
 *
 * info[0] - word size
 * info[1] - start bool
 * info[2] - end bool
 * info[3] - current space
 * 
*/
int	alloc_mem(char **ret, const char *str)
{
	int		info[4];
	int		i;

	i = -1;
	while (++i < 4)
		info[i] = 0;
	i = -1;
	while (str[++i])
	{
		if (str[i] != '\n')
		{
			if (i == 0 || str[i - 1] == '\n')
				info[1] = 1;
			if (!(str[i + 1]) || str[i + 1] == '\n')
				info[2] = 1;
			info[0] += 1;
		}
		if (info[1] && info[2])
		{
			ret[info[3]] = malloc(sizeof(char) * (info[0] + 1));
			if (!write_word(ret, info, str, i))
				return (0);
		}
	}
	return (1);
}

char	**splitter(const char *str)
{
	char	**ret;
	int		wc;
	int		i;

	i = -1;
	wc = word_counter(str) + 1;
	ret = malloc(sizeof(char *) * wc);
	while (++i < wc)
		ret[i] = 0;
	if (ret == NULL)
		return (ret);
	if (!alloc_mem(ret, str))
	{
		i = -1;
		while (ret[++i] != NULL)
			free(ret[i]);
		free(ret);
		return (NULL);
	}
	return (ret);
}
