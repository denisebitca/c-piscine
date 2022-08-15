/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:04:03 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/15 09:17:31 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	srcsize;
	unsigned int	destsize;

	srcsize = ft_strlen(src);
	i = 0;
	j = 0;
	while (dest[i] && i < size)
		i++;
	if (i == size)
		return (srcsize + size - 1);
	destsize = i;
	while (i < size - 1 && src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (srcsize + destsize - 1);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i++])
		;
	return (i);
}
