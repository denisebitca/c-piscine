/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 08:24:43 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/22 09:17:06 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_char_in_array(char c, char *charset)
{
	int	i;

	i = -1;
	while (charset[++i])
		if (c == charset[i])
			return (1);
	return (0);
}

/*
 *
 * info[0] - word count
 * info[1] - start bool
 * info[2] - end bool
 * 
*/
int	ft_word_counter(char *charset, char *str)
{
	int		info[3];
	int		i;

	i = -1;
	while (++i < 3)
		info[i] = 0;
	i = -1;
	while (str[++i])
	{
		if (!ft_char_in_array(str[i], charset))
		{
			if (i == 0 || ft_char_in_array(str[i - 1], charset))
				info[1] = 1;
			if (!(str[i + 1]) || ft_char_in_array(str[i + 1], charset))
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

void	ft_write_word(char **ret, int *info, char *str, int curpos)
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
void	ft_alloc_mem(char **ret, char *charset, char *str)
{
	int		info[4];
	int		i;

	i = -1;
	while (++i < 4)
		info[i] = 0;
	i = -1;
	while (str[++i])
	{
		if (!ft_char_in_array(str[i], charset))
		{
			if (i == 0 || ft_char_in_array(str[i - 1], charset))
				info[1] = 1;
			if (!(str[i + 1]) || ft_char_in_array(str[i + 1], charset))
				info[2] = 1;
			info[0] += 1;
		}
		if (info[1] && info[2])
		{
			ret[info[3]] = malloc(sizeof(char) * (info[0] + 1));
			ft_write_word(ret, info, str, i);
		}
	}
	ret[info[3]] = 0;
}

char	**ft_split(char *str, char *charset)
{
	char	**ret;

	ret = malloc(sizeof(char *) * (ft_word_counter(charset, str) + 1));
	if (ret == NULL)
		return (ret);
	ft_alloc_mem(ret, charset, str);
	return (ret);
}
