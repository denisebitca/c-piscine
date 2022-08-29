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

void	write_word(char **ret, int *info, const char *str, int curpos)
{
	int	i;
	int	j;

	i = curpos - info[0] + 1;
	j = 0;
	while (i <= curpos)
		ret[info[3]][j++] = str[i++];
	ret[info[3]++][j] = '\0';
	info[0] = 0;
	info[1] = 0;
	info[2] = 0;
}

/*
 *
 * info[0] - word size
 * info[1] - start bool
 * info[2] - end bool
 * info[3] - current space
 * 
*/
void	alloc_mem(char **ret, const char *str)
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
			write_word(ret, info, str, i);
		}
	}
	ret[info[3]] = 0;
}

char	**splitter(const char *str)
{
	char	**ret;

	ret = malloc(sizeof(char *) * (word_counter(str) + 1));
	if (ret == NULL)
		return (ret);
	alloc_mem(ret, str);
	return (ret);
}
