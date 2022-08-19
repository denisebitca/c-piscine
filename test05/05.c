/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:46:20 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/18 21:02:05 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int	ft_sqrt(int nb);
void	test_int(int expected, int received, char *description);

int	main(void)
{
	test_int(0, ft_sqrt(0), "ex05 - square root of 0");
	test_int(1, ft_sqrt(1), "ex05 - square root of 1");
	test_int(2, ft_sqrt(4), "ex05 - square root of 4");
	test_int(3, ft_sqrt(9), "ex05 - square root of 9");
	test_int(5, ft_sqrt(25), "ex05 - square root of 25");
	test_int(0, ft_sqrt(-5), "ex05 - square root of -5");
	test_int(0, ft_sqrt(INT_MAX), "ex05 - square root of INT_MAX");
	test_int(0, ft_sqrt(INT_MIN), "ex05 - square root of INT_MIN");
	test_int(30000, ft_sqrt(900000000), "ex05 - square root of 900000000");
	test_int(46000, ft_sqrt(2116000000), "ex05 - square root of 2116000000");
	test_int(46340, ft_sqrt(2147395600), "ex05 - square root of 2147395600");
	test_int(0, ft_sqrt(2116000001), "ex05 - square root of 2116000001");
}
