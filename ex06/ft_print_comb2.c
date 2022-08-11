/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 19:10:40 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/11 12:31:45 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_puttwonum(int a, int b);
void	ft_writechar(char c);

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		while (b <= 99)
		{
			ft_puttwonum(a, b);
			b++;
		}
		a++;
		b = a + 1;
	}
}

void	ft_puttwonum(int a, int b)
{
	char	ua;
	char	da;
	char	ub;
	char	db;

	ua = a % 10 + '0';
	da = a / 10 + '0';
	ub = b % 10 + '0';
	db = b / 10 + '0';
	write(1, &da, 1);
	write(1, &ua, 1);
	write(1, " ", 1);
	write(1, &db, 1);
	write(1, &ub, 1);
	if (!(a == 98 && b == 99))
		write(1, ", ", 2);
}
