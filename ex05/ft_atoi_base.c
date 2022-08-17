/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 11:40:03 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/17 08:57:01 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_checkbase(char *str)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j++])
				return (0);
		}
		if (str[i] == ' ' || str[i] == '+' || str[i] == '-'
			|| (str[i] >= 9 && str[i] <= 13))
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}

int	ft_set_good_start(int *sign, char **str, char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (((*str)[i] >= 9 && (*str)[i] <= 13) || (*str)[i] == ' ')
		i++;
	while ((*str)[i] == '-' || (*str)[i] == '+')
		if ((*str)[i++] == '-')
			*sign = -(*sign);
	(*str) = &((*str)[i]);
	i = -1;
	while ((*str)[++i])
	{
		j = 0;
		while (base[j] != '\0')
			if (base[j++] == (*str)[i])
				break ;
		if (base[j - 1] == (*str)[i])
			continue ;
		else
			break ;
	}
	return (i);
}

int	ft_pow(int exponent, int power)
{
	int	ret;

	ret = 1;
	while (--power)
		ret *= exponent;
	return (ret);
}

int	ft_why(int strlen, char *str, char *base)
{
	int	i;
	int	final;
	int	j;

	i = -1;
	j = -1;
	final = 0;
	while (++i < strlen)
	{
		while (base[++j] != '\0')
		{
			if (base[j] == str[i])
			{
				final += j * ft_pow(ft_checkbase(base), strlen - i);
				break ;
			}
		}
		j = -1;
	}
	return (final);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	strlen;

	sign = 1;
	if (!ft_checkbase(base))
		return (0);
	strlen = ft_set_good_start(&sign, &str, base);
	return (ft_why(strlen, str, base) * sign);
}
