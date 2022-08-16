/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:23:21 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/16 14:50:28 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		cmp;
	int		i;

	cmp = 0;
	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[cmp])
			cmp++;
		else
			cmp = 0;
		if (to_find[cmp] == '\0')
			return (&str[i - cmp + 1]);
		i++;
	}
	return (0);
}
