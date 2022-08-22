/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 11:47:28 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/22 14:23:54 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i * i < nb && i++ <= 46340)
		;
	return (i);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	sqrt;

	i = 1;
	sqrt = ft_sqrt(nb);
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	while (++i <= sqrt)
		if (nb % i == 0)
			return (0);
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
