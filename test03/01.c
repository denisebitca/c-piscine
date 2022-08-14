/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 10:02:55 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/14 16:56:08 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test-libraries.c"
#include "../03/ex01/ft_strncmp.c"
#include <string.h>

int	main(void)
{
	srand(time(NULL));

	char	*t1 = rand_string_alloc(15, 0);
	srand(time(NULL));
	char	*t2 = rand_string_alloc(20, 1);

	test_int(strncmp(t1, t2, 16), ft_strncmp(t1, t2, 16), "ex01 - strcmp test, random");

	char	*t3 = "test string that is equal until NOW";
	char	*t4 = "test string that is equal until now";

	test_int(strncmp(t3, t4, 10), ft_strncmp(t3, t4, 10), "ex01 - strcmp test, given");

	test_int(strncmp(t1, t1, 10), ft_strncmp(t1, t1, 10), "ex01 - identical string test, random");

	test_int(strncmp(t3, t3, 10), ft_strncmp(t3, t3, 10), "ex01 - identical string test, given"); 
}
