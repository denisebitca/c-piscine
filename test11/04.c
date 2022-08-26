/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:25:02 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/26 10:54:47 by rbitca           ###   ########.fr       */
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
	int tab4[] = {9, 8, 7, 6, 5, 4, 3, 2};
	int tab5[] = {9, 9, 9, 8, 8, 8, 7, 5};

	test_int(1, ft_is_sort(tab1, 8, &ft_diff), "ex04 - ft diff sorted forwards");
	test_int(1, ft_is_sort(tab2, 8, &ft_diff), "ex04 - ft diff differently sorted");
	test_int(0, ft_is_sort(tab3, 8, &ft_diff), "ex04 - ft diff not sorted");
	test_int(1, ft_is_sort(tab4, 8, &ft_diff), "ex04 - ft diff sorted backwards");
	test_int(1, ft_is_sort(tab5, 8, &ft_diff), "ex04 - ft diff differently sorted backwards");
}
