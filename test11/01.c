/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:17:26 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/25 15:25:54 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	test_int_tab(int *expected, int *received, int size, char *description);
int		*ft_map(int *tab, int length, int (*f)(int));

int ft_double(int i)
{
	return (i * 2);
}

int	main(void)
{
	int	expected[6] = {2, 4, 6, 8, 10, 12};
	int	mainarray[6] = {1, 2, 3, 4, 5, 6};
	test_int_tab(expected, ft_map(mainarray, 6, &ft_double), 6, "ex01: ft_double");
}
