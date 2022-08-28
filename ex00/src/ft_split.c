/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopenas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 15:54:33 by dopenas-          #+#    #+#             */
/*   Updated: 2022/08/28 16:43:06 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	char_in_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_word(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (char_in_charset(str[i], charset) == 1 && str[i])
			i++;
		if (char_in_charset(str[i], charset) == 0 && str[i])
		{
			count++;
			while (char_in_charset(str[i], charset) == 0 && str[i])
				i++;
		}
	}
	return (count);
}

char	*get_word(char *str, char *charset, int *index)
{
	int		i;
	int		len;
	char	*res;

	i = 0;
	len = 0;
	while (char_in_charset(str[(*index)], charset) == 1 && str[(*index)])
		(*index)++;
	while (char_in_charset(str[(*index) + len], charset) == 0
		&& str[(*index) + len])
		len++;
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	while (i < len)
	{
		res[i] = str[(*index)];
		i++;
		(*index)++;
	}
	res[i] = '\0';
	return (res);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**res;
	int		len;

	res = malloc(sizeof(char *) * (count_word(str, charset) + 1));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	len = count_word(str, charset);
	while (i < len)
	{
		res[i] = get_word(str, charset, &j);
		i++;
	}
	res[i] = NULL;
	return (res);
}
