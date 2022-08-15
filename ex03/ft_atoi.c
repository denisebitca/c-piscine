/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 11:47:52 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/15 12:15:55 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c);
int	*ft_strnbrlen(char *str, int *ret);
int	ft_pow(int exponent, int power);
int	ft_isnumber(char c);

int	ft_atoi(char *str)
{
	return (str[0]);
}

int	ft_pow(int exponent, int power)
{
	int	initial;

	initial = 1;
	while (power--)
		initial = initial * exponent;
	return (initial);
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
		if (ft_isspace(str[i]) && len == 0)
			continue ;
		if ((str[i] == '-' || str[i] == '+') && len == 0)
		{
			if (str[i] == '-')
				sign = sign * -1;
			continue ;
		}
		if (!ft_isnumber(str[i]))
			break ;
		len++;
	}	
	ret[0] = sign;
	ret[1] = i;
	ret[2] = len;
	return (ret);
}

int	ft_isnumber(char c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}
