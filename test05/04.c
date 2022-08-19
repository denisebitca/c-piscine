/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:46:25 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/18 19:38:08 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int	ft_fibonacci(int index);
int	test_int(int expected, int received, char *description);

int	main(void)
{
	test_int(-1, ft_fibonacci(INT_MIN), "ex04 - INT_MIN");
	test_int(0, ft_fibonacci(0), "ex04 - 0");
	test_int(1, ft_fibonacci(1), "ex04 - 1");
	//test_int(-1, ft_fibonacci(INT_MAX), "ex04 - INT_MAX");
	test_int(9227465, ft_fibonacci(35), "ex04 - INT_MIN");
}
