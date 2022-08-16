/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 11:47:52 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/15 14:30:33 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isspace(char c);
int	*ft_strnbrlen(char *str, int *ret);
int	ft_checkchar(char *str, int i, int *sign, int *len);
int	ft_strcmp(char *s1, char *s2);

int	ft_atoi(char *str)
{
	int	strinfo[3];
	int	i;
	int	multiplier;
	int	ret;

	multiplier = 1;
	if (ft_strcmp(str, "-2147483648") == 0)
		return (-2147483648);
	else
	{
		ft_strnbrlen(str, strinfo);
		if (strinfo[2] == 0)
			return (0);
		i = strinfo[1] - strinfo[2];
		while (--strinfo[2])
			multiplier = multiplier * 10;
		ret = 0;
		while (i < strinfo[1] - 1)
		{
			ret = ret + ((str[i++] - '0') * multiplier);
			multiplier = multiplier / 10;
		}
		ret = ret + (str[i] - '0');
	}
	return (ret * strinfo[0]);
}

int	ft_checkchar(char *str, int i, int *sign, int *len)
{
	if (ft_isspace(str[i]) && *len == 0)
	{
		if (i > 0)
		{
			if (ft_isspace(str[i - 1]))
				return (1);
			else
				return (0);
		}
		return (1);
	}
	if ((str[i] == '-' || str[i] == '+') && *len == 0)
	{
		if (str[i] == '-')
			*sign = *sign * -1;
		return (1);
	}
	if (str[i] < '0' || str[i] > '9')
		return (0);
	*len = *len + 1;
	return (1);
}

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n')
		return (1);
	if (c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

int	*ft_strnbrlen(char *str, int *ret)
{
	int	i;
	int	len;
	int	sign;

	i = -1;
	len = 0;
	sign = 1;
	while (str[++i] != '\0')
	{
		if (ft_checkchar(str, i, &sign, &len))
			continue ;
		else
			break ;
	}	
	ret[0] = sign;
	ret[1] = i;
	ret[2] = len;
	return (ret);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
