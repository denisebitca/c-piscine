/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 11:59:49 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/22 14:23:05 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

void	test_int(int expected, int received, char *description);
int		ft_find_next_prime(int nb);

int	main(void)
{
	test_int(INT_MAX, ft_find_next_prime(INT_MAX), "ex07 - INT MAX");
	test_int(2, ft_find_next_prime(1), "ex07 - 1");
	test_int(2, ft_find_next_prime(INT_MIN), "ex07 - INT MIN");
	test_int(71257, ft_find_next_prime(71250), "ex07 - 71250");
}
