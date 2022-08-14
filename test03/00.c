/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 10:02:55 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/14 10:09:18 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test-libraries.c"
#include "../03/ex00/ft_strcmp.c"
#include <string.h>

int	main(void)
{
	srand(time(NULL));

	char	*t1 = rand_string_alloc(15, 0);
	char	*t2 = rand_string_alloc(20, 0);

	test_int(strcmp(t1, t2), ft_strcmp(t1, t2), "ex00 - strcmp test, random");

	char	*t3 = "test string that is equal until NOW";
	char	*t4 = "test string that is equal until now";

	test_int(strcmp(t3, t4), ft_strcmp(t3, t4), "ex00 - strcmp test, given");

	test_int(strcmp(t1, t1), ft_strcmp(t1, t1), "ex00 - identical string test, random");

	test_int(strcmp(t3, t3), ft_strcmp(t3, t3), "ex00 - identical string test, given"); 
}
