/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:23:21 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/14 17:40:14 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

char	*ft_strstr(char *str, char *to_find)
{
	int		cmp;
	char	*ptr;
	int		needlesize;

	needlesize = ft_strlen(to_find);
	cmp = 0;
	while (*str)
	{
		if (cmp == needlesize)
			return (ptr);
		if (*str == to_find[cmp])
		{
			if (cmp == 0)
				*ptr = *str;
			cmp++;
		}
		else
			cmp = 0;
		*str++;
	}
	return (NULL);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
