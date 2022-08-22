/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 11:59:49 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/22 12:13:42 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

void	test_int(int expected, int received, char *description);
int		ft_is_prime(int nb);

int	main(void)
{
	test_int(1, ft_is_prime(INT_MAX), "ex06 - is INT_MAX prime?");
	test_int(0, ft_is_prime(INT_MAX-1), "ex06 - is INT_MAX - 1 prime?");
	test_int(1, ft_is_prime(2), "ex06 - is 2 prime?");
	test_int(0, ft_is_prime(INT_MIN), "ex06 - is INT_MIN prime?");
	test_int(0, ft_is_prime(1), "ex06 - is 1 prime?");
	test_int(1, ft_is_prime(71257), "ex06 - is 71257 prime?");
}
