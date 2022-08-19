/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 09:35:16 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/19 10:28:42 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);
void	test_int_tab(int *expected, int *received, int size, char *description);
void	test_int(int expected, int received, char *description);


int	main(void)
{
	/*int e1[] = {-5, -4, -3, -2, -1, 0};
	int e2[] = {19, 20, 21, 22};*/
	int *range;

	int a = ft_ultimate_range(&range, -5, 1);

	test_int(6, a, "ex02 - range between -5 and 1");
	free(range);
	
	int b = ft_ultimate_range(&range, 10, 1);
	if (b == 0)
		test_int(0, 0, "ex02 - range between 10 and 1");
	else
		test_int(0, 1, "ex02 - range between 10 and 1");
	
	free(range);
	int c = ft_ultimate_range(&range, 19, 23);
	test_int(4, c, "ex02 - range between 19 and 23");

	free(range);
}
