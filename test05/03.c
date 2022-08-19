/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 12:23:20 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/18 14:05:21 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int	ft_recursive_power(int nb, int power);
void	test_int(int expected, int received, char *description);

int	main(void)
{
	test_int(1073741824, ft_recursive_power(2, 30), "ex03 - 2^30");
	test_int(INT_MIN, ft_recursive_power(2, 31), "ex03 - 2^31");
	test_int(161051, ft_recursive_power(11, 5), "ex03 - 11^5");
	test_int(1, ft_recursive_power(0, 0), "ex03 - 0^0");
	test_int(1, ft_recursive_power(INT_MAX, 0), "ex03 - INT_MAX^0");
	test_int(INT_MAX, ft_recursive_power(INT_MAX, 1), "ex03 - INT_MAX^1");
	test_int(0, ft_recursive_power(0, INT_MAX), "ex03 - 0^INT_MAX");
	test_int(0, ft_recursive_power(15, INT_MIN), "ex03 - 15^INT_MIN");
	test_int(-161051, ft_recursive_power(-11, 5), "ex03 - -11^5");
}
