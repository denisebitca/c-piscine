/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:27:06 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/25 16:24:22 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*));
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
	char *test2[] = {"a", "a", "a", "r", 0};
	test_int(0, ft_count_if(test, 4, &ft_is_a), "ex03 - ft_is_a no a");
	test_int(3, ft_count_if(test2, 4, &ft_is_a), "ex03 - ft_is_a yes a");
}
