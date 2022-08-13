/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 11:31:28 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/13 12:32:24 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	printf("DEBUG: %s\n", str);
	while (str[i] != '\0')
	{
		if (str[i] < 'A')
			return (0);
		else if (str[i] > 'Z')
		{
			if (str[i] < 'a')
				return (0);
		}
		else if (str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
