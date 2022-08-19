/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 09:35:16 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/19 10:05:51 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max);
void	test_int_tab(int *expected, int *received, int size, char *description);
void	test_int(int expected, int received, char *description);


int	main(void)
{
	int e1[] = {-5, -4, -3, -2, -1, 0};
	int e2[] = {19, 20, 21, 22};

	int *a = ft_range(-5, 1);
	int *b = ft_range(10, 1);
	int *c = ft_range(19, 23);

	test_int_tab(e1, a, 6, "ex01 - range between -5 and 1");
	if (b == NULL)
		test_int(0, 0, "ex01 - range between 10 and 1");
	else
		test_int(0, 1, "ex01 - range between 10 and 1\nEXPECTED/RECEIVED RESULTS INACCURATE!");
	test_int_tab(e2, c, 4, "ex01 - range between 19 and 23");

	free(a);
	free(b);
	free(c);
}
