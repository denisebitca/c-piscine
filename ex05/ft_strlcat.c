/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:04:03 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/14 20:42:22 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	srcsize;
	unsigned int	destsize;

	srcsize = ft_strlen(src);
	destsize = ft_strlen(dest);
	i = 0;
	if (size)
	{
		while (src[i] && i < size)
		{
			dest[srcsize + i] = src[i];
			i++;
		}
		if (!src[i] && i < size)
			dest[srcsize + i] = '\0';
	}
	return (destsize + srcsize);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i++])
		;
	return (i);
}
