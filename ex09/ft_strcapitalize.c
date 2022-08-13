/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:37:14 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/13 16:29:35 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isletter(char c);
int	ft_isnumber(char c);	

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && ft_isletter(str[i]) == 2)
			str[i] = str[i] - 'a' + 'A';
		else if (ft_isletter(str[i]))
		{
			if (!ft_isletter(str[i - 1]) && !ft_isnumber(str[i - 1]))
			{
				if (ft_isletter(str[i]) == 2)
					str[i] = str[i] - 'a' + 'A';
			}
			else
			{
				if (ft_isletter(str[i]) == 1)
					str[i] = str[i] - 'A' + 'a';
			}
		}
		i++;
	}
	return (str);
}

int	ft_isletter(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (2);
	return (0);
}

int	ft_isnumber(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
