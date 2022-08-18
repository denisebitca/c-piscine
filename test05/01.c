/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:08:20 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/18 11:30:41 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int	ft_recursive_factorial(int nb);
void	test_int(int expected, int received, char *description);

int	main(void)
{
	test_int(1, ft_recursive_factorial(0), "ex01 - recursive factorial - 1");
	//test_int(0, ft_recursive_factorial(INT_MAX), "ex01 - recursive factorial - INT_MAX");
	test_int(0, ft_recursive_factorial(INT_MIN), "ex01 - recursive factorial - INT_MIN");
	test_int(479001600, ft_recursive_factorial(12), "ex01 - recursive factorial - 12");
	test_int(3628800, ft_recursive_factorial(10), "ex01 - recursive factorial - 10");
	test_int(120, ft_recursive_factorial(5), "ex01 - recursive factorial - 5");
	return (0);
}
