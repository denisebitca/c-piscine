/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 12:23:20 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/18 13:47:37 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int	ft_iterative_power(int nb, int power);
void	test_int(int expected, int received, char *description);

int	main(void)
{
	test_int(1073741824, ft_iterative_power(2, 30), "ex02 - 2^30");
	test_int(INT_MIN, ft_iterative_power(2, 31), "ex02 - 2^31");
	test_int(161051, ft_iterative_power(11, 5), "ex02 - 11^5");
	test_int(1, ft_iterative_power(0, 0), "ex02 - 0^0");
	test_int(1, ft_iterative_power(INT_MAX, 0), "ex02 - INT_MAX^0");
	test_int(INT_MAX, ft_iterative_power(INT_MAX, 1), "ex02 - INT_MAX^1");
	test_int(0, ft_iterative_power(0, INT_MAX), "ex02 - 0^INT_MAX");
	test_int(0, ft_iterative_power(15, INT_MIN), "ex02 - 15^INT_MIN");
	test_int(-161051, ft_iterative_power(-11, 5), "ex02 - -11^5");
}
