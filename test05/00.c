/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:08:20 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/18 11:18:36 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int	ft_iterative_factorial(int nb);
void	test_int(int expected, int received, char *description);

int	main(void)
{
	test_int(1, ft_iterative_factorial(0), "ex00 - iterative factorial - 1");
	test_int(0, ft_iterative_factorial(INT_MAX), "ex00 - iterative factorial - INT_MAX");
	test_int(0, ft_iterative_factorial(INT_MIN), "ex00 - iterative factorial - INT_MIN");
	test_int(479001600, ft_iterative_factorial(12), "ex00 - iterative factorial - 12");
	test_int(3628800, ft_iterative_factorial(10), "ex00 - iterative factorial - 10");
	test_int(120, ft_iterative_factorial(5), "ex00 - iterative factorial - 5");
	return (0);
}
