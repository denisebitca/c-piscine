/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:04:03 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/15 09:52:27 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	distsize;

	distsize = ft_strlen(dist);
	i = 0;
	if (nb)
	{
		while (src[i] && i < nb)
		{
			dest[distsize + i] = src[i];
			i++;
		}
		dest[distsize + i] = '\0';
	}
	return (dest);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i++])
		;
	return (i);
}
