/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 18:13:26 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/14 08:26:29 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test-libraries.c"
#include "../02/ex11/ft_putstr_non_printable.c"

int	main(void)
{
	char c;

	printf("Test: ex11 - printing all non printable characters\nThis test has to be checked manually!\n");

	c = 1;
	while(c != 32)
	{
		ft_putstr_non_printable(&c);
		c++;
	}

	c = 127;
	ft_putstr_non_printable(&c);
}
