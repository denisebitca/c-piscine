/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:25:02 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/25 16:32:57 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	test_int(int expected, int received, char *description);
int	ft_is_sort(int *tab, int length, int (*f)(int, int));

int ft_diff(int a, int b)
{
	if (a > b)
		return (1);
	if (a == b)
		return (0);
	return (-1);
}

int	main(void)
{
	int tab1[] = {1, 2, 3, 4, 5, 6, 7, 9};
	int tab2[] = {1, 1, 1, 1, 1, 2, 3, 4};
	int tab3[] = {1, 1, 1, 2, 3, 4, 5, -10};

	test_int(1, ft_is_sort(tab1, 8, &ft_diff), "ex04 - ft diff sorted");
	test_int(1, ft_is_sort(tab2, 8, &ft_diff), "ex04 - ft diff differently sorted");
	test_int(0, ft_is_sort(tab3, 8, &ft_diff), "ex04 - ft diff not sorted");
}
