/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 18:13:26 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/14 16:09:16 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test-libraries.c"
#include "../02/ex11/ft_putstr_non_printable.c"

int	main(void)
{
	int	i;
	char	test[2];

	printf("Test: ex11 - printing all characters\nThis test has to be checked manually!\n");

	i = 0;
	test[1] = '\0';
	while(i != 256)
	{
		test[0] = i;
		ft_putstr_non_printable(test);
		i++;
	}
}
