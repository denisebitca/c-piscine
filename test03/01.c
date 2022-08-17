/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 10:02:55 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/15 14:02:31 by rbitca           ###   ########.fr       */
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

	char	*t3 = "tert string that is equal until NOW";
	char	*t4 = "test string that is equal until now";

	test_int(strncmp(t3, t4, 2), ft_strncmp(t3, t4, 2), "ex01 - strcmp test, given");
}
