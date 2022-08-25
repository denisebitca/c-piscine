/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:00:06 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/25 15:17:20 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f)(int));

void ft_minusone(int i)
{
	char c;

	c = (char) i;
	c -= 1;
	write(1, &c, 1);
}

int	main(void)
{
	int	mainarray[] = {66, 67, 68, 69, 70};

	ft_foreach(mainarray, 5, &ft_minusone);
	write(1, "\n", 1);
}
