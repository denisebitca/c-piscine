/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 10:54:23 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/23 17:28:08 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../08/ex01/ft_boolean.h"
#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str)
			write(1, str++, 1);
}

t_bool	ft_is_even(int nbr)
{
	return ((EVEN(nbr)) ? TRUE : FALSE);
}

int	main(int argc, char **argv)
{
		(void)argv;
		printf("%d\n", argc - 1);
		if (ft_is_even(argc - 1) == TRUE)
				ft_putstr(EVEN_MSG);
		else
				ft_putstr(ODD_MSG);
		return (SUCCESS);
}
