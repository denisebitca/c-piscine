/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 09:03:03 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/25 11:13:18 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_doop.h"
#include <unistd.h>

void	ft_helper(int ac, char **av, int (**f)(int, int))
{
	ac = -1;
	if (av[2][1] != '\0')
	{
		write(1, "0", 1);
		return ;
	}
	while ("+-*/%"[++ac])
	{
		if ("+-*/%"[ac] == av[2][0])
		{
			if ("+-*/%"[ac] == '/' && ft_atoi(av[3]) == 0)
				write(1, "Stop : division by zero", 23);
			else if ("+-*/%"[ac] == '%' && ft_atoi(av[3]) == 0)
				write(1, "Stop : modulo by zero", 21);
			else
				ft_putnbr(f[ac](ft_atoi(av[1]), ft_atoi(av[3])));
			break ;
		}
	}
	if (ac == 5)
		write(1, "0", 1);
}

int	main(int ac, char **av)
{
	int		(*f[5])(int, int);

	f[0] = &sum;
	f[1] = &sub;
	f[2] = &multi;
	f[3] = &div;
	f[4] = &mod;
	if (ac != 4)
		return (0);
	ft_helper(ac, av, f);
	write(1, "\n", 1);
	return (0);
}
