/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:27:06 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/25 16:21:35 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*));
void	test_int(int expected, int received, char *description);

int ft_is_a(char* str)
{
	if (str[1] == '\0' && str[0] == 'a')
		return (1);
	return (0);
}

int	main(void)
{
	char *test[] = {"yeyaeyy", "f", "r", "e", 0};
	char *test2[] = {"a", "r", "m", "r", 0};
	test_int(0, ft_any(test, &ft_is_a), "ex02 - ft_is_a no a");
	test_int(1, ft_any(test2, &ft_is_a), "ex02 - ft_is_a yes a");
}
