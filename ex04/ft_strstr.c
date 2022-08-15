/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:23:21 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/15 10:41:06 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

char	*ft_strstr(char *str, char *to_find)
{
	int		cmp;
	char	*ptr;
	int		i;
	int		j;

	cmp = 0;
	i = 0;
	j = 0;
	ptr = str;
	if (!ft_strlen(to_find))
		return (str);
	while (str[i])
	{
		if (cmp == ft_strlen(to_find))
		{
			while (j++ < (i + 1 - ft_strlen(to_find)))
				ptr = &(*str++);
			return (ptr);
		}
		if (str[i++] == to_find[cmp])
			cmp++;
		else
			cmp = 0;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
